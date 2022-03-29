#include <iostream>
#include <vector>

int main()
{
	int32_t N, count;
	bool end;

	end = false;
	count = -1;
	std::cin >> N;
	std::vector<int32_t> A(N);
	for (int i = 0; i < N; i++)
		std::cin >> A[i];
	while (!end)
	{
		for (int i = 0; i < N; i++)
		{
			if (A[i] % 2)
			{
				end = true;
				break;
			}
			A[i] /= 2;
		}
		count++;
	}
	std::cout << count << std::endl;
	return (0);
}