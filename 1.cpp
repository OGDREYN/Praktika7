using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите число:";
	cin >> a;
	int i = 0;
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	cout << " Количество цифр в числе: " << i;
}
