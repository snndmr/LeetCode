#pragma once

#include <vector>
#include <string>
#include <iostream>

class solutions
{
public:
	/// <summary>No: 1</summary>
	/// <see href="https://leetcode.com/problems/concatenation-of-array/">1929. Concatenation of Array</see>
	static std::vector<int> get_concatenation(const std::vector<int>& nums);

	/// <summary>No: 2</summary>
	/// <see href="https://leetcode.com/problems/build-array-from-permutation/">1920. Build Array from Permutation</see>
	static std::vector<int> build_array(const std::vector<int>& nums);

	/// <summary>No: 3</summary>
	/// <see href="https://leetcode.com/problems/add-two-integers/">2235. Add Two Integers</see>
	static int sum(int num1, int num2);

	/// <summary>No: 4</summary>
	/// <see href="https://leetcode.com/problems/running-sum-of-1d-array/">1480. Running Sum of 1d Array</see>
	static std::vector<int> running_sum(const std::vector<int>& nums);

	/// <summary>No: 5</summary>
	/// <see href="https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/">1689. Partitioning Into Minimum Number Of Deci-Binary Numbers</see>
	static int min_partitions(const std::string& n);

	/// <summary>No: 6</summary>
	/// <see href="https://leetcode.com/problems/defanging-an-ip-address/">1108. Defanging an IP Address</see>
	static std::string defang_ip_addr(const std::string& address);

	/// <summary>No: 7</summary>
	/// <see href="https://leetcode.com/problems/final-value-of-variable-after-performing-operations/">2011. Final Value of Variable After Performing Operations</see>
	static int final_value_after_operations(std::vector<std::string>& operations);

	/// <summary>No: 8</summary>
	/// <see href="https://leetcode.com/problems/shuffle-the-array/">1470. Shuffle the Array</see>
	static std::vector<int> shuffle(const std::vector<int>& nums, int n);

	/// <summary>No: 9</summary>
	/// <see href="https://leetcode.com/problems/subrectangle-queries/">1476. Subrectangle Queries</see>
	class SubrectangleQueries
	{
	private:
		std::vector<std::vector<int>>& rectangle;

	public:
		SubrectangleQueries(std::vector<std::vector<int>>& rectangle);

		void update_subrectangle(int row1, int col1, int row2, int col2, int new_value) const;

		int get_value(int row, int col) const;
	};

	/// <summary>No: 10</summary>
	/// <see href="https://leetcode.com/problems/richest-customer-wealth/">1672. Richest Customer Wealth</see>
	static int maximum_wealth(const std::vector<std::vector<int>>& accounts);

	/// <summary>No: 11</summary>
	/// <see href="https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/">1672. Richest Customer Wealth</see>
	static int most_words_found(std::vector<std::string>& sentences);

	/// <summary>No: 12</summary>
	/// <see href="https://leetcode.com/problems/number-of-good-pairs/">1512. Number of Good Pairs</see>
	static int num_identical_pairs(std::vector<int>& nums);

	/// <summary>No: 13</summary>
	/// <see href="https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/">2160. Minimum Sum of Four Digit Number After Splitting Digits</see>
	static int minimum_sum(int num);

	/// <summary>No: 14</summary>
	/// <see href="https://leetcode.com/problems/design-parking-system/">1603. Design Parking System</see>
	class parking_system
	{
	private:
		int slots[3]{};

	public:
		parking_system(int big, int medium, int small);

		bool add_car(int car_type);
	};

	/// <summary>No: 15</summary>
	/// <see href="https://leetcode.com/problems/smallest-even-multiple/">2413. Smallest Even Multiple</see>
	static int smallest_even_multiple(int n);

	/// <summary>No: 16</summary>
	/// <see href="https://leetcode.com/problems/jewels-and-stones/">771. Jewels and Stones</see>
	static int num_jewels_in_stones(const std::string& jewels, const std::string& stones);

	/// <summary>No: 17</summary>
	/// <see href="https://leetcode.com/problems/strictly-palindromic-number/">2396. Strictly Palindromic Number</see>
	static bool is_strictly_palindromic(int n);

	/// <summary>No: 18</summary>
	/// <see href="https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/">1431. Kids With the Greatest Number of Candies</see>
	static std::vector<bool> kids_with_candies(const std::vector<int>& candies, int extra_candies);

	/// <summary>No: 19</summary>
	/// <see href="https://leetcode.com/problems/root-equals-sum-of-children/">2236. Root Equals Sum of Children</see>
	struct tree_node
	{
		int val;
		tree_node* left;
		tree_node* right;
		tree_node() : val(0), left(nullptr), right(nullptr) {}
		tree_node(int x) : val(x), left(nullptr), right(nullptr) {}
		tree_node(int x, tree_node* left, tree_node* right) : val(x), left(left), right(right) {}
	};

	static bool check_tree(const tree_node* root);

	/// <summary>No: 20</summary>
	/// <see href="https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/">1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree</see>
	static tree_node* get_target_copy(tree_node* original, tree_node* cloned, const tree_node* target);

	/// <summary>No: 21</summary>
	/// <see href="https://leetcode.com/problems/deepest-leaves-sum/">1302. Deepest Leaves Sum</see>
	static int deepest_leaves_sum(const tree_node* root);

	/// <summary>No: 22</summary>
	/// <see href="https://leetcode.com/problems/merge-nodes-in-between-zeros/">2181. Merge Nodes in Between Zeros</see>
	struct list_node
	{
		int val;
		list_node* next;
		list_node() : val(0), next(nullptr) {}
		list_node(int x) : val(x), next(nullptr) {}
		list_node(int x, list_node* next) : val(x), next(next) {}
	};

	static list_node* merge_nodes(const list_node* head);

	/// <summary>No: 23</summary>
	/// <see href="https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/">1281. Subtract the Product and Sum of Digits of an Integer</see>
	static int subtract_product_and_sum(int n);

	/// <summary>No: 24</summary>
	/// <see href="https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/">1365. How Many Numbers Are Smaller Than the Current Number</see>
	static std::vector<int> smaller_numbers_than_current(std::vector<int>& nums);

	/// <summary>No: 25</summary>
	/// <see href="https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/">1828. Queries on Number of Points Inside a Circle</see>
	static std::vector<int> count_points(std::vector<std::vector<int>>& points, std::vector<std::vector<int>>& queries);

	/// <summary>No: 26</summary>
	/// <see href="https://leetcode.com/problems/goal-parser-interpretation/">1678. Goal Parser Interpretation</see>
	static std::string interpret(std::string command);

	/// <summary>No: 27</summary>
	/// <see href="https://leetcode.com/problems/max-increase-to-keep-city-skyline/">807. Max Increase to Keep City Skyline</see>
	static int max_increase_keeping_skyline(const std::vector<std::vector<int>>& grid);

	/// <summary>No: 28</summary>
	/// <see href="https://leetcode.com/problems/decode-xored-array/">1720. Decode XORed Array</see>
	static std::vector<int> decode(const std::vector<int>& encoded, int first);

	/// <summary>No: 29</summary>
	/// <see href="https://leetcode.com/problems/decompress-run-length-encoded-list/">1313. Decompress Run-Length Encoded List</see>
	static std::vector<int> decompress_rle_list(std::vector<int>& nums);

	/// <summary>No: 30</summary>
	/// <see href="https://leetcode.com/problems/create-target-array-in-the-given-order/">1389. Create Target Array in the Given Order</see>
	static std::vector<int> create_target_array(const std::vector<int>& nums, const std::vector<int>& index);

	/// <summary>No: 31</summary>
	/// <see href="https://leetcode.com/problems/encode-and-decode-tinyurl/">535. Encode and Decode TinyURL</see>
	static std::string encode(const std::string& long_url);

	static std::string decode(const std::string& short_url);

	/// <summary>No: 32</summary>
	/// <see href="https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/">1282. Group the People Given the Group Size They Belong To</see>
	static std::vector<std::vector<int>> group_the_people(const std::vector<int>& group_sizes);

	/// <summary>No: 33</summary>
	/// <see href="https://leetcode.com/problems/shuffle-string/">1528. Shuffle String</see>
	static std::string restore_string(const std::string& s, const std::vector<int>& indices);

	/// <summary>No: 34</summary>
	/// <see href="https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/">2194. Cells in a Range on an Excel Sheet</see>
	static std::vector<std::string> cells_in_range(const std::string& s);

	/// <summary>No: 35</summary>
	/// <see href="https://leetcode.com/problems/convert-the-temperature/">2469. Convert the Temperature</see>
	static std::vector<double> convert_temperature(double celsius);

	/// <summary>No: 36</summary>
	/// <see href="https://leetcode.com/problems/find-the-original-array-of-prefix-xor/">2433. Find The Original Array of Prefix Xor</see>
	static std::vector<int> find_array(const std::vector<int>& pref);

	/// <summary>No: 37</summary>
	/// <see href="https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/">1342. Number of Steps to Reduce a Number to Zero</see>
	static int number_of_steps(int num);

	/// <summary>No: 38</summary>
	/// <see href="https://leetcode.com/problems/design-an-ordered-stream/">1656. Design an Ordered Stream</see>
	class ordered_stream
	{
	private:
		int ptr;
		std::vector<std::string>* chunk;

	public:
		ordered_stream(int n);
		std::vector<std::string> insert(int id_key, const std::string& value);
	};

	/// <summary>No: 39</summary>
	/// <see href="https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/">1769. Minimum Number of Operations to Move All Balls to Each Box</see>
	static std::vector<int> min_operations(const std::string& boxes);

	/// <summary>No: 40</summary>
	/// <see href="https://leetcode.com/problems/decode-the-message/">2325. Decode the Message</see>
	static std::string decode_message(const std::string& key, const std::string& message);
};
