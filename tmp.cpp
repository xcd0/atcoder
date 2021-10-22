#include <bits/stdc++.h> // clang-format off
using namespace std;

bool _debug 
= true;
/*
= false;
*/

#define rep( i, n )                for( int i = 0; i < (int)( n ); i++ )
#define P( str )                   cout << str << endl;
#define d( str )                   if( _debug ){ str; }
#define dsv( str, v )              if( _debug ){ cout << "d:"    << str << " : " << v    << endl;  }
#define div( i, str )              if( _debug ){ cout << "d: i=" << i   << " : " <<  str << endl; }
#define disv( i, str, v )          if( _debug ){ cout << "d:"    << i   << " : " << str  << " : " << v << endl;  }
#define dnud( _name, _m, v, _M )    if( _debug ){ cout << _m << " <= " << _name << "=" << v << " <= " << _M << endl; }

auto dfs = []( const std::vector<std::vector<int>>& adjacency, //
               int u, std::vector < bool >> &used, std::vector<int>& sorted ) {
	if( used[ u ] ) return;
	used[ u ] = true;
	for( auto i : adjacency[ u ] )
		dfs( adjacency, i, used, toposorted ); // 再帰的に探索
	sorted.emplace_back( u );                  // 帰りがけ順で追加
};
// clang-format on

std::vector<int> topological_sort() {
	std::vector<std::vector<int>> adjacency; // 隣接リスト
	std::vector<bool>             used;
	std::vector<int>              sorted;
	for( int i = 0; i < v; ++i ) {
		dfs( i, ans, used, sorted );
	}
	std::reverse( sorted.begin(), sorted.end() );
	return sorted;
}

std::vector<int> topological_sort(            //
    std::vector<std::vector<int>>& adjacency, // 隣接リスト
    std::vector<bool>&             used,      //
    std::vector<int>&              sorted     //
) {
	s.emplace_back( l.top() ), l.pop();

	for( auto n : ad[ s.back() ] ) { }
}

int main() {
	int N,M;
	std::cin >> N >> M;
	std::priority_queue<int, std::vector<int>, std::greater<int>> heap; // 小さい順に取り出せる
	for( int i = 0; i < e; ++i ) {
		int s, t;
		cin >> s >> t;
		heap.push_back( t );
	}

	tsort();
	for( int i : ans )
		cout << i << endl;

	return 0;
}

double           N = 0, L = 0, M = 0;
std::vector<int> a;
std::vector<int> b;
double           sum = 0.0;
double           lta = 0.0;

int main() {
	// 個数読み込み
	cin >> N >> M;

	dnud( "N", 2, N, 2e5 ); // Nは2以上
	dnud( "M", 1, M, 2e5 ); // Nは2以上
	// Mは1以上

	// データ読み込み
	a.resize( N );
	b.resize( N );
	rep( i, N ) {
		cin >> a[ i ] >> b[ i ];
		d( [ & ]() { cout << "1 <= " << a[ i ] << " --- " << b[ i ] << " <= " << N << endl; }() )
	}

	// 処理
	rep( i, N ) if( a[ i ] >= b[ i ] ){ P( -1 ) }

	rep( i, N ) {
		sum += a[ i ] / b[ i ];
		// dsv( i, "sum", sum );
		// dsv( i, "a", a[ i ] );
		// dsv( i, "b", b[ i ] );
	}
	dsv( "sum", sum );
	lta = sum / 2.0;
	dsv( "lta", lta );

	sum = 0.0;
	rep( i, N ) {
		sum += a[ i ] / b[ i ];
		if( sum == lta ) {
			L += a[ i ];
			break;
		} else if( sum >= lta ) {
			sum -= a[ i ] / b[ i ]; // 直前のやつまでの合計時間
			dsv( "sum", sum );
			M = lta - sum; //残り時間
			dsv( "M", M );
			dsv( "B", b[ i ] );
			dsv( "L", M );
			dsv( "M*b", M * b[ i ] );
			L += M * b[ i ];
			dsv( "L:", M );
			break;
		} else {
			L += a[ i ];
			dsv( "L:", L );
		}
	}
	printf( "%.15lf\n", L );

	return 0;
}

