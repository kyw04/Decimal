#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 소수나 소수가 아닌 수에 대해서는 굉장히 빠른 결과를 나타내지만 
// 큰 소수에 대해서는 실행 시간이 비약적으로 증가한다.
bool is_prime1(int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

// 주어진 값의 대소 관계 없이 고른 속력
bool is_prime2(int n) 
{
	int sqrn = (int)sqrt(n);
	for (int i = 2; i <= sqrn; i++)
		if (n % i == 0)
			return false;

	return true;
}

//에라토스테네스의 체
bool eratosthenes(int n)
{
	vector<bool> v(n + 1, false);
	for (int i = 2; i <= n; i++)
	{
		if (!v[i])
			for (int j = i + i; j <= n; j += i)
				v[j] = true;
	}
	return v[n];
}
int main()
{
	int n;
	cin >> n;

	cout << is_prime1(n) << '\n';
	cout << is_prime2(n) << '\n';
	cout << !eratosthenes(n) << '\n';
	return 0;
}