// https://codeforces.com/contest/1348/problem/A

/*
 * phoenix and balanc.cpp
 *
 *  Created on: May 5, 2020
 *      Author: Bekhzod Abduraupov
 */
 
#include<bits/stdc++.h>
using namespace std;
int pile(int n) {
	int res = 2;
	for (int i = 2; i < n; i *= 2) {
		res += 2 * i;
	}
	return res;
}
int piles(int s, int n) {
	int res = 0;
	for (int i = s; i < n; i *= 2) {
		res += 2 * i;
	}
	return res + s;
}
int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (n == 2) {
			cout << "2" << endl;
			continue;
		}
		int pile1 = pow(2, n) + pile(pow(2, n / 2 - 1));
		int pile2 = piles(pow(2, n / 2), pow(2, n - 1));
 
		cout << pile1 - pile2 << endl;
 
	}
 
	return 0;
}
 
