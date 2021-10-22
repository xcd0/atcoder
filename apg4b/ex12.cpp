#include <iostream>
int main() {
	int         ans = 1, B;
	std::string op, str;

	std::cin >> str;
	for( auto& c : str ) {
		op = std::string{ c };
		if( op == "1" ) {
			B = 1;
		} else if( op == "+" ) {
			ans += B;
		} else if( op == "-" ) {
			ans -= B;
		} else if( op == "*" ) {
			ans *= B;
		} else if( B != 0 && op == "/" ) {
			ans /= B;
		}
	}
	std::cout << ans << std::endl;
}

