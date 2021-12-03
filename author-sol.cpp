#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string home;
	cin >> home;
	// since the flights consist of home to contest and contest to home
	// then if n is even he is currently at home, otherwise he's not
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
	}
	cout << (n % 2 == 0 ? "home" : "contest") << '\n';
	return 0;
}
