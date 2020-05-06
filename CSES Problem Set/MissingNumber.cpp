//https://cses.fi/problemset/task/1083
#include <iostream>
 
using namespace std;
 
int nums[200001];
 
int main() {
    int n; cin >> n;
    for (int i = 0, a; i < n - 1; i++) {
        cin >> a;
        nums[a] = a;
    }
 
    for (int i = 1; i <= n; i++)
        if (nums[i] == 0) cout << i << endl;
 
 
    return 0;
}
