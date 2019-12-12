#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	b = a / 100;
	c = a % 100;
	if (c >= 1)
		cout << b + 1;
	else
		cout << b;
}

