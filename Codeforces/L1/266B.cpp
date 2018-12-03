#include <bits/stdc++.h>

using namespace std;

int N, T;
string Q;
queue < pair<int, int> > swaps;

void swap_all() {
    while (!swaps.empty()) {
            pair<int, int> curr = swaps.front();
            swaps.pop();

            char tmp = Q[curr.first];
            Q[curr.first] = Q[curr.second];
            Q[curr.second] = tmp;
        }
}

void check_swaps(){
    for (int i = 0; i < N; i++) {
        char curr = Q[i];
        if (curr == 'B' && i < N-1 && Q[i+1] == 'G') {
            swaps.push({i, i+1});
        }
    }
}

int main(){
    cin >> N >> T;
    cin >> Q;

    check_swaps();

    for (int clk = 0; clk < T; clk++) {
        swap_all();
        check_swaps();
    }

    cout << Q << endl;

    return 0;
}

// BGBGGBB