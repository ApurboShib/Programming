#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

void dfs(int station, int destination, vector<bool>& visited, int& lines, const unordered_map<int, vector<pair<int, int>>>& adjacency_list) {
    visited[station] = true;

    if (station == destination) {
        return;
    }

    for (const auto& neighbor : adjacency_list.at(station)) {
        int next_station = neighbor.first;
        int color = neighbor.second;

        if (!visited[next_station]) {
            dfs(next_station, destination, visited, lines, adjacency_list);
            if (color != lines) {
                lines = min(lines, color);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        unordered_map<int, vector<pair<int, int>>> adjacency_list;
        for (int i = 0; i < m; ++i) {
            int u, v, c;
            cin >> u >> v >> c;
            adjacency_list[u].emplace_back(v, c);
            adjacency_list[v].emplace_back(u, c);
        }

        int b, e;
        cin >> b >> e;

        vector<bool> visited(n + 1, false);
        int lines = INT_MAX;

        dfs(b, e, visited, lines, adjacency_list);

        if (lines == INT_MAX) {
            cout << "0\n";
        } else {
            cout << "1\n";
        }
    }

    return 0;
}
