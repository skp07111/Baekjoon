n = int(input())
road = list(map(int, input().split()))
length = list(map(int, input().split()))
sum = 0
for i in range(n-1):
            sum += road[i]
print(sum)
