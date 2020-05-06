//https://codeforces.com/contest/263/problem/A
/*
 * beautifulMatrix.cpp
 *
 *  Created on: Apr 29, 2020
 *      Author: Bekhzod Abduraupov
 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int n;
			scanf("%d", &n);
			if (n == 1) {
 
					int ans = abs(i - 2) + abs(j - 2);
					cout << ans;
 
			}
		}
 
	}
	return 0;
}
 
