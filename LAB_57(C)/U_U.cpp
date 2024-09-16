#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

const int INF = 1e9;

vector<vector<int>> dist;
vector<vector<bool>> visited;

void dijkstra(int start) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push(make_pair(0, start));
    visited[start].assign(dist.size(), false);
    visited[start][start] = true;

    while (!pq.empty()) {
        pii p = pq.top();
        pq.pop();
        int d = p.first;
        int u = p.second;

        for (int v = 0; v < dist.size(); v++) {
            if (!visited[u][v] && dist[u][v] != INF) {
                if (dist[u][v] + d < dist[start][v]) {
                    dist[start][v] = dist[u][v] + d;
                }
                pq.push(make_pair(dist[u][v] + d, v));
                visited[u][v] = true;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    dist.assign(N, vector<int>(N, INF));
    visited.assign(N, vector<bool>(N, false));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> dist[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        dijkstra(i);
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        int S, G, D;
        cin >> S >> G >> D;

        int time_with_gas = dist[S][G] + dist[G][D];
        int time_without_gas = dist[S][D];

        cout << time_with_gas << " " << time_without_gas << endl;
    }

    return 0;
}
