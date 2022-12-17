#pragma once

#include <vector>
#include <string>
#include <algorithm>

class Solutions
{
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
};

