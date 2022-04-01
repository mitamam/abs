#include <iostream>
#include <vector>

bool is_number_even(int32_t n)
{
	return (!(n % 2));
}

int main()
{
	int32_t N, dt, dx, dy;
	bool possible, even_dt, even_dxdy;

	dt = dx = dy = 0;
	possible = true;
	std::cin >> N;
	std::vector<int32_t> t(N + 1), x(N + 1), y(N + 1);
	t[0] = x[0] = y[0] = 0;
	for (int32_t i = 1; i <= N; i++) std::cin >> t[i] >> x[i] >> y[i];
	for (int32_t i = 0; i < N; i++)
	{
		dt = abs(t[i + 1] - t[i]);
		dx = abs(x[i + 1] - x[i]);
		dy = abs(y[i + 1] - y[i]);
		even_dt = is_number_even(dt);
		even_dxdy = is_number_even(dx + dy);
		if ((even_dt != even_dxdy) || dt < (dx + dy))
		{
			possible = false;
			break;
		}
	}
	if (possible == false)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;
	return 0;
}