#pragma once

#include <map>
#include <stack>
#include <vector>
#include <string>
#include <bitset>
#include <numeric>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

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

	/// <summary>No: 68</summary>
	/// <see href="https://leetcode.com/problems/rings-and-rods/">2103. Rings and Rods</see>
	static int countPoints(std::string rings);

	/// <summary>No: 69</summary>
	/// <see href="https://leetcode.com/problems/maximum-product-difference-between-two-pairs/">1913. Maximum Product Difference Between Two Pairs</see>
	static int maxProductDifference(std::vector<int>& nums);

	/// <summary>No: 70</summary>
	/// <see href="https://leetcode.com/problems/count-good-triplets/">1534. Count Good Triplets</see>
	static int countGoodTriplets(std::vector<int>& arr, int a, int b, int c);

	/// <summary>No: 71</summary>
	/// <see href="https://leetcode.com/problems/flipping-an-image/">832. Flipping an Image</see>
	static std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image);

	/// <summary>No: 72</summary>
	/// <see href="https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/">2176. Count Equal and Divisible Pairs in an Array</see>
	static int countPairs(std::vector<int>& nums, int k);

	/// <summary>No: 73</summary>
	/// <see href="https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/">2037. Minimum Number of Moves to Seat Everyone</see>
	static int minMovesToSeat(std::vector<int>& seats, std::vector<int>& students);

	/// <summary>No: 74</summary>
	/// <see href="https://leetcode.com/problems/remove-outermost-parentheses/">1021. Remove Outermost Parentheses</see>
	static std::string removeOuterParentheses(std::string s);

	/// <summary>No: 75</summary>
	/// <see href="https://leetcode.com/problems/number-of-common-factors/">2427. Number of Common Factors</see>
	static int commonFactors(int a, int b);

	/// <summary>No: 76</summary>
	/// <see href="https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/">1967. Number of Strings That Appear as Substrings in Word</see>
	static int numOfStrings(std::vector<std::string>& patterns, std::string word);

	/// <summary>No: 77</summary>
	/// <see href="https://leetcode.com/problems/matrix-diagonal-sum/">1572. Matrix Diagonal Sum</see>
	static int diagonalSum(std::vector<std::vector<int>>& mat);

	/// <summary>No: 78</summary>
	/// <see href="https://leetcode.com/problems/replace-all-digits-with-characters/">1844. Replace All Digits with Characters</see>
	static std::string replaceDigits(std::string s);

	/// <summary>No: 79</summary>
	/// <see href="https://leetcode.com/problems/find-the-pivot-integer/">2485. Find the Pivot Integer</see>
	static int pivotInteger(int n);

	/// <summary>No: 80</summary>
	/// <see href="https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/">1309. Decrypt String from Alphabet to Integer Mapping</see>
	static std::string freqAlphabets(std::string s);

	/// <summary>No: 81</summary>
	/// <see href="https://leetcode.com/problems/two-sum/">1. Two Sum</see>
	static std::vector<int> twoSum(std::vector<int>& nums, int target);

	/// <summary>No: 82</summary>
	/// <see href="https://leetcode.com/problems/palindrome-number/">9. Palindrome Number</see>
	static bool isPalindrome(int x);

	/// <summary>No: 83</summary>
	/// <see href="https://leetcode.com/problems/roman-to-integer/">13. Roman to Integer</see>
	static int romanToInt(std::string s);

	/// <summary>No: 84</summary>
	/// <see href="https://leetcode.com/problems/find-pivot-index/">724. Find Pivot Index</see>
	static int pivotIndex(std::vector<int>& nums);

	/// <summary>No: 85</summary>
	/// <see href="https://leetcode.com/problems/isomorphic-strings/">205. Isomorphic Strings</see>
	static bool isIsomorphic(std::string s, std::string t);

	/// <summary>No: 86</summary>
	/// <see href="https://leetcode.com/problems/is-subsequence/">392. Is Subsequence</see>
	static bool isSubsequence(std::string s, std::string t);

	/// <summary>No: 87</summary>
	/// <see href="https://leetcode.com/problems/merge-two-sorted-lists/">21. Merge Two Sorted Lists</see>
	static ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);

	/// <summary>No: 88</summary>
	/// <see href="https://leetcode.com/problems/reverse-linked-list/">206. Reverse Linked List</see>
	static ListNode* reverseList(ListNode* head);

	/// <summary>No: 89</summary>
	/// <see href="https://leetcode.com/problems/binary-search/">704. Binary Search</see>
	static int search(std::vector<int>& nums, int target);

	/// <summary>No: 90</summary>
	/// <see href="https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/">1523. Count Odd Numbers in an Interval Range</see>
	static int countOdds(int low, int high);

	/// <summary>No: 91</summary>
	/// <see href="https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/">1491. Average Salary Excluding the Minimum and Maximum Salary</see>
	static double average(std::vector<int>& salary);

	/// <summary>No: 92</summary>
	/// <see href="https://leetcode.com/problems/number-of-1-bits/">191. Number of 1 Bits</see>
	static int hammingWeight(uint32_t n);

	/// <summary>No: 93</summary>
	/// <see href="https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/">1281. Subtract the Product and Sum of Digits of an Integer</see>
	static int subtractProductAndSum(int n);
};