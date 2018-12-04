#include <bits/stdc++.h>

using namespace std;

int matrix[10][10];
bool out[10][10];
int N = 3;

void change_values(int i, int j) {
    out[i+1][j] = !out[i+1][j];
    out[i-1][j] = !out[i-1][j];
    out[i][j+1] = !out[i][j+1];
    out[i][j-1] = !out[i][j-1];

    out[i][j] = !out[i][j];

}

int main(){

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            scanf("%d", &matrix[i][j]);
            out[i][j] = 1;
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
           if (matrix[i][j] % 2 == 1) {
               change_values(i, j);
           } 
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d", out[i][j]);
        } printf("\n");
    }

    return 0;
}