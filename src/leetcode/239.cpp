#include <iostream>
#include <deque>
#include <vector>
using namespace std;

class Myqueue {
public:
	deque<int> dq;

	void pop(int value) {
		if (!dq.empty() && value == dq.front())
			dq.pop_front();
	}

	void push(int value) {
		while (!dq.empty() && value > dq.back()) {
			dq.pop_back();
		}
		dq.push_back(value);
	}

	int result() {
		return dq.front();
	}
};

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	Myqueue que;
	vector<int> result;
	for (int i = 0; i < k; i++)
		que.push(nums[i]);
	result.push_back(que.result());
	for (int i = k; i < nums.size(); i++) {
		que.pop(nums[i - k]);
		que.push(nums[i]);
		result.push_back(que.result());
	}
	return result;
}
int main() {
	vector<int> nums = { 1,3,-1,-3,5,3,6,7 };
	int k = 3;
	vector<int> result = maxSlidingWindow(nums, k);
	for (int i : result)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}