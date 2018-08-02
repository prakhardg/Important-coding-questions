#include <bits/stdc++.h>
using namespace std;

vector<int> dp(76, -1);

int solve(int n) {
    if (n < 7) return n;
    int tmp;
    if (dp[n] == -1) {
        for (int i=n-3; i >= 0; i--) {
            tmp = solve(i)*(n-i-1);
            dp[n] = max(dp[n], tmp);
        }
    }
    return dp[n];
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    cout << solve(n) << "\n";
	}
	return 0;
}
