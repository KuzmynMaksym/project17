#include <iostream>
using namespace std;
void task_if1(); //Дано два числа. Вивести спочатку більше, а потім менше з них.
int main()
{
	int a, b, max, min;
	cin >> a >> b;
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	cout << "max=" << max << "min=" << min;
	return 0;
}