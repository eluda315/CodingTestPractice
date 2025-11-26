#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> A;
	stack<int> B;
	stack<int> C;

	string strA, strB;
	cin >> strA >> strB;
	int A_len = strA.length();
	int B_len = strB.length();
	for (int i = 0; i < A_len; i++) {
		A.push(strA[i] - '0');
	}
	for (int i = 0; i < B_len; i++) {
		B.push(strB[i] - '0');
	}

	int carry = 0, result;
	if (A_len < B_len) {
		for (int i = 0; i < A_len; i++) {
			int added = A.top() + B.top() + carry;
			A.pop();
			B.pop();
			carry = added / 10;
			C.push(added % 10);
		}
		if (!B.empty()) {
			for (int i = A_len; i < B_len; i++) {
				int added = B.top() + carry;
				carry = added / 10;
				C.push(added % 10);
				B.pop();
			}
		}
	}
	else {
		for (int i = 0; i < B_len; i++) {
			int added = A.top() + B.top() + carry;
			A.pop();
			B.pop();
			carry = added / 10;
			C.push(added % 10);
		}
		if (!A.empty()) {
			for (int i = B_len; i < A_len; i++) {
				int added = A.top() + carry;
				carry = added / 10;
				C.push(added % 10);
				A.pop();
			}
		}
	}
	if (carry == 1) C.push(1);
	while(!C.empty()) {
		cout << C.top();
		C.pop();
	}
}