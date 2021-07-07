#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		vector<int> a(k);
		for (int i = 0; i < k; i++) {
			cin >> a[i];
		}
		int cur = 1;
		for (int i = 0; i < k; i++) {
			if (cur < a[i]) {
				cur = -1;
				break;
			}
			cur -= a[i];
			cur *= 2;
		}
		cout << (cur != 0 ? "No" : "Yes") << '\n';
	}
	return 0;
}
