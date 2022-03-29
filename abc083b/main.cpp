#include <iostream>

int main()
{
	int32_t N, A, B, sum, digit_sum, div;

	std::cin >> N >> A >> B;
	sum = 0;
	for (int16_t i = 1; i <= N; i++)
	{
		digit_sum = 0;
		div = i;
		while (div > 0)
		{
			digit_sum += div % 10;
			div /= 10;
		}
		if (A <= digit_sum && digit_sum <= B) sum += i;
	}
	std::cout << sum << std::endl;
}