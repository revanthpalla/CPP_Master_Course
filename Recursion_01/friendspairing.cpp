#include <iostream>
#include <time.h>
using namespace std;

int ways(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	int ans = ways(n - 1) + (n - 1) * ways(n - 2);
	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t begin = clock();
#endif
	int n;
	cin >> n;
	cout << ways(n) << endl;
	clock_t end = clock();
	cout << "\n\nExecuted in " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms" << '\n';
	return 0;
}