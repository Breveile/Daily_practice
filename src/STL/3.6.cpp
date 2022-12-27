#include <iostream>
#include <queue>
#include <string>
using namespace std;

class Person
{
public:
	Person(string name,int age) {
		this->M_name = name;
		this->M_age = age;
	}

	string M_name;
	int M_age;
};

void test01() {
	Person p1("Alice", 12);
	Person p2("Bob", 25);
	Person p3("Charlie", 17);
	Person p4("Mike", 33);

	queue<Person> q;
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "The size of q: " << q.size() << endl;
	while (!q.empty()) {
		cout << "The name of front element: " << q.front().M_name << " " << " The age of front element: " << q.front().M_age << endl;
		cout << "The name of back element: " << q.back().M_name << " " << " The age of back element: " << q.back().M_age << endl;
		q.pop();
	}
	cout << "The size of q: " << q.size() << endl;
}


int main() {
	test01();
	system("pause");
	return 0;
}