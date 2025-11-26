#include <iostream>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    stack <char> st;

    for (int i=0; i<s.length(); ) {
        if (s[i] == '(') {
            st.push(s[i]);
            i++;
        }
        else if (s[i] == ')') {
            while (st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            st.pop();
            i++;
        }
        else if (s[i] == '*' || s[i] == '/') {
            if (!st.empty()) {
                if (st.top() == '*' || st.top() == '/') {
                    if (st.top() == '(') break;
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(s[i++]);
        }
        else if ( s[i] == '+' || s[i] == '-') {
            if (!st.empty()) {
                if (st.top() == '*' || st.top() == '/' || st.top() == '+' || st.top() == '-') {
                    while (!st.empty()) {
                        if (st.top() == '(') break;
                        cout << st.top();
                        st.pop();
                    }
                }
            }
            st.push(s[i++]);
        }
        else {
            cout << s[i];
            i++;
        }
    }

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

}