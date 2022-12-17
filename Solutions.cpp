#include "Solutions.h"

int Solutions::findCenter(std::vector<std::vector<int>>& edges)
{
	if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
	{
		return edges[0][0];
	}

	return edges[0][1];
}

int Solutions::sumOddLengthSubarrays(std::vector<int>& arr)
{
	const size_t size = arr.size();
	std::vector<int> preSum(size + 1);

	for (size_t i = 0; i < size; i++)
	{
		preSum[i + 1] = preSum[i] + arr[i];
	}

	int result = 0;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size - i; j += 2)
		{
			result += preSum[i + j + 1] - preSum[i];
		}
	}

	return result;
}
