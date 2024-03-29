#pragma once

#include <unordered_set>
#include <map>
#include <string>
#include <vector>

class Solutions {
public:

	/// <summary>No: 101</summary>
	/// <see href="https://leetcode.com/problems/squares-of-a-sorted-array/">977. Squares of a Sorted Array</see>
	static std::vector<int> SortedSquares(std::vector<int>& nums);

	/// <summary>No: 102</summary>
	/// <see href="https://leetcode.com/problems/rotate-array/">189. Rotate Array</see>
	static void rotate(std::vector<int>& nums, int k);

	/// <summary>No: 103</summary>
	/// <see href="https://leetcode.com/problems/move-zeroes/">283. Move Zeroes</see>
	static void MoveZeroes(std::vector<int>& nums);

	/// <summary>No: 104</summary>
	/// <see href="https://leetcode.com/problems/peak-index-in-a-mountain-array/">852. Peak Index in a Mountain Array</see>
	static int PeakIndexInMountainArray(const std::vector<int>& arr);

	/// <summary>No: 105</summary>
	/// <see href="https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/">1790. Check if One String Swap Can Make Strings Equal</see>
	static bool AreAlmostEqual(const std::string& s1, const std::string& s2);

	/// <summary>No: 106</summary>
	/// <see href="https://leetcode.com/problems/longest-common-prefix/description/">14. Longest Common Prefix</see>
	static std::string LongestCommonPrefix(std::vector<std::string>& strs);

	/// <summary>No: 107</summary>
	/// <see href="https://leetcode.com/problems/merge-strings-alternately/description/">1768. Merge Strings Alternately</see>
	static std::string MergeAlternately(std::string word1, std::string word2);

	/// <summary>No: 108</summary>
	/// <see href="https://leetcode.com/problems/valid-parentheses/">20. Valid Parentheses</see>
	static bool IsValid(const std::string& s);

	/// <summary>No: 109</summary>
	/// <see href="https://leetcode.com/problems/pascals-triangle/">118. Pascal's Triangle</see>
	static std::vector<std::vector<int>> generate(int num_rows);

	/// <summary>No: 110</summary>
	/// <see href="https://leetcode.com/problems/single-number/">136. Single Number</see>
	static int SingleNumber(const std::vector<int>& nums);

	/// <summary>No: 111</summary>
	/// <see href="https://leetcode.com/problems/intersection-of-two-linked-lists/">160. Intersection of Two Linked Lists</see>
	//	Definition for singly-linked list.
	struct ListNode {
		int val;
		ListNode* next;
		explicit ListNode(const int x) : val(x), next(nullptr) {}
	};
	static ListNode* GetIntersectionNode(ListNode* head_a, ListNode* head_b);

	/// <summary>No: 112</summary>
	/// <see href="https://leetcode.com/problems/linked-list-cycle/">141. Linked List Cycle</see>
	static bool HasCycle(const ListNode* head);

	/// <summary>No: 113</summary>
	/// <see href="https://leetcode.com/problems/permutations/">46. Permutations</see>
	static std::vector<std::vector<int>> permute(const std::vector<int>& nums);

	/// <summary>No: 114</summary>
	/// <see href="https://leetcode.com/problems/reverse-string/">344. Reverse String</see>
	static void reverseString(std::vector<char>& s);

	/// <summary>No: 115</summary>
	/// <see href="https://leetcode.com/problems/fizz-buzz/">412. Fizz Buzz</see>
	static std::vector<std::string> fizzBuzz(int n);

	/// <summary>No: 116</summary>
	/// <see href="https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/">26. Remove Duplicates from Sorted Array</see>
	static int removeDuplicates(std::vector<int>& nums);

	/// <summary>No: 117</summary>
	/// <see href="https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/">28. Find the Index of the First Occurrence in a String</see>
	static int strStr(std::string haystack, std::string needle);

	/// <summary>No: 118</summary>
	/// <see href="https://leetcode.com/problems/sqrtx/">69. Sqrt(x)</see>
	static int mySqrt(int x);

	/// <summary>No: 119</summary>
	/// <see href="https://leetcode.com/problems/merge-sorted-array/">88. Merge Sorted Array</see>
	static void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

	/// <summary>No: 120</summary>
	/// <see href="https://leetcode.com/problems/majority-element/">169. Majority Element</see>
	static int majorityElement(std::vector<int>& nums);

	/// <summary>No: 121</summary>
	/// <see href="https://leetcode.com/problems/remove-element/">27. Remove Element</see>
	static int removeElement(std::vector<int>& nums, int val);

	/// <summary>No: 122</summary>
	/// <see href="https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/">80. Remove Duplicates from Sorted Array II</see>
	static int removeDuplicates_(std::vector<int>& nums);
};

	