#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> s(n), d(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i] >> d[i];
	}
	// view the image in this repository for better understanding
	// set 'prev' variable to the day of the first doctor since we don't need to wait
	// for the following doctors, we need to get the schedule wherein the available day
	// must be STRICTLY greater than the day of the previous doctor that was visited
	int prev = s[0];
	for (int i = 1; i < n; i++) {
		while (s[i] <= prev) {
			s[i] += d[i];
		}
		prev = s[i];
	}
	cout << prev << '\n';
	return 0;
}
