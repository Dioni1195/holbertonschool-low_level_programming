#!/usr/bin/python3

def isPalindro(c):
        num = str(c)
        cont = len(num) - 1
        for i in num:
                if i != num[cont]:
                    return (0)
                else:
                    cont-=1

for i in range(100, 1000):
        for j in range(100, 1000):
                if i > j or i == j:
                    n = isPalindro(i * j)
                    if n == 1:
                        num = i * jq
                        print("{} * {} = ".format(i, j), i * j)

