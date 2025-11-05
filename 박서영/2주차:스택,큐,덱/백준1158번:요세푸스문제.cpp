#include <iostream>
#include <deque>
using namespace std;

int main() {

    int n,k;
    cin >> n >> k;

    deque<int> circle;

    for (int i=1; i<=n; i++) {
        circle.push_back(i);
    }

    cout << "<";
    while (!circle.empty()) {
        for (int i=0; i<k-1; i++) {
            circle.push_back(circle.front());
            circle.pop_front();
        }

        if (circle.size() != 1) cout << circle.front() << ", ";
        else cout << circle.front();

        circle.pop_front();
    }
    cout << ">";
}