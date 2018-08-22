#include <bits/stdc++.h>
#define MAXN 10007

using namespace std;

int N, arr[MAXN];

bool isLocal(int i){
    int previousIdx, nextIdx;
    previousIdx = i - 1;
    nextIdx = i + 1;

    if (i == 0){
        previousIdx = N-1;
    } else if (i == N-1) { 
        nextIdx = 0;
    }   

    int previous = arr[previousIdx];
    int next = arr[nextIdx];

    if (previous < arr[i] && next < arr[i]) return true;
    if (previous > arr[i] && next > arr[i]) return true;

    return false;
}

int main(){

    scanf("%d", &N);
    do {
        for (int i = 0; i < N; i++) scanf("%d", &arr[i]);

        int locals = 0;
        for (int i = 0; i < N; i++) { 
            if (isLocal(i)) locals++;
        }

        printf("%d\n", locals);
        scanf("%d", &N);

    } while (N);
        
    return 0;
}