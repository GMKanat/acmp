n = int(input())
n1 = n
cur,a,b = map(int,input().split())
mod = 1791791791
ans1 = 0
ans2 = 1
mx1 = 0
mx2 = 0
for i in range(n):
    cur = (cur*a + b)%mod
    x = cur
    if(x > mx1):
        ans2 = ans1
        ans1 = i
        mx2 = mx1
        mx1 = x
    elif(x > mx2):
        mx2 = x 
        ans2 = i

print(ans1 + 1, ans2 + 1)