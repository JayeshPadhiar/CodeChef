// Write a program to find the remainder when an integer A is divided by an integer B.

#include <bits/stdc++.h>

using namespace std;

int main() {

	int T;
	scanf("%d", &T);
	while (T--) {

		int a, b;
		scanf("%d %d", &a, &b);

		int ans = a%b;
		printf("%d\n", ans);
	}

	return 0;
}