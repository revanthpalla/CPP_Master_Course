#include <iostream>
#include <time.h>
using namespace std;

int ways(int n)
{
	if (n < 4)
	{
		return 1;
	}
	int ans = ways(n - 1) + ways(n - 4);
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
	cout << ways(n) << '\n';
	clock_t end = clock();
	cout << "\n\nExecuted in " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms" << '\n';
	return 0;
}