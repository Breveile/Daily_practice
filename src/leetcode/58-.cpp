#include <iostream>
#include <string>

using namespace std;

string reverseLeftWords(string s, int n) {

	return (s + s).substr(n, s.size());
	reverse(s.begin(), s.end());
	reverse(s.begin(), s.begin()+(s.size()-n));
	reverse(s.begin() + (s.size() - n), s.end());
	return s;
}

int main() {
	string str = "lrloseumgh";
	cout << reverseLeftWords(str, 2);

	system("pause");
	return 0;
}