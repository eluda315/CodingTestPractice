#include <iostream>
#include <stack>
using namespace std;

int main() {

    while (true) {
        string s;
        getline(cin, s);

        if (s == ".") break;

        stack<char> st;
        bool flag = true;
        for (char c : s) {
            if (c == '(' || c == '[') {
                st.push(c);
            }

            if (c == ')') {
                if (st.empty()) {
                    flag = false;
                    break;
                }
                if (st.top() == '(') st.pop();
                else break;
            }

            if (c == ']') {
                if (st.empty()) {
                    flag = false;
                    break;
                }
                if (st.top() == '[') st.pop();
                else break;
            }
        }

        if (st.empty() && flag) cout << "yes\n";
        else cout << "no\n";
    }
}