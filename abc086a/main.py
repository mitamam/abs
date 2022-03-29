import math as math
ab = math.prod(map(int, input().split()))
if ab % 2 == 0:
	print("Even")
else:
	print("Odd")