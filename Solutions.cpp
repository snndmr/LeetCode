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

std::string Solutions::defangIPaddr(std::string address)
{
	std::string replaced;

	for (size_t i = 0; i < address.size(); i++)
	{
		if (address[i] == '.')
		{
			replaced += "[.]";
		}
		else
		{
			replaced += address[i];
		}
	}

	return replaced;
}

int Solutions::finalValueAfterOperations(std::vector<std::string>& operations)
{
	int value = 0;

	for (std::string& operation : operations) {
		if (operation[1] == '-') value--;
		else value++;
	}

	return value;
}

std::vector<int> Solutions::shuffle(std::vector<int>& nums, int n)
{
	std::vector<int> shuffled(2 * n);

	for (size_t i = 0; i < n; i++)
	{
		shuffled[2 * i] = nums[i];
		shuffled[2 * i + 1] = nums[n + i];
	}

	return shuffled;
}

Solutions::SubrectangleQueries::SubrectangleQueries(std::vector<std::vector<int>>& rectangle) : rectangle(rectangle) {}

void Solutions::SubrectangleQueries::updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
{
	for (int i = row1; i <= row2; i++)
	{
		for (int j = col1; j <= col2; j++)
		{
			rectangle[i][j] = newValue;
		}
	}
}

int Solutions::SubrectangleQueries::getValue(int row, int col)
{
	return rectangle[row][col];
}

int Solutions::maximumWealth(std::vector<std::vector<int>>& accounts)
{
	int maximumWealth = 0;

	for (const std::vector<int>& account : accounts) {
		int sum = 0;

		for (const int& money : account) sum += money;
		if (maximumWealth < sum) maximumWealth = sum;
	}

	return maximumWealth;
}

int Solutions::mostWordsFound(std::vector<std::string>& sentences)
{
	int max = 0;

	for (std::string& sentence : sentences)
	{
		int sum = 0;

		for (char& letter : sentence)
		{
			if (isspace(letter))
			{
				sum++;
			}
		}

		if (max < sum)
		{
			max = sum;
		}
	}

	return max;
}

int Solutions::numIdenticalPairs(std::vector<int>& nums)
{
	std::unordered_map<int, int> dict;

	for (int& num : nums)
	{
		dict[num]++;
	}

	int sum = 0;

	for (std::pair<const int, int>& value : dict)
	{
		if (value.second > 1)
		{
			sum += value.second * (value.second - 1) / 2;
		}
	}

	return sum;
}

int Solutions::minimumSum(int num)
{
	int nums[4] {};

	for (int i = 0; i < 4; i++)
	{
		nums[i] = num % 10;
		num /= 10;
	}

	std::sort(std::begin(nums), std::end(nums));

	return 10 * (nums[0] + nums[1]) + nums[2] + nums[3];
}

Solutions::ParkingSystem::ParkingSystem(int big, int medium, int small)
{
	slots[0] = big;
	slots[1] = medium;
	slots[2] = small;
}

bool Solutions::ParkingSystem::addCar(int carType)
{
	return slots[carType - 1]-- > 0;
}

int Solutions::smallestEvenMultiple(int n)
{
	return n % 2 == 0 ? n : n * 2;
}

int Solutions::numJewelsInStones(std::string jewels, std::string stones)
{
	int sum = 0;

	for (char& stone : stones)
	{
		for (char& jewel : jewels)
		{
			if (jewel == stone)
			{
				sum++;
			}
		}
	}

	return sum;
}

bool Solutions::isStrictlyPalindromic(int n)
{
	return n == 1 || n == 3;
}

std::vector<bool> Solutions::kidsWithCandies(std::vector<int>& candies, int extraCandies)
{
	int max = 0;

	for (int& candy : candies)
	{
		if (max < candy)
		{
			max = candy;
		}
	}

	std::vector<bool> greatest;

	for (int& candy : candies)
	{
		greatest.push_back(candy + extraCandies >= max);
	}

	return greatest;
}

bool Solutions::checkTree(TreeNode* root)
{
	return root->val == root->left->val + root->right->val;
}

Solutions::TreeNode* isExist(Solutions::TreeNode* node, int targetValue)
{
	if (node == nullptr)
	{
		return nullptr;
	}

	if (node->val == targetValue)
	{
		return node;
	}

	Solutions::TreeNode* left = isExist(node->left, targetValue);

	if (left != nullptr)
	{
		return left;
	}

	return isExist(node->right, targetValue);
}

Solutions::TreeNode* Solutions::getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target)
{
	return isExist(cloned, target->val);
}
