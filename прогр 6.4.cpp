#include <iostream>
using namespace std;

int main()
{
	int a, b, c, a1, b1, s, k;
	cin >> a >> b >> c;
	a1 = a / c;
	b1 = b / c;
	k = a1 * b1;
	s = a * b - k * c * c;
	cout << "k=" << k << ", S=" << s;
}


