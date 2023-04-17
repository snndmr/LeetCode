#pragma once

#include <map>
#include <vector>
#include <string>
#include <algorithm>

class Solutions {
public:

	/// <summary>No: 101</summary>
	/// <see href="https://leetcode.com/problems/squares-of-a-sorted-array/">977. Squares of a Sorted Array</see>
	static std::vector<int> sortedSquares(std::vector<int>& nums);

	/// <summary>No: 102</summary>
	/// <see href="https://leetcode.com/problems/rotate-array/">189. Rotate Array</see>
	static void rotate(std::vector<int>& nums, int k);

	/// <summary>No: 103</summary>
	/// <see href="https://leetcode.com/problems/move-zeroes/">283. Move Zeroes</see>
	static void moveZeroes(std::vector<int>& nums);

	/// <summary>No: 104</summary>
	/// <see href="https://leetcode.com/problems/peak-index-in-a-mountain-array/">852. Peak Index in a Mountain Array</see>
	static int peakIndexInMountainArray(std::vector<int>& arr);

	/// <summary>No: 105</summary>
	/// <see href="https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/">1790. Check if One String Swap Can Make Strings Equal</see>
	static bool areAlmostEqual(std::string s1, std::string s2);

	/// <summary>No: 106</summary>
	/// <see href="https://leetcode.com/problems/longest-common-prefix/description/">14. Longest Common Prefix</see>
	static std::string longestCommonPrefix(std::vector<std::string>& strs);
};

