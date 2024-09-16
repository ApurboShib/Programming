/*
Counts number of set bits in an integer.
For 32 bit integer, delete 8 hex from const values and remove the line for 64 bits.
*/
/*#include<bits/stdc++.h>
using namespace std;
typedef int64_t INT;

const INT b1  = 0x5555555555555555;
const INT b2  = 0x3333333333333333;
const INT b4  = 0x0f0f0f0f0f0f0f0f;
const INT b8  = 0x00ff00ff00ff00ff;
const INT b16 = 0x0000ffff0000ffff;
const INT b32 = 0x00000000ffffffff;
#define endl '\n'
int popcount(INT x) {
    x = (x & b1 ) + (( x >>  1 ) & b1 ); //  2 bits
    x = (x & b2 ) + (( x >>  2 ) & b2 ); //  4 bits
    x = (x & b4 ) + (( x >>  4 ) & b4 ); //  8 bits
    x = (x & b8 ) + (( x >>  8 ) & b8 ); // 16 bits
    x = (x & b16) + (( x >> 16) & b16); // 32 bits
    x = (x & b32) + (( x >> 32) & b32); // 64 bits
    return x;
}
signed main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);

return 0;
}*/
/*
Finds largest rectangular area in a histogram in O(n)
*/
/*#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

ll calc(int *ht, int n) {
    ll ret = 0;
    int top = 1, st[N], i;
    ht[0] = st[0] = ht[++n] = 0;
    for(i = 1; i <= n; i++) {
        while(top > 1 && ht[st[top-1]] >= ht[i]) {
            ret = max(ret, (ll)ht[st[top-1]] * (ll)(i - st[top-2] - 1));
            top--;
        }
        st[top++] = i;
    }
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Add your main code here

    return 0;
}*/

/*
NK is the size of grid you want to precalculate
NK/2,NK/2 will be considered origin
Calculates minimum knight distance from 0,0 to x,y
*/

/*#include<bits/stdc++.h>
using namespace std;

const int KN = 101;
typedef long long i64;

i64 dk[KN][KN];
int dx[] = {-1, -1, 1, 1, -2, -2, 2, 2};
int dy[] = {-2, 2, -2, 2, -1, 1, -1, 1};

void precalc() {
    int x, y, x1, y1, i;
    queue<int> Q;
    memset(dk, 0x3f, sizeof dk);
    x = y = (KN >> 1);
    dk[x][y] = 0;
    Q.push(x);
    Q.push(y);
    while (!Q.empty()) {
        x = Q.front();
        Q.pop();
        y = Q.front();
        Q.pop();
        for (i = 0; i < 8; i++) {
            x1 = x + dx[i], y1 = y + dy[i];
            if (0 <= x1 && x1 < KN && 0 <= y1 && y1 < KN) {
                if (dk[x1][y1] > dk[x][y] + 1) {
                    dk[x1][y1] = dk[x][y] + 1;
                    Q.push(x1);
                    Q.push(y1);
                }
            }
        }
    }
}

i64 knight(i64 x, i64 y) {
    i64 step, res = 0;
    if (x < y)
        swap(x, y);
    while ((x << 1) > KN) {
        step = x / 2 / 2;
        res += step;
        x -= step * 2;
        y -= step;
        if (y < 0)
            y = ((y % 2) + 2) % 2;
        if (x < y)
            swap(x, y);
    }
    res += dk[x + (KN >> 1)][y + (KN >> 1)];
    return res;
}

int main() {
    precalc();

    // Example usage:
    i64 x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    i64 result = knight(x, y);
    cout << "Minimum steps for the knight: " << result << endl;

    return 0;
}*/

/*
Basic trie, don't use it with large alphabet set or long length.
All operation has complexity O(length).
MAX is number of different items.
*/

/*#include <iostream>
using namespace std;

const int MAX = 10; // Adjust MAX according to your needs

struct trie {
    trie *next[MAX + 1];
    trie() {
        for (int i = 0; i <= MAX; i++)
            next[i] = nullptr;
    }
};

void insert(trie *root, int *seq, int len) {
    trie *curr = root;
    for (int i = 0; i < len; i++) {
        if (!curr->next[seq[i]])
            curr->next[seq[i]] = new trie;
        curr = curr->next[seq[i]];
    }
    if (!curr->next[MAX])
        curr->next[MAX] = new trie;
}

bool found(trie *root, int *seq, int len) {
    trie *curr = root;
    for (int i = 0; i < len; i++) {
        if (!curr->next[seq[i]])
            return false;
        curr = curr->next[seq[i]];
    }
    return (curr->next[MAX] != nullptr);
}

// Example usage
int main() {
    trie *root = new trie;

    int seq1[] = {1, 2, 3};
    int len1 = sizeof(seq1) / sizeof(seq1[0]);
    insert(root, seq1, len1);

    int seq2[] = {1, 2, 4};
    int len2 = sizeof(seq2) / sizeof(seq2[0]);
    insert(root, seq2, len2);

    int searchSeq[] = {1, 2, 3};
    int searchLen = sizeof(searchSeq) / sizeof(searchSeq[0]);

    if (found(root, searchSeq, searchLen))
        cout << "Sequence found in the trie" << endl;
    else
        cout << "Sequence not found in the trie" << endl;

    // Clean up memory if needed (not implemented in this example)
    return 0;
}*/

/*
Trie implementation using array, faster and takes less memory.
Each node can contain arbitrary data as needed for solving the problem.
The ALPHABET, MAX and scale() may need tuning as necessary.
*/
/*
#include<bits/stdc++.h>
using namespace std;

const int ALPHABET = 26;
const int MAX = 100000;

#define scale(x) (x - 'a')

struct TrieTree {
    int n, root;
    int next[MAX][ALPHABET];
    char data[MAX]; // there can be more data fields

    void init() {
        root = 0, n = 1;
        data[root] = 0;
        memset(next[root], -1, sizeof(next[root]));
    }

    void insert(char *s) {
        int curr = root, i, k;
        for (i = 0; s[i]; i++) {
            k = scale(s[i]);
            if (next[curr][k] == -1) {
                next[curr][k] = n;
                data[n] = s[i]; // optional
                memset(next[n], -1, sizeof(next[n]));
                n++;
            }
            curr = next[curr][k];
        }
        data[curr] = 0; // sentinel, optional
    }

    bool find(char *s) {
        int curr = root, i, k;
        for (i = 0; s[i]; i++) {
            k = scale(s[i]);
            if (next[curr][k] == -1)
                return false;
            curr = next[curr][k];
        }
        return (data[curr] == 0);
    }

} trieTree;

int main() {
    trieTree.init();

    // Example usage:
    trieTree.insert("apple");
    trieTree.insert("banana");
    trieTree.insert("orange");

    if (trieTree.find("banana"))
        cout << "String 'banana' found in the trie" << endl;
    else
        cout << "String 'banana' not found in the trie" << endl;

    if (trieTree.find("grape"))
        cout << "String 'grape' found in the trie" << endl;
    else
        cout << "String 'grape' not found in the trie" << endl;

    return 0;
}*/
