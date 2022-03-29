#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int16_t N, A, B;

	A = B = 0;
	std::cin >> N;
	std::vector<int16_t> a(N);
	for (int16_t i = 0; i < N; i++)
		std::cin >> a[i];
	std::sort(a.begin(), a.end());
	for (int16_t i = 1; i <= N ; i++)
		if (i % 2 == 1)
			A += a[N - i];
		else
			B += a[N - i];
	std::cout << A - B << std::endl;
	return (0);
}