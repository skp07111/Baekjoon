n, k = map(int, input().split())
coin_types = [0] * n
for i in range(n):
    coin_types[i] = int(input())
coin_types.reverse()
count = 0
for i in coin_types:
    count += k // i
    k %= i
print(count)
