#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student {
    string name;
    int kr;
    int en;
    int math;
};

bool compare (student s1, student s2) {
    if (s1.kr == s2.kr) {
        if (s1.en == s2.en) {
            if (s1.math == s2.math) {
                return s1.name < s2.name;
            }
            return s1.math > s2.math;
        }
        return s1.en < s2.en;
    }
    return s1.kr > s2.kr;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<student> students(n);

    for (int i=0; i<n; i++) {
        cin >> students[i].name >> students[i].kr >> students[i].en >> students[i].math;
    }

    sort(students.begin(), students.end(), compare);

    for (int i=0; i<n; i++) {
        cout << students[i].name << "\n";
    }
}