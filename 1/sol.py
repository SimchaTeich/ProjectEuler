def main():
    print(sum(filter(lambda n: n%3 == 0 or n%5 == 0, list(range(1000)))))


if __name__ == '__main__':
    main()