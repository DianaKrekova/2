#include "Ex2.h"

int main() {
	setlocale(0, "");
	string s;
	int j;
	cout << "Enter string:" << endl;
	cin >> s;
	string(*operations[3])(string) = { deletMinus,five ,randChange };
	int len = sizeof(operations) / sizeof(operations[0]);
	for (int i = 0; i < len; i++) {
		cout << operations[i](s) << endl;
	}
	return 0;
}