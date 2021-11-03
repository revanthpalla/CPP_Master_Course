#include <iostream>
#include <time.h>
#include <cstring>
using namespace std;

void replace_pi(char *a, int i)
{
	//base case
	if (a[i] == '\0' || a[i + 1] == '\0')
	{
		return;
	}

	if (a[i] == 'p' && a[i + 1] == 'i')
	{
		int j = i + 2;
		while (a[j] != '\0')
		{
			j++;
		}
		while (j >= i + 2)
		{
			a[j + 2] = a[j];
			j--;
		}
		a[i] = '3';
		a[i + 1] = '.';
		a[i + 2] = '1';
		a[i + 3] = '4';
		replace_pi(a, i + 4);
	} else {
		replace_pi(a, i + 1);
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t begin = clock();
#endif
	char a[100] = "axpiaepif";
	cout << "Initial string without changing: " << a << '\n';
	replace_pi(a, 0);
	cout << "Modified string: " << a << '\n';
	clock_t end = clock();
	cout << "\n\nExecuted in " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms" << '\n';
	return 0;
}