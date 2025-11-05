#include <iostream>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;

    stack<int> num1;
    stack<int> num2;
    stack<int> result;

    for (char c : s1) {
        num1.push(c-'0');
    }
    for (char c: s2) {
        num2.push(c-'0');
    }

    int carry = 0;
    while (!num1.empty() && !num2.empty()) {
        int tmp = num1.top() + num2.top();
        tmp += carry;

        carry = tmp/10;
        tmp %= 10;

        result.push(tmp);
        num1.pop();
        num2.pop();
    }
    if (!num1.empty()) {
        while (!num1.empty()) {
            int tmp = num1.top();
            tmp += carry;
            carry = tmp/10;
            tmp %= 10;

            result.push(tmp);
            num1.pop();
        }
    }
    if (!num2.empty()) {
        while (!num2.empty()) {
            int tmp = num2.top();
            tmp += carry;
            carry = tmp/10;
            tmp %= 10;

            result.push(tmp);
            num2.pop();
        }
    }

    if (carry > 0) {
        result.push(carry);
    }

    while (!result.empty()) {
        cout << result.top();
        result.pop();
    }
}