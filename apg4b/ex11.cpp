#include <iostream>
int main() {
	int         N, ans, B;
	std::string op;
	std::cin >> N >> ans;
	bool err = false;

	for( int i = 1; i <= N; i++ ) {
		std::cin >> op >> B;
		if( op == "+" ) {
			ans += B;
		} else if( op == "-" ) {
			ans -= B;
		} else if( op == "*" ) {
			ans *= B;
		} else if( B != 0 && op == "/" ) {
			ans /= B;
		} else {
			if( ! err ) std::cout << "error" << std::endl;
			err = true;
		}
		if( ! err ) std::cout << i << ":" << ans << std::endl;
	}
}

