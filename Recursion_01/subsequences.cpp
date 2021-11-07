#include <iostream>
#include <cstring>
using namespace std;

void solveSubs(char *ip, char *out, int i, int j)
{
	if (ip[i] == '\0') {
		out[j] = '\0';
		cout << out << '\n';
		return;
	}

	solveSubs(ip, out, i + 1, j);
	out[j] = ip[i];
	solveSubs(ip, out, i + 1, j + 1);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char ip[100], out[100];
	cin >> ip;
	int n = strlen(ip);
	solveSubs(ip, out, 0, 0);
	return 0;
}