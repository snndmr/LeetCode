#pragma once

#include <map>
#include <vector>
#include <string>
#include <bitset>
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

	/// <summary>No: 61</summary>
	/// <see href="https://leetcode.com/problems/count-asterisks/description/">2315. Count Asterisks</see>
	static int countAsterisks(std::string s);

	/// <summary>No: 62</summary>
	/// <see href="https://leetcode.com/problems/minimum-bit-flips-to-convert-number/">2220. Minimum Bit Flips to Convert Number</see>
	static int minBitFlips(int start, int goal);

	/// <summary>No: 63</summary>
	/// <see href="https://leetcode.com/problems/maximum-69-number/">1323. Maximum 69 Number</see>
	static int maximum69Number(int num);

	/// <summary>No: 64</summary>
	/// <see href="https://leetcode.com/problems/to-lower-case/">709. To Lower Case</see>
	static std::string toLowerCase(std::string s);

	/// <summary>No: 65</summary>
	/// <see href="https://leetcode.com/problems/count-the-number-of-consistent-strings/">1684. Count the Number of Consistent Strings</see>
	static int countConsistentStrings(std::string allowed, std::vector<std::string>& words);

	/// <summary>No: 66</summary>
	/// <see href="https://leetcode.com/problems/sort-the-people/">2418. Sort the People</see>
	static std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights);

	/// <summary>No: 67</summary>
	/// <see href="https://leetcode.com/problems/reverse-words-in-a-string-iii/">557. Reverse Words in a String III</see>
	static std::string reverseWords(std::string s);
};