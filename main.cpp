#include <bits/stdc++.h>

using namespace std;

// rotate a string?
void rotate(vector<string> &a) {
	int n = a.size();
	vector<string> b(n, string(n, '?'));
	for (int row = 0; row < n; ++row) {
		for (int col = 0; col < n; ++col) {
			b[row][col] = a[col][n-1-row];
		}
	}
	a = b;
}

int main() {
	vector<string> s = {"abcd", "efgh", "ijkl", "mnop"};
	for (string ss : s) cout << ss << endl;
	cout << endl << "====" << endl;
	rotate(s);
	for (string ss : s) cout << ss << endl;
}
