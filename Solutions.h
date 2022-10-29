#pragma once

#include <vector>
#include <string>

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
};

