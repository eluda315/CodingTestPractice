#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    set<string, greater<string>> s;

    for (int i=0; i<n; i++) {
        string name;
        string check;
        cin >> name >> check;

        if (check == "enter") {
            s.insert(name);
        }
        else {
            s.erase(name);
        }
    }

    for (string i : s) {
        cout << i << "\n";
    }
}