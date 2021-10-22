#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	auto tmp = []( int a ) {
		for( int i = 0; i < a; i++ )
			cout << "]";
		cout << endl;
	};

	cout << "A:";
	tmp( A );
	cout << "B:";
	tmp( B );
}

