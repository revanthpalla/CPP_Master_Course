#include <iostream>
#include <time.h>
#include <cstring>
using namespace std;

int string_to_int(char ch[], int n)
{
	if (n <= 0)
	{
		return 0;
	}
	int digit = ch[n - 1] - '0';
	int small_ans = string_to_int(ch, n - 1);
	int bigans = small_ans * 10 + digit;
	return bigans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	clock_t begin = clock();
#endif
	char ch[] = "4329";
	int n = strlen(ch);
	cout << string_to_int(ch, n) << '\n';
	clock_t end = clock();
	cout << "\n\nExecuted in " << (double)(end - begin) / CLOCKS_PER_SEC * 1000 << " ms" << '\n';
	return 0;
}