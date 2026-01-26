t = int(input())

for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))

    for i in range(n):
        mx = p[i]
        pos = i
        for j in range(i + 1, n):
            if p[j] > mx:
                mx = p[j]
                pos = j

        if mx > p[i]:
            p[i:pos + 1] = reversed(p[i:pos + 1])
            break

    print(*p)

