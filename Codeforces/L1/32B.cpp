#include <bits/stdc++.h>

using namespace std;

string entry;
string ans; 

int main(){

    cin >> entry;

    for (int i = 0; i < entry.size(); i++) {
        if (entry[i] == '.') {
            ans += '0'; continue;
        }
        if (entry[i] == '-') {
            if (i < entry.size() - 1 && entry[i+1] == '-') {
                ans += '2'; i++; continue;
            }
            if (i < entry.size() - 1 && entry[i+1] == '.' ) {
                ans += '1'; i++; continue;
            }
        } 
    }

    cout << ans << endl;;
    return 0;
}