#include <iostream>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>> n;

    stack <int> s;
    stack <int> result;

    for (int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;

        s.push(tmp);
    }

    result.push(-1);
    stack<int> max;
    max.push(s.top());
    s.pop();

    while (!s.empty()) {
        int cmp = s.top();
        s.pop();

        bool flag = false;
        while (!max.empty()) {
            if (cmp < max.top()) {
                result.push(max.top());
                max.push(cmp);
                flag = true;
                break;
            }
            max.pop();
        }

        if (!flag) {
            result.push(-1);
            max.push(cmp);
        }

    }

    while (!result.empty()) {
        cout << result.top() << " ";
        result.pop();
    }
}