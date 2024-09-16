#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    char A[N][M];

    // Input the 2D array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    int X, Y;
    cin >> X >> Y;

    // Check neighbors
    bool allX = true;

    for (int i = X - 1; i <= X + 1; i++) {
        for (int j = Y - 1; j <= Y + 1; j++) {
            if (i >= 0 && i < N && j >= 0 && j < M && A[i][j] == '.') {
                allX = false;
                break;
            }
        }
        if (!allX) {
            break;
        }
    }

    if (allX) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
