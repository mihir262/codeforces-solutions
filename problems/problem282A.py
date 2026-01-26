n = int(input())
x = 0
for i in range(n):
    s = input()
    x = x + (-1 if "-" in s else 1)

print(x)
