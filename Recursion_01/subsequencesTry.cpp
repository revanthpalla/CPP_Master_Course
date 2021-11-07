#include <iostream>
#include <string>
using namespace std;

void solve(string ip, string out, int n, int i) {
	if (i == n) {
		out[i] = '\0';
		cout << out << '\n';
		return;
	}
	// doesnot include ith character
	solve(ip, out, n, i + 1);
	// include ith character
	solve(ip, out + ip[i], n, i + 1);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string ip;
	cin >> ip;
	int n = ip.length();
	string out = "";
	solve(ip, out, n, 0);
	return 0;
}