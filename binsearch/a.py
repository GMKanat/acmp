import math

a, b, c = map(int, input().split())
s = a*b*c
n = 0
if(a > b):
	n = math.ceil(c/a)
else:
	n = math.ceil(c/b)
print(n)