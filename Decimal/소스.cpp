#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// �Ҽ��� �Ҽ��� �ƴ� ���� ���ؼ��� ������ ���� ����� ��Ÿ������ 
// ū �Ҽ��� ���ؼ��� ���� �ð��� ��������� �����Ѵ�.
bool is_prime1(int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

// �־��� ���� ��� ���� ���� �� �ӷ�
bool is_prime2(int n) 
{
	int sqrn = (int)sqrt(n);
	for (int i = 2; i <= sqrn; i++)
		if (n % i == 0)
			return false;

	return true;
}

//�����佺�׳׽��� ü
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