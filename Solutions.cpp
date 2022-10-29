#include "Solutions.h"

std::vector<int> Solutions::getConcatenation(std::vector<int>& nums)
{
	size_t size = nums.size();

	std::vector<int> concatenated(2 * size);

	for (size_t i = 0; i < size; i++)
	{
		concatenated[i] = nums[i];
		concatenated[size + i] = nums[i];
	}

	return concatenated;
}

std::vector<int> Solutions::buildArray(std::vector<int>& nums)
{
	size_t size = nums.size();

	std::vector<int> permutated(size);

	for (size_t i = 0; i < size; i++)
	{
		permutated[i] = nums[nums[i]];
	}

	return permutated;
}

int Solutions::sum(int num1, int num2)
{
	return num1 + num2;
}

std::vector<int> Solutions::runningSum(std::vector<int>& nums)
{
	size_t size = nums.size();

	std::vector<int> sumOfNums(size);

	sumOfNums[0] = nums[0];

	for (size_t i = 1; i < size; i++)
	{
		sumOfNums[i] = nums[i] + sumOfNums[i - 1];
	}

	return sumOfNums;
}

int Solutions::minPartitions(std::string n)
{
	int max = 0;

	for (size_t i = 0; i < n.size(); i++)
	{
		if (n[i] - '0' > max)
		{
			max = n[i] - '0';
		}

		if (max == 9)
		{
			break;
		}
	}

	return max;
}
