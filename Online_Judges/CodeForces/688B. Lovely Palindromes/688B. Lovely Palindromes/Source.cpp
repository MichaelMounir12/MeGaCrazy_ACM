#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s; cin >> s;
	cout << s; for (int i = (s.length()) - 1; i >= 0; i--) { cout << s[i]; }cout << endl;
	/*   anthor solu for reverse string using lib algortiam reverse(s.begin(),s.end());  */
}