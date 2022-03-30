#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int16_t N, X;
	
	X = 1;
	std::cin >> N;
	std::vector<int16_t> d(N);
	for (int16_t i = 0; i < N; i++)
		std::cin >> d[i];
	std::sort(d.begin(), d.end());
	for (int16_t i = 0; i < (N - 1); i++)
	{
		if (d[i] == d[i + 1])
			continue;
		X++;
	}
	std::cout << X << std::endl;
	return (0);
}