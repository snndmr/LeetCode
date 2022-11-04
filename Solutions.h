#pragma once

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>

class Solutions
{
public:
	/// <summary>No: 1</summary>
	/// <see href="https://leetcode.com/problems/concatenation-of-array/">1929. Concatenation of Array</see>
	std::vector<int> getConcatenation(std::vector<int>& nums);

	/// <summary>No: 2</summary>
	/// <see href="https://leetcode.com/problems/build-array-from-permutation/">1920. Build Array from Permutation</see>
	static std::vector<int> buildArray(std::vector<int>& nums);

	/// <summary>No: 3</summary>
	/// <see href="https://leetcode.com/problems/add-two-integers/">2235. Add Two Integers</see>
	static int sum(int num1, int num2);

	/// <summary>No: 4</summary>
	/// <see href="https://leetcode.com/problems/running-sum-of-1d-array/">1480. Running Sum of 1d Array</see>
	static std::vector<int> runningSum(std::vector<int>& nums);

	/// <summary>No: 5</summary>
	/// <see href="https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/">1689. Partitioning Into Minimum Number Of Deci-Binary Numbers</see>
	static int minPartitions(std::string n);

	/// <summary>No: 6</summary>
	/// <see href="https://leetcode.com/problems/defanging-an-ip-address/">1108. Defanging an IP Address</see>
	static std::string defangIPaddr(std::string address);

	/// <summary>No: 7</summary>
	/// <see href="https://leetcode.com/problems/final-value-of-variable-after-performing-operations/">2011. Final Value of Variable After Performing Operations</see>
	static int finalValueAfterOperations(std::vector<std::string>& operations);

	/// <summary>No: 8</summary>
	/// <see href="https://leetcode.com/problems/shuffle-the-array/">1470. Shuffle the Array</see>
	static std::vector<int> shuffle(std::vector<int>& nums, int n);

	/// <summary>No: 9</summary>
	/// <see href="https://leetcode.com/problems/subrectangle-queries/">1476. Subrectangle Queries</see>
	class SubrectangleQueries
	{
	private:
		std::vector<std::vector<int>>& rectangle;

	public:
		SubrectangleQueries(std::vector<std::vector<int>>& rectangle);

		void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue);

		int getValue(int row, int col);
	};

	/// <summary>No: 10</summary>
	/// <see href="https://leetcode.com/problems/richest-customer-wealth/">1672. Richest Customer Wealth</see>
	static int maximumWealth(std::vector<std::vector<int>>& accounts);

	/// <summary>No: 11</summary>
	/// <see href="https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/">1672. Richest Customer Wealth</see>
	static int mostWordsFound(std::vector<std::string>& sentences);

	/// <summary>No: 12</summary>
	/// <see href="https://leetcode.com/problems/number-of-good-pairs/">1512. Number of Good Pairs</see>
	static int numIdenticalPairs(std::vector<int>& nums);

	/// <summary>No: 13</summary>
	/// <see href="https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/">2160. Minimum Sum of Four Digit Number After Splitting Digits</see>
	static int minimumSum(int num);

	/// <summary>No: 14</summary>
	/// <see href="https://leetcode.com/problems/design-parking-system/">1603. Design Parking System</see>
	class ParkingSystem
	{
	private:
		int slots[3];

	public:
		ParkingSystem(int big, int medium, int small);

		bool addCar(int carType);
	};

	/// <summary>No: 15</summary>
	/// <see href="https://leetcode.com/problems/smallest-even-multiple/">2413. Smallest Even Multiple</see>
	static int smallestEvenMultiple(int n);

	/// <summary>No: 16</summary>
	/// <see href="https://leetcode.com/problems/jewels-and-stones/">771. Jewels and Stones</see>
	static int numJewelsInStones(std::string jewels, std::string stones);

	/// <summary>No: 17</summary>
	/// <see href="https://leetcode.com/problems/strictly-palindromic-number/">2396. Strictly Palindromic Number</see>
	static bool isStrictlyPalindromic(int n);

	/// <summary>No: 18</summary>
	/// <see href="https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/">1431. Kids With the Greatest Number of Candies</see>
	static std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies);

	/// <summary>No: 19</summary>
	/// <see href="https://leetcode.com/problems/root-equals-sum-of-children/">2236. Root Equals Sum of Children</see>
	struct TreeNode
	{
		int val;
		TreeNode* left;
		TreeNode* right;
		TreeNode() : val(0), left(nullptr), right(nullptr) {}
		TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
		TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
	};

	static bool checkTree(TreeNode* root);

	/// <summary>No: 20</summary>
	/// <see href="https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/">1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree</see>
	static TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target);

	/// <summary>No: 21</summary>
	/// <see href="https://leetcode.com/problems/deepest-leaves-sum/">1302. Deepest Leaves Sum</see>
	static int deepestLeavesSum(TreeNode* root);

	/// <summary>No: 22</summary>
	/// <see href="https://leetcode.com/problems/merge-nodes-in-between-zeros/">2181. Merge Nodes in Between Zeros</see>
	struct ListNode
	{
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}
	};

	static ListNode* mergeNodes(ListNode* head);

	/// <summary>No: 23</summary>
	/// <see href="https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/">1281. Subtract the Product and Sum of Digits of an Integer</see>
	static int subtractProductAndSum(int n);

	/// <summary>No: 24</summary>
	/// <see href="https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/">1365. How Many Numbers Are Smaller Than the Current Number</see>
	static std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums);

	/// <summary>No: 25</summary>
	/// <see href="https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/">1828. Queries on Number of Points Inside a Circle</see>
	static std::vector<int> countPoints(std::vector<std::vector<int>>& points, std::vector<std::vector<int>>& queries);

	/// <summary>No: 26</summary>
	/// <see href="https://leetcode.com/problems/goal-parser-interpretation/">1678. Goal Parser Interpretation</see>
	static std::string interpret(std::string command);

	/// <summary>No: 27</summary>
	/// <see href="https://leetcode.com/problems/max-increase-to-keep-city-skyline/">807. Max Increase to Keep City Skyline</see>
	static int maxIncreaseKeepingSkyline(std::vector<std::vector<int>>& grid);

	/// <summary>No: 28</summary>
	/// <see href="https://leetcode.com/problems/decode-xored-array/">1720. Decode XORed Array</see>
	static std::vector<int> decode(std::vector<int>& encoded, int first);

	/// <summary>No: 29</summary>
	/// <see href="https://leetcode.com/problems/decompress-run-length-encoded-list/">1313. Decompress Run-Length Encoded List</see>
	static std::vector<int> decompressRLElist(std::vector<int>& nums);

	/// <summary>No: 30</summary>
	/// <see href="https://leetcode.com/problems/create-target-array-in-the-given-order/">1389. Create Target Array in the Given Order</see>
	static std::vector<int> createTargetArray(std::vector<int>& nums, std::vector<int>& index);

	/// <summary>No: 31</summary>
	/// <see href="https://leetcode.com/problems/encode-and-decode-tinyurl/">535. Encode and Decode TinyURL</see>
	static std::string encode(std::string longUrl);

	static std::string decode(std::string shortUrl);

	/// <summary>No: 32</summary>
	/// <see href="https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/">1282. Group the People Given the Group Size They Belong To</see>
	static std::vector<std::vector<int>> groupThePeople(std::vector<int>& groupSizes);

	/// <summary>No: 33</summary>
	/// <see href="https://leetcode.com/problems/shuffle-string/">1528. Shuffle String</see>
	static std::string restoreString(std::string s, std::vector<int>& indices);

};

