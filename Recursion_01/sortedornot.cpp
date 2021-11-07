#include <iostream>
using namespace std;

bool sorted(int arr[], int n, int i) {
	if (i == n - 1) {
		return true;
	}
	if (arr[i] < arr[i + 1]) {
		return sorted(arr, n, i + 1);
	}
	return false;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	bool ans = sorted(arr, n, 0);
	if (ans) {
		cout << "sorted" << '\n';
	} else {
		cout << "not sorted" << '\n';
	}
	return 0;
}