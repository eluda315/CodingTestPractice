#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;

    map<int, string> book1;
    map<string, int> book2;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        book1.insert(pair<int, string>(i+1, name));
        book2.insert(pair<string,int>(name,i+1));
    }

    for (int i=0; i<m; i++) {
        int s;
        if (cin >> s) {
            cout << book1.find(s)->second << "\n";
        }
        else {
            cin.clear();
            string str;
            cin >> str;
            cout << book2.find(str)->second << "\n";
        }
    }
}