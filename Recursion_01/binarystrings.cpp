#include <iostream>
#include <time.h>
using namespace std;

int ways(int n, int ld)
{
	//base case
	if (n == 0) {
		return 0;
	}
	if (n == 1 && ld == 0)
	{
		return 2;
	} else if (n == 1 && ld == 1)
	{
		return 1;
	}
	if (ld == 0)
	{
		return ways(n - 1, 0) + ways(n - 1, 1);
	} else {
		return ways(n - 1, 0);
	}
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
	cout << ways(n, 0) << '\n';
	clock_t end = clock();
	cout << "\n\nExecuted in " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms" << '\n';
	return 0;
}