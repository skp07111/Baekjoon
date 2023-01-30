n = int(input())

arr = []

for i in range(n):
    arr.append(input())

increase = sorted(arr)
decrease = sorted(arr, reverse=True)
if arr == increase:
    print("INCREASING")
elif arr == decrease:
    print("DECREASING")
else:
    print("NEITHER")
