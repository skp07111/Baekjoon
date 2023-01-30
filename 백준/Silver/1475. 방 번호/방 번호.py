import math

arr = list(map(int, input()))
arr.sort()
    
cnt = []
for i in range (10):
    cnt.append(arr.count(i))
cnt[6] = math.ceil((cnt[6] + cnt[9]) / 2)
cnt[9] = 0
print(max(cnt))
