n = int(input())
arr=[]

for i in range(0, n):
    tk = int(input())
    arr.append(tk)

arr = sorted(arr)
amt = 0
for i in range(0, n):
    res = arr[i]*(n-i)
    if res>amt:
        amt=res

print(amt)