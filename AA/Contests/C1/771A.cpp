#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int N, M;

vi ladj[150010];

int main(){
    scanf("%d %d", &N, &M);
    
    for (int m = 0; m < M; m++) {
        int a, b;
        scanf("%d %d", &a, &b);
        ladj[a].push_back(b);
        ladj[b].push_back(a);
    }

    return 0;
}