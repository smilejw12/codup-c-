#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int op1, op2;
	cin >> op1 >> op2;
	cout << op1 + op2 << endl;
	cout << op1 - op2 << endl;
	cout << op1 * op2 << endl;
	cout << op1 / op2 << endl;
	cout << op1 % op2 << endl;

	float result = (float)op1 / (float)op2;
	cout << fixed << setprecision(2) << result;
}