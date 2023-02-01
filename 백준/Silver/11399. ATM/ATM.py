# 사람의 수 n 입력
n = int(input())
# 각 사람이 돈을 인출하는데 걸리는 시간을 입력받아 data 리스트에 저장
data = list(map(int, input().split()))  
# data 리스트 오름차순 정렬
data.sort()

# 오름차순으로 정렬된 값들 차례대로 더하기
sum = 0
for i in range(n+1):
    for j in range(i):
        sum += data[j]
        
# 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값 sum 출력
print(sum)
