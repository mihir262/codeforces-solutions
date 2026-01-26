t = int(input())

for i in range(t):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    c = [max(a[i], b[i]) for i in range(n)]

    suf = [0] * n
    suf[-1] = c[-1]
    for i in range(n - 2, -1, -1):
        suf[i] = max(suf[i + 1], c[i])

    for i in range(q):
        l, r = map(int, input().split())
        l -= 1
        r -= 1
        print(sum(suf[l:r + 1]), end=" ")
    print()
