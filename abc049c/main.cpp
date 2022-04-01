#include <iostream>
#include <algorithm>

std::string d[4] = {"dream", "dreamer", "erase", "eraser"};

int main()
{
	bool find;
	std::size_t index;
	std::string S, cut;

	std::cin >> S;
	std::reverse(S.begin(), S.end());
	for (int16_t i = 0; i < 4; i++)
		std::reverse(d[i].begin(), d[i].end());

	index = 0;
	while (index < S.length())
	{
		find = false;
		for (int16_t i = 0; i < 4; i++)
		{
			cut = S.substr(index, d[i].length());
			/* If the substring is the same as a word */
			if (cut.compare(d[i]) == 0)
			{
				index += d[i].length();
				find = true;
				break;
			}
		}
		if (find == false)
		{
			std::cout << "NO" << std::endl;
			return 0;
		}
	}
	std::cout << "YES" << std::endl;
	return 0;
}