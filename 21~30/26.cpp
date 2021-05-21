#include <iostream>
#include <string>
using namespace std;

int main() {
	int hour, minute, second;
	cin >> hour;
	cin.ignore(256, ':');
	cin >> minute;
	cin.ignore(256, ':');
	cin >> second;
	cin.ignore(256, '\n');

	cout << minute << endl;
}