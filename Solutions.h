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
};

