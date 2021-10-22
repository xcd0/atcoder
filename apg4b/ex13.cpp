#include <iostream>
#include <vector>
#include <cmath>
int main() {
	int              N, sum = 0, ave = 0;
	std::string      str;
	std::vector<int> in;

	std::cin >> N;
	in.resize( N );

	for( int i = 0; i < N; i++ ) {
		std::cin >> in.at( i );
		sum += in.at( i );
	}
	ave = sum / N;
	for( int i = 0; i < N; i++ ) {
		std::cout << std::abs( ave - in.at( i ) ) << std::endl;
	}
}

