// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// const int N = 1e5 + 9;

// vector<int> v;
// stack<int> st[100];

// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     int mx = INT_MIN;
//     while(t--){
//         int n;
//         cin >> n;
       
//         st[n % 10].push(n);
//     }
  
//     for (int i = 0; i < 100; i++) {
//         while (!st[i].empty()) {
//             cout << st[i].top() << " ";
//             st[i].pop();
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int birthYear;
};

bool compareByAge(const Person &a, const Person &b) {
    return a.birthYear < b.birthYear;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<Person> people(n);

        for (int j = 0; j < n; ++j) {
            cin >> people[j].name >> people[j].birthYear;
        }

        sort(people.begin(), people.end(), compareByAge);

        for (const auto &person : people) {
            cout << person.name << endl;
        }
    }

    return 0;
}
