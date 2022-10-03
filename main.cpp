#include <iostream>

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i > 0)
		{
			std::count << 42 / i;
		}
	}
	return 0;
}