#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n)
{
	int sqrn = (int)sqrt(n);
	for (int i = 2; i < sqrn; i++)
		if (n % i == 0)
			return false;

	return true;
}
int main()
{
	int n;
	cin >> n;
	
	cout << is_prime(n);
	return 0;
}