#include <bits/stdc++.h>

using namespace std;
  
int n, k;
string w;  //  L SW CNT  
int dp[100010][2][1][1];

void solve(int index) {
    if (index == 0) {
        if (w[index] == 'a') {
            dp[index][0][0][0] = 1;
            dp[index][1][0][0] = 0;
            dp[index][0][1][1] = 0;
            dp[index][1][1][1] = 1;
        } else {
            dp[index][0][0][0] = 0;
            dp[index][1][0][0] = 1;
            dp[index][0][1][1] = 1;
            dp[index][1][1][1] = 0;
        }

        solve(index + 1);
        
    } else {
        if (w[index] == 'a') {
            if (w[index - 1] == 'a') {
                dp[index][0] = dp[index-1][0] + 1;
            } else {
                dp[index][0] = dp[index-1][0];
            }
            dp[index][1] = dp[index-1][1];

        } else {
            if (w[index] == 'b') {
                dp[index][1] = dp[index-1][1] + 1;
            } else {
                dp[index][1] = dp[index-1][1];
            }
            dp[index][0] = dp[index-1][0];
        }
    }
    if (index < n - 1) return solve(index + 1);
    return 1;
}


int main(){
    cin >> n >> k;
    cin >> w;
    memset(dp, -1, sizeof dp);
    cout << solve(0) << endl;
    for (int i = 0; i < n; i++) {
        cout << dp[i][0] << " ";
    } cout << endl; 
    for (int i = 0; i < n; i++) {
        cout << dp[i][1] << " ";
    } cout << endl; 
    return 0;
}