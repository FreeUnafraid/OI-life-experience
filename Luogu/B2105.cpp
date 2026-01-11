#include <bits/stdc++.h>
using namespace std;
int A[110][110], B[110][110], C[110][110];
int main() {
    int n ,m ,k;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int a = 0; a < m; a++) {
                C[i][j] += A[i][a] * B[a][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
