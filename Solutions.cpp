#include "Solutions.h"

#include <stack>

std::vector<int> Solutions::SortedSquares(std::vector<int>& nums) {
	std::vector<int> squares;
	auto left = nums.begin();
	auto right = nums.end() - 1;

	while (left <= right) {
		if (*left < 0 && -1 * *left > *right) {
			squares.insert(squares.begin(), static_cast<int>(pow(*left, 2)));

			if (left == nums.end()) {
				break;
			}

			++left;
		}
		else {
			squares.insert(squares.begin(), static_cast<int>(pow(*right, 2)));

			if (right == nums.begin()) {
				break;
			}

			--right;
		}
	}

	return squares;
}

void Solutions::rotate(std::vector<int>& nums, const int k) {
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
		std::move(nums.begin() + static_cast<int>(size), nums.end(), nums.begin());
		nums.erase(nums.begin() + static_cast<int>(size), nums.begin() + static_cast<int>(size) + piece);
	}
}

void Solutions::MoveZeroes(std::vector<int>& nums) {
	size_t size = nums.size();

	for (size_t i = 0; i < size; i++) {
		if (nums.at(i) == 0) {
			nums.erase(nums.begin() + static_cast<int>(i));
			nums.push_back(0);
			size--;
			i--;
		}
	}
}

int Solutions::PeakIndexInMountainArray(const std::vector<int>& arr) {
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

bool Solutions::AreAlmostEqual(const std::string& s1, const std::string& s2) {
	int diff = 0;
	char hold_one = 0, hold_two = 0;

	for (size_t i = 0; i < s1.size(); i++) {
		if (s1[i] != s2[i]) {
			if (diff > 2 || (diff == 1 && (s2[i] != hold_one || s1[i] != hold_two))) {
				return false;
			}

			diff++;
			hold_one = s1[i];
			hold_two = s2[i];
		}
	}

	return diff == 0 || diff == 2;
}

std::string Solutions::LongestCommonPrefix(std::vector<std::string>& strs)
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

	std::string longest_prefix = strs[0];

	for (size_t i = 1; i < strs.size(); i++)
	{
		while (strs[i].find(longest_prefix) != 0)
		{
			longest_prefix = longest_prefix.substr(0, longest_prefix.length() - 1);
			if (longest_prefix.empty())
			{
				return "";
			}
		}
	}

	return longest_prefix;
}

std::string Solutions::MergeAlternately(std::string word1, std::string word2)
{
	if (word1.empty()) {
		return word2;
	}

	if (word2.empty()) {
		return word1;
	}

	const size_t len1 = word1.size();
	const size_t len2 = word2.size();
	const size_t min_len = std::min(len1, len2);

	std::string output;
	output.reserve(len1 + len2);

	for (size_t i = 0; i < min_len; i++)
	{
		output += word1[i];
		output += word2[i];
	}

	output += len1 > len2 ? word1.substr(min_len) : word2.substr(min_len);

	return output;
}

bool Solutions::IsValid(const std::string& s)
{
	if (s.length() % 2 != 0) {
		return false;
	}

	std::stack<char> left_operators;

	for (const char& c : s) {
		if (c == '(' || c == '{' || c == '[') {
			left_operators.push(c);
		}
		else if (left_operators.empty()) {
			return false;
		}
		else {
			const char val = left_operators.top();

			if ((val == '(' && c == ')') || (val == '{' && c == '}') || (val == '[' && c == ']')) {
				left_operators.pop();
			}
			else {
				return false;
			}
		}
	}

	return left_operators.empty();
}