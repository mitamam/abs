#include <iostream>

int main()
{
	int16_t A, B, C, X, comb, a, b, rem;

	std::cin >> A >> B >> C >> X;
	comb = 0;
	a = 0;
	while ((a * 500) <= X && a <= A)
	{
		b = 0;
		while ((b * 100) + (a * 500) <= X && b <= B)
		{
			rem = X - ((b * 100) + (a * 500));
			if (rem / 50 <= C)
				comb++;
			b++;
		}
		a++;
	}
	std::cout << comb << std::endl;
	return (0);
}