#include <iostream>
#include <stack>
using namespace std;

void test01() {
	stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	cout << "The size of s1 is: " << s1.size() << endl;

	while (!s1.empty()) {
		cout << s1.top() << " ";
		s1.pop();
	}
	cout << "The size of s1 is: " << s1.size() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}