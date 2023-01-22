n = int(input())
r = [0] * n
for i in range(n):
    r[i] = int(input())
r.sort()
array = [0] * n
for i in range(n):
    array[i] = r[i] * (n-i)
array.sort(reverse = True)
print(array[0])