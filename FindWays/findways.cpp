#include <iostream>

int FindWay(int m, int n)
{
	if (m == 0 || n == 0)
	{
		return 0;
	}
	if (m == 1 || n == 1)
	{
		return 1;
	}
	//recursive case
	return FindWay(m - 1, n) + FindWay(m, n - 1);
}

int main()
{
	std::cout << FindWay(20, 20) << std::endl;
}