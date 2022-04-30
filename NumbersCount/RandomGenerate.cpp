#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

int main()
{
	srand(time(NULL));

	while (true)
	{
		double sim = rand() % 4;
		double a, b;
		a = rand() % 100;
		b = rand() % 100;

		cout << "\"" << a;
		if (sim == 0)
		{
			cout << " + " << b << " = " << a + b;
		}
		else if (sim == 1)
		{
			cout << " - " << b << " = " << a - b;
		}
		else if (sim == 2)
		{
			cout << " * " << b << " = " << a * b;
		}
		else if (sim == 3)
		{
			cout << " / " << b << " = " << a / b;
		}

		cout << "\"" << endl;
	}

	system("pause");
	return 0;
}