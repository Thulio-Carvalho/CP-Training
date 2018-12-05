#include <bits/stdc++.h>
#define MAXN 507

using namespace std;

typedef vector <int> vi;

char grid[MAXN][MAXN];
char cp_grid[MAXN][MAXN];
bool vis[MAXN][MAXN];
int n, m;


void DFS(int i, int j, bool start){
    char curr = grid[i][j];

    // if (curr == '$'){
    //     for (int i = 1; i <= n; i++) {
    //         for (int j = 1; j <= m; j++) {
    //             grid[i][j] = cp_grid[i][j];
    //         }
    //     }
    // }
    if (curr != '$') {
        cout << i << " " << j << endl;
        if (curr == 'X' && !start) {
            DFS(i + 1, j, 0);
        } else if (curr == '.' || start){
            grid[i][j] = 'X';
            DFS(i, j-1, 0);
            DFS(i, j+1, 0);
            DFS(i+1, j, 0);
            DFS(i-1, j, 0);
        }
    }
}

int main(){
    cin >> n >> m;
    memset(grid, '$', sizeof grid);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
            cp_grid[i][j] = grid[i][j];
        }
    }

    int s_x, s_y, e_x, e_y;
    cin >> s_x >> s_y;
    cin >> e_x >> e_y;

    DFS(s_x, s_y, 1);

    if (vis[e_x][e_y]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}