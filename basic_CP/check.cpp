#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        
        // Check if the scores are valid
        if ((p1 + p2 + p3) % 2 != 0 || p1 > p2 || p2 > p3) {
            cout << -1 << endl;
            continue;
        }
        
        // Calculate the number of total games
        int totalPoints = p1 + p2 + p3;
        int totalGames = totalPoints / 2;
        
        // Calculate the maximum possible draws
        int maxDraws = totalGames - (p3 - p2) - (p3 - p1);
        
        // Check if the calculated maxDraws is valid
        if (maxDraws < 0 || maxDraws > totalGames) {
            cout << -1 << endl;
        } else {
            cout << maxDraws << endl;
        }
    }
    
    return 0;
}
