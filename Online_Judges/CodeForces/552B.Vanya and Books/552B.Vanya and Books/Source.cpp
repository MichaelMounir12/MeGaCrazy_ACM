#include <iostream>
using namespace std;
int main() {
	long long n, d = 0; cin >> n;
	for (long long i = 1; i <=n; i*=10) { d += n - i + 1; }cout << d << endl;
}


