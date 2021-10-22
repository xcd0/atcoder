#include <iostream>
using namespace std;

void p1() {
	int price, num;
	cin >> price >> num;
	cout << price * num << endl;
}

void p2() {
	string str;
	int price, num;
	cin >> str >> price >> num;
	cout << str << "!" << endl;
	cout << price * num << endl;
}

int main() {
	int p;
	cin >> p;
	switch( p ) { // clang-format off
		case 1: p1(); break;
		case 2: p2(); break;
	} // clang-format on
}
