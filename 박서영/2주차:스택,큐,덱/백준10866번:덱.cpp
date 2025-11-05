#include <iostream>
#include <deque>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    deque<int> dq;

    while (t-- > 0) {
        string command;
        cin >> command;

        switch (command[0]) {
            case 'p':
                if (command[1] == 'u') {
                    int n;
                    cin >> n;

                    if (command[5] == 'f') dq.push_front(n);
                    else dq.push_back(n);
                }
                else {
                    if (dq.empty()) cout << "-1\n";
                    else {
                        if (command[4] == 'f') {
                            cout << dq.front() << "\n";
                            dq.pop_front();
                        }
                        else {
                            cout << dq.back() << "\n";
                            dq.pop_back();
                        }
                    }
                }
                break;
            case 's':
                cout << dq.size() << "\n";
                break;
            case 'e':
                if (dq.empty()) cout << "1\n";
                else cout << "0\n";
                break;
            case 'f':
                if (dq.empty()) cout << "-1\n";
                else cout << dq.front() << "\n";
                break;
            case 'b':
                if (dq.empty()) cout << "-1\n";
                else cout << dq.back() << "\n";
                break;
        }
    }
    return 0;
}