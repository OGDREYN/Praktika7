using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	int arr[] = { 33,57,99,68 };
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += arr[i];
	}
	cout << sum;
}
