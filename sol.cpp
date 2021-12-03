#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string home;
	cin >> home;
	int from = 0;
	int to = 0;
	// the no. of departures and no. of arrivals of home airport should be equal
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		from += (s.substr(0, 3) == home);
		to += (s.substr(5, 3) == home);
	}
	cout << (from == to ? "home" : "contest") << '\n';
	return 0;
}
