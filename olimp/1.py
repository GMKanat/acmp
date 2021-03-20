import re
text = input()
pattern = r'(\w+)@(\w+).(\w+)'
k = re.findall(pattern, text)
print("Nickname: ")
for x, y, z in k:
	print(x, end = " ")
print()
print("Domain: ")
for x, y, z in k:
	print(y, end = " ")
print()
print("suffix: ")
for x, y, z in k:
	print(z, end = " ")