#include <iostream>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    stack<int> s;

    while (t-- > 0) {
        string command;
        cin >> command;

        switch (command[0]) {
            case 'p':
                if (command[1] == 'u') {
                    int n;
                    cin >> n;
                    s.push(n);
                }
                else {
                    if (s.empty()) cout << "-1\n";
                    else {
                        cout << s.top() << "\n";
                        s.pop();
                    }
                }
                break;
            case 's':
                cout << s.size() << "\n";
                break;
            case 'e':
                if (s.empty()) cout << "1\n";
                else cout << "0\n";
                break;
            case 't':
                if (s.empty()) cout << "-1" << "\n";
                else cout << s.top() << "\n";
                break;
        }
    }

    return 0;
}