#include <bits/stdc++.h>
#define MAXN 10

using namespace std;

bool matrix[MAXN][MAXN];

int main(){

    int ans = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            bool tmp;
            cin >> tmp;
            if (tmp) {
                ans = abs(i-3) + abs(j-3);
            }
        }
    }
    cout << ans << endl;
    return 0;
}