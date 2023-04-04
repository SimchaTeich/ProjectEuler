def main():
    Fibo = [1, 2]
    for _ in range(30): Fibo.append(Fibo[-1] + Fibo[-2])
    print(sum(list(filter(lambda x: x%2 == 0, Fibo))))

if __name__ == '__main__':
    main()
