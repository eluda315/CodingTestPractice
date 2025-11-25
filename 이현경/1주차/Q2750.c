#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	int num[1000];
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (num[j] > num[j + 1]) {
				int tmp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << num[i] << '\n';
	}
}