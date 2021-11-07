#include <iostream>
using namespace std;

void balance(char *a, int n, int i, int open, int close)
{
	if (i == 2 * n) {
		a[i] = '\0';
		cout << a << '\n';
		return;
	}
	if (open < n) {
		a[i] = '(';
		balance(a, n, i + 1, open + 1, close);
	} if (open > close) {
		a[i] = ')';
		balance(a, n, i + 1, open, close + 1);
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	char a[100];
	balance(a, n, 0, 0, 0);
	return 0;
}