#include <iostream>
using namespace std;

// definition for a binary tree
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
void func() {
	cout << "begin" << endl;
	return ;
	cout << "end" << endl;
}

int main() {
	func();
	system("pause");
	return 0;
}