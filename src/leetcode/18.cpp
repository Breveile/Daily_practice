
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<vector<int>>& vec) {
	for (vector<vector<int>>::iterator it = vec.begin(); it != vec.end(); it++) {

		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << " ";
		}
		cout << endl;
	}
}

vector<vector<int>> fourSum(vector<int>& nums, int target) {
	vector<vector<int>> result;

	if (nums.size() < 4)
		return result;

	int l = nums.size();
	sort(nums.begin(), nums.end());

	for (int i = 0; i < l - 3; i++) {
		// 去重
		if (i > 0 && nums[i] == nums[i - 1])
			continue;
		// 剪枝
		int min1 = nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3];
		if (target < min1)
			break;
		int max1 = nums[i] + nums[l - 1] + nums[l - 2] + nums[l - 3];
		if (target > max1)
			continue;

		for (int j = i + 1; j < l - 2; j++) {
			// 去重
			if (j > i + 1 && nums[j] == nums[j - 1])
				continue;
			// 剪枝
			int min2 = nums[i] + nums[j] + nums[j + 1] + nums[j + 2];
			if (target < min2)
				break;
			int max2 = nums[i] + nums[j] + nums[l - 1] + nums[l - 2];
			if (target > max2)
				continue;

			int left = j + 1;
			int right = l - 1;

			while (right > left) {
				if ((long)nums[i] + nums[j] + nums[left] + nums[right] > target)
					right--;
				else if ((long)nums[i] + nums[j] + nums[left] + nums[right] < target)
					left++;
				else {
					result.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});
					while (right > left && nums[right] == nums[right - 1])
						right--;
					while (right > left && nums[left] == nums[left + 1])
						left++;

					right--;
					left++;
				}
			}
		}
	}

	return result;
}

int main() {

	vector<int> v = { 1000000000,1000000000,1000000000,1000000000};
	vector<vector<int>> res = fourSum(v, 8);

	printVec(res);

	system("pause");
	return 0;
}

