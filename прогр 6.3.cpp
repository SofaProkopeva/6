#include <iostream>
using namespace std;

int main()
{
	int a, b, n;
	cin >> a >> n;
	b = a % 7 + n;
	b = b % 7;
	if (b == 0)
		b = 7;
	cout << b;
}


