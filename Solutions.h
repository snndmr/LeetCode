#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

class Solutions {
	public:
	/// <summary>No: 51</summary>
	/// <see href="https://leetcode.com/problems/find-center-of-star-graph/">1791. Find Center of Star Graph</see>
	static int findCenter(std::vector<std::vector<int>>& edges);

	/// <summary>No: 52</summary>
	/// <see href="https://leetcode.com/problems/sum-of-all-odd-length-subarrays/">1588. Sum of All Odd Length Subarrays</see>
	static int sumOddLengthSubarrays(std::vector<int>& arr);

	/// <summary>No: 53</summary>
	/// <see href="https://leetcode.com/problems/delete-greatest-value-in-each-row/">2500. Delete Greatest Value in Each Row</see>
	static int deleteGreatestValue(std::vector<std::vector<int>>& grid);

	/// <summary>No: 54</summary>
	/// <see href="https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/">1662. Check If Two String Arrays are Equivalent</see>
	static bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2);

	/// <summary>No: 55</summary>
	/// <see href="https://leetcode.com/problems/count-of-matches-in-tournament/">1688. Count of Matches in Tournament</see>
	static int numberOfMatches(int n);

	/// <summary>No: 56</summary>
	/// <see href="https://leetcode.com/problems/unique-morse-code-words/">804. Unique Morse Code Words</see>
	static int uniqueMorseRepresentations(std::vector<std::string>& words);

	/// <summary>No: 57</summary>
	/// <see href="https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/">1614. Maximum Nesting Depth of the Parentheses</see>
	static int maxDepth(std::string s);

	/// <summary>No: 58</summary>
	/// <see href="https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/">1290. Convert Binary Number in a Linked List to Integer</see>
	struct ListNode {
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};

	static int getDecimalValue(ListNode* head);

	/// <summary>No: 59</summary>
	/// <see href="https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/">2006. Count Number of Pairs With Absolute Difference K</see>
	static int countKDifference(std::vector<int>& nums, int k);

	/// <summary>No: 60</summary>
	/// <see href="https://leetcode.com/problems/truncate-sentence/">1816. Truncate Sentence</see>
	static std::string truncateSentence(std::string s, int k);
};