#include <iostream>
#include <string>
using namespace std;

int main() {
	string year, month, day;
	getline(cin, year, '.');
	getline(cin, month, '.');
	getline(cin, day, '\n');

	cout << day << "-" << month << "-" << year;
}