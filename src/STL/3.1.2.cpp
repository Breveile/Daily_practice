#include <iostream>
#include <string>

using namespace std;

void test01() {
	string s1;
	cout << "s1:" << s1 << endl;

	const char* str = "abcde";
	string s2(str);
	cout << "s2:" << s2 << endl;

	string s3(s2);
	cout << "s3:" << s3 << endl;

	string s4(5, 'k');
	cout << "s4:" << s4 << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}