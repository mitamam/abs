#include <iostream>

int main()
{
	int64_t N, Y, z,sum;

	std::cin >> N >> Y;
	for (int64_t x = 0; x <= N; x++)
	{
		for (int64_t y = 0; x + y <= N; y++)
		{
			z = N - (x + y);
			sum = (x * 10000) + (y * 5000) + (z * 1000);
			if (sum == Y)
			{
				std::cout << x << " " << y << " " << z << std::endl;
				return (0);
			}
		}
	}
	std::cout << -1 << " " <<-1 << " " << -1 << std::endl;
	return 0;
}