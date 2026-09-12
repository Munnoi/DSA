def right_half_pyramid(n):
    # Time - O(n^2), Space - O(1)
    def v1():
        for i in range(n):
            for _ in range(i + 1):
                print("*", end="")
            print()
    # v1()

    # Time - O(n^2), Space - O(1)
    def v2():
        for i in range(1, n+1):
            print("*" * i)
    # v2()

    def v3():
        print("\n".join("*" * i for i in range(1, n + 1)))

    v3()

right_half_pyramid(5)