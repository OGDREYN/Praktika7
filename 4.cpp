using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите число: " << endl;
	cin >> a;
	if (a > 0 && a != 0)
	{
		cout << "Ваше число являеться положительным.";
	}
	else if (a < 0 && a != 0)
	{
		cout << "Ваше число являеться отрицательным.";
	}
	else if (a == 0)
	{
		cout << "Ваше число являеться нулём.";
	}
}
