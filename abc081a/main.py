squares = map(int, list(input()))
count = 0
for s in squares:
	if s == 1:
		count += 1
print(count)