#include <iostream>
using namespace std;

void seconds(int n) {

	if (n < 0 || n > 86000) {
		cout << -1;
		return;

		int hours = n / 3600;
		int minutes = (n - (3600 * hours)) / 60;

		if (hours < 10) {
			cout << 0;
		}
		cout << hours << ":";

		if (minutes < 10) {
			cout << 0;
		}
		cout << minutes;

	}

}

int main() {
	int n;
	cin >> n;
	seconds(n);

	return 0;

}