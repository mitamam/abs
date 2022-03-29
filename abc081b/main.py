def main():
	N = int(input())
	A = list(map(int, input().split()))
	counts = []
	for a in A:
		count = 0
		while a % 2 == 0:
			a //= 2
			count += 1
		counts.append(count)
	print(min(counts))

if __name__ == '__main__':
	main()
