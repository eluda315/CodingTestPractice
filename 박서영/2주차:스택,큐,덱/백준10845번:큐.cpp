#include <iostream>
#include <queue>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    queue<int> q;

    while (t-- > 0) {
        string command;
        cin >> command;

        switch (command[0]) {
            case 'p':
                if (command[1] == 'u') {
                    int n;
                    cin >> n;

                    q.push(n);
                }
                else {
                    if (q.empty()) cout << "-1\n";
                    else {
                        cout << q.front() << "\n";
                        q.pop();
                    }
                }
                break;
            case 's':
                cout << q.size() << "\n";
                break;
            case 'e':
                if (q.empty()) cout << "1\n";
                else cout << "0\n";
                break;
            case 'f':
                if (q.empty()) cout << "-1\n";
                else cout << q.front() << "\n";
                break;
            case 'b':
                if (q.empty()) cout << "-1\n";
                else cout << q.back() << "\n";
                break;
        }
    }
    return 0;
}