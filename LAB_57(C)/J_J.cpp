#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;
vector<int> sz;

void make_set(int x) {
  parent[x] = x;
  sz[x] = 1;
}

int find_set(int x) {
  if (parent[x] == x) {
    return x;
  }
  return parent[x] = find_set(parent[x]);
}

void merge(int x, int y) {
  int x_root = find_set(x);
  int y_root = find_set(y);
  if (x_root != y_root) { 
    if (sz[x_root] < sz[y_root]) {
      swap(x_root, y_root);
    }
    parent[y_root] = x_root;
    sz[x_root] += sz[y_root];
  }
}

int main() {
  int n;
  cin >> n;
  parent.resize(n + 1);
  sz.resize(n + 1);

  for (int i = 1; i <= n; i++) {
    make_set(i);
  }

  for (int i = 1; i <= n; i++) {
    int p;
    cin >> p;
    if (p != -1) {
      merge(i, p);
    }
  }

  int groups = 0;
  for (int i = 1; i <= n; i++) {
    if (parent[i] == i) {
      groups++;
    }
  }

  cout << groups << endl;

  return 0;
}
