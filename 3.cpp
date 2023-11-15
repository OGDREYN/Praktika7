using namespace std;
#include <iostream>

int main()
{
    setlocale(0, "");
    int arr[] = { 10,15,20,5 };
    int sum = 1;
    for (int i = 0; i < 4; i++)
    {
        sum *= arr[i];
    }
    cout << sum;
}
