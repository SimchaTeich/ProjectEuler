#include <iostream>
#include <vector>

using std::vector;


int main()
{
    int sum = 0;
    size_t size = 0;
    vector<int> fibo;

    fibo.push_back(1);
    fibo.push_back(2);

    // fill the vector
    size = 2;
    while(size < 32)
    {
        fibo.push_back(fibo[size-1] + fibo[size-2]);
        size++;
    }

    // sum the relevant
    for(size_t i = 0; i < size; i++)
    {
        if(fibo[i] % 2 == 0){ sum += fibo[i]; }
    }

    std::cout << sum << std::endl;
    return 0;
}