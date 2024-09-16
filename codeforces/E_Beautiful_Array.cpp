#include <iostream>
#include <string>

using namespace std;

long long evaluate_min_value(const string& s, int n) {
    if (n == 1) return stoll(s); 

    long long result = 0;
    long long current = 0;
    long long last_num = 0;
    char last_op = '+';

    int i = 0;
    while (i < n) {
        long long num = 0;
        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
            i++;
        }

        if (last_op == '+') {
            current += last_num;
            last_num = num;
        } else if (last_op == '*') {
            last_num *= num;
        }

        if (i < n) {
            last_op = s[i];
            i++;
        }
    }

 #include <iostream>
#include <string>
#include <stack>

using namespace std;

long long calc(long long a, long long b, char op) {
    if (op == '+') return a + b;
    else return a * b;
}

long long evaluate_min_value(const string& s, int n) {
    if (n == 1) return stoll(s); // If there's only one number, return it

    stack<long long> nums;
    char last_op = '+';
    long long num = 0;

    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        } else {
            if (last_op == '+') {
                nums.push(num);
            } else if (last_op == '*') {
                long long prev_num = nums.top();
                nums.pop();
                nums.push(prev_num * num);
            }
            last_op = s[i];
            num = 0;
        }
    }

    // Push the last number onto the stack
    if (last_op == '+') {
        nums.push(num);
    } else if (last_op == '*') {
        long long prev_num = nums.top();
        nums.pop();
        nums.push(prev_num * num);
    }

    // Calculate the minimal value
    long long result = 0;
    while (!nums.empty()) {
        result += nums.top();
        nums.pop();
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << evaluate_min_value(s, s.size()) << endl;
    }
    return 0;
}

    if (last_op == '+') {
        result = current + last_num;
    } else if (last_op == '*') {
        result = current * last_num;
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << evaluate_min_value(s, s.size()) << endl;
    }
    return 0;
}
