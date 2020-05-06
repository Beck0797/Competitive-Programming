//https://cses.fi/problemset/task/1068
/*
 * weirdAlg.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: Bekhzod Abduraupov
 */
#include<iostream>
using namespace std;
int main() {
	long int n;
	cin >> n;
	while (true) {
		cout << n << " ";
		if (n == 1)
			break;
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
	}
	cout << "\n";
	return 0;
}
