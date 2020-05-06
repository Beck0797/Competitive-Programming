// https://cses.fi/problemset/task/1083
/*
 * missingNumber.cpp
 *
 *  Created on: Apr 28, 2020
 *      Author: Bekhzod Abduraupov
 */
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> list;
 
	for (int i = 1; i < n; i++) {
		long int in;
		cin >> in;
		list.push_back(in);
	}
	sort(list.begin(), list.end());
	if(list.size() == 2 && list[1]!= 2)
		cout << "2";
	if(!count(list.begin(), list.end(), n))
		cout << n;
 
	for (int i = 0; i < n -1; i+=2) {
		if (i == 0 && list[i] != 1) {
			cout << "1 ";
		}
		if (i != n-2 && list[i + 1] != list[i] + 1) {
			cout << list[i] + 1 << " ";
		}else if(i != 0 && list[i-1] != list[i] - 1){
			cout << list[i] - 1 << " ";
		}
 
	}
	return 0;
}
