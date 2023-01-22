n = int(input())
data = list(map(int, input().split()))
data.sort()
sum = 0
for i in range(n+1):
    for j in range(i):
        sum += data[j]
print(sum)
