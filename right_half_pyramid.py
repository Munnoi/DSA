def right_half_pyramid(n):
    def v1():
        for i in range(n):
            for _ in range(i + 1):
                print("*", end="")
            print()
    v1()

right_half_pyramid(5)
