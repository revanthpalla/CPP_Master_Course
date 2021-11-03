#include <iostream>
#include <time.h>
using namespace std;

int ways(int n, int k)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	if (n < 0)
	{
		return 0;
	}
	int ans = 0;
	for (int i = 1; i <= k; i++)
	{
		ans += ways(n - i, k);
	}
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t begin = clock();
#endif
	int n, k;
	cin >> n >> k;
	cout << ways(n, k) << '\n';
	clock_t end = clock();
	cout << "\n\nExecuted in " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms" << '\n';
	return 0;
}