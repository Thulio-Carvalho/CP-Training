#include <bits/stdc++.h>

using namespace std;

int year;

bool distinct(string s){
    unordered_map<char, int> counter;

    for (char e : s) {
        if (counter.find(e) != counter.end()) {
            counter[e]++; 
        } else {
            counter[e] = 1;
        }
    }
    
    for (auto kv : counter) {
        if (kv.second > 1) return false;
    }

    return true;
}

int main(){
    cin >> year;
    while (1) {
        if (distinct(to_string(++year))) {
            cout << year << endl;
            break;
        }
    }
    return 0;
}