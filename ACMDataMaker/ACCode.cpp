#include <stack>
#include <iostream>
#include <string>
using namespace std;

int maiin() {
	int n;
	string color, s;
	while (cin >> n) {
		stack<string>S;
		while (n--) {
			cin >> s;
			if (s[1] == 'u') {
				cin >> color;
				S.push(color);
			}
			else {
				S.pop();
			}
		}
		if (S.empty()) {
			cout << "-1" << endl;
		}
		else {
			cout << S.top() << endl;
		}
	}
	return 0;
}





































