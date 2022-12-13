#include <iostream>
#include <set>

using namespace std;

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01() {
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);

	if (s1.empty()) {
		cout << "The s1 is empty!" << endl;
	}
	else
		cout << "The size of s1 is " << s1.size() << endl;

	set<int> s2;
	s2.insert(100);
	s2.insert(300);
	s2.insert(400);
	s2.insert(200);

	cout << endl;
	cout << "s2:";
	printSet(s2);

	s2.swap(s1);

	if (!s2.empty())
		cout << "s2(after swapped):";
	printSet(s2);

}

int main() {
	test01();
	system("pause");
	return 0;
}