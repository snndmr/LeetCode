#include "Solutions.h"

std::vector<int> Solutions::sortedSquares(std::vector<int>& nums) {
	std::vector<int> squares;
	std::vector<int>::iterator left = nums.begin();
	std::vector<int>::iterator right = nums.end() - 1;

	while (left <= right) {
		if (*left < 0 && -1 * *left > *right) {
			squares.insert(squares.begin(), static_cast<int>(pow(*left, 2)));

			if (left == nums.end()) {
				break;
			}

			left++;
		}
		else {
			squares.insert(squares.begin(), static_cast<int>(pow(*right, 2)));

			if (right == nums.begin()) {
				break;
			}

			right--;
		}
	}

	return squares;
}

void Solutions::rotate(std::vector<int>& nums, int k) {
	const size_t size = nums.size();

	/* Time O(N^2) Space O(1) */
	//if (size > 1 && k % size != 0) {
	//	for (size_t i = 0; i < k % size; i++) {
	//		int tempA = nums.at(0);
	//		nums.at(0) = nums.at(size - 1);

	//		for (size_t i = 1; i < size; i++) {
	//			int tempB = nums[i];
	//			nums[i] = tempA;
	//			tempA = tempB;
	//		}
	//	}
	//}

	/* Time O(N) Space O(N) */
	if (size > 1 && k % size != 0) {
		const unsigned piece = k % size;

		std::vector<int> _vec(piece);
		nums.insert(nums.begin(), _vec.begin(), _vec.end());
		std::move(nums.begin() + size, nums.end(), nums.begin());
		nums.erase(nums.begin() + size, nums.begin() + size + piece);
	}
}

void Solutions::moveZeroes(std::vector<int>& nums) {
	size_t size = nums.size();

	for (size_t i = 0; i < size; i++) {
		if (nums.at(i) == 0) {
			nums.erase(nums.begin() + i);
			nums.push_back(0);
			size--;
			i--;
		}
	};
}

int Solutions::peakIndexInMountainArray(std::vector<int>& arr) {
	int beg = 0;
	int end = static_cast<int>(arr.size() - 1);
	int mid = (beg + end) / 2;

	while (beg < end) {
		if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
			break;
		}
		else if (arr[mid] > arr[mid - 1]) {
			beg = mid;
		}
		else {
			end = mid;
		}

		mid = (beg + end) / 2;
	}

	return mid;
}

bool Solutions::areAlmostEqual(std::string s1, std::string s2) {
	int diff = 0;
	char holdOne, holdTwo{};

	for (size_t i = 0; i < s1.size(); i++) {
		if (s1[i] != s2[i]) {
			if (diff > 2 || (diff == 1 && (s2[i] != holdOne || s1[i] != holdTwo))) {
				return false;
			}

			diff++;
			holdOne = s1[i];
			holdTwo = s2[i];
		}
	}

	return diff == 0 || diff == 2;
}

std::string Solutions::longestCommonPrefix(std::vector<std::string>& strs)
{
	/*Time Complexity : O(n^2) and with sorting */
	/*if (strs.size() == 1)
	{
		return strs[0];
	}

	std::sort(strs.begin(), strs.end(), [](const std::string& a, const std::string& b)
		{
			return a.size() < b.size();
		});

	std::string longestPrefix = strs[0];

	for (unsigned i = 1; i < strs.size(); i++)
	{
		for (unsigned j = 0; j < longestPrefix.size(); j++)
		{
			if (strs[i][j] != longestPrefix[j])
			{
				longestPrefix.erase(j);
			}

			if (longestPrefix.empty())
			{
				return longestPrefix;
			}
		}
	}

	return longestPrefix;*/

	/*Time Complexity : O(n^2) and without sorting */
	if (strs.size() == 1)
	{
		return strs[0];
	}

	std::string longestPrefix = strs[0];

	for (int i = 1; i < strs.size(); i++)
	{
		while (strs[i].find(longestPrefix) != 0)
		{
			longestPrefix = longestPrefix.substr(0, longestPrefix.length() - 1);
			if (longestPrefix.empty())
			{
				return "";
			}
		}
	}

	return longestPrefix;
}
