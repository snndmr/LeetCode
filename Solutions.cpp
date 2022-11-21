#include "Solutions.h"

#include <algorithm>
#include <unordered_map>

std::vector<int> solutions::get_concatenation(const std::vector<int>& nums)
{
	const size_t size = nums.size();

	std::vector<int> concatenated(2 * size);

	for (size_t i = 0; i < size; i++)
	{
		concatenated[i] = nums[i];
		concatenated[size + i] = nums[i];
	}

	return concatenated;
}

std::vector<int> solutions::build_array(const std::vector<int>& nums)
{
	const size_t size = nums.size();

	std::vector<int> permutated(size);

	for (size_t i = 0; i < size; i++)
	{
		permutated[i] = nums[nums[i]];
	}

	return permutated;
}

int solutions::sum(const int num1, const int num2)
{
	return num1 + num2;
}

std::vector<int> solutions::running_sum(const std::vector<int>& nums)
{
	const size_t size = nums.size();

	std::vector<int> sum_of_nums(size);

	sum_of_nums[0] = nums[0];

	for (size_t i = 1; i < size; i++)
	{
		sum_of_nums[i] = nums[i] + sum_of_nums[i - 1];
	}

	return sum_of_nums;
}

int solutions::min_partitions(const std::string& n)
{
	int max = 0;

	for (const char i : n)
	{
		if (i - '0' > max)
		{
			max = i - '0';
		}

		if (max == 9)
		{
			break;
		}
	}

	return max;
}

std::string solutions::defang_ip_addr(const std::string& address)
{
	std::string replaced;

	for (const char c : address)
	{
		if (c == '.')
		{
			replaced += "[.]";
		}
		else
		{
			replaced += c;
		}
	}

	return replaced;
}

int solutions::final_value_after_operations(std::vector<std::string>& operations)
{
	int value = 0;

	for (std::string& operation : operations)
	{
		if (operation[1] == '-') value--;
		else value++;
	}

	return value;
}

std::vector<int> solutions::shuffle(const std::vector<int>& nums, const int n)
{
	std::vector<int> shuffled(static_cast<size_t>(2 * n));

	for (size_t i = 0; i < static_cast<size_t>(n); i++)
	{
		shuffled[2 * i] = nums[i];
		shuffled[2 * i + 1] = nums[n + i];
	}

	return shuffled;
}

solutions::SubrectangleQueries::SubrectangleQueries(std::vector<std::vector<int>>& rectangle) : rectangle(rectangle) {}

void solutions::SubrectangleQueries::update_subrectangle(const int row1, const int col1, const int row2, const int col2,
                                                         const int new_value) const
{
	for (int i = row1; i <= row2; i++)
	{
		for (int j = col1; j <= col2; j++)
		{
			rectangle[i][j] = new_value;
		}
	}
}

int solutions::SubrectangleQueries::get_value(const int row, const int col) const
{
	return rectangle[row][col];
}

int solutions::maximum_wealth(const std::vector<std::vector<int>>& accounts)
{
	int maximumWealth = 0;

	for (const std::vector<int>& account : accounts)
	{
		int sum = 0;

		for (const int& money : account) sum += money;
		if (maximumWealth < sum) maximumWealth = sum;
	}

	return maximumWealth;
}

int solutions::most_words_found(std::vector<std::string>& sentences)
{
	int max = 0;

	for (std::string& sentence : sentences)
	{
		int sum = 0;

		for (const char& letter : sentence)
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

int solutions::num_identical_pairs(std::vector<int>& nums)
{
	std::unordered_map<int, int> dict;

	for (int& num : nums)
	{
		dict[num]++;
	}

	int sum = 0;

	for (const std::pair<const int, int>& value : dict)
	{
		if (value.second > 1)
		{
			sum += value.second * (value.second - 1) / 2;
		}
	}

	return sum;
}

int solutions::minimum_sum(int num)
{
	int nums[4]{};

	for (int& i : nums)
	{
		i = num % 10;
		num /= 10;
	}

	std::sort(std::begin(nums), std::end(nums));

	return 10 * (nums[0] + nums[1]) + nums[2] + nums[3];
}

solutions::parking_system::parking_system(const int big, const int medium, const int small)
{
	slots[0] = big;
	slots[1] = medium;
	slots[2] = small;
}

bool solutions::parking_system::add_car(const int car_type)
{
	return slots[car_type - 1]-- > 0;
}

int solutions::smallest_even_multiple(const int n)
{
	return n % 2 == 0 ? n : n * 2;
}

int solutions::num_jewels_in_stones(const std::string& jewels, const std::string& stones)
{
	int sum = 0;

	for (const char& stone : stones)
	{
		for (const char& jewel : jewels)
		{
			if (jewel == stone)
			{
				sum++;
			}
		}
	}

	return sum;
}

bool solutions::is_strictly_palindromic(const int n)
{
	return n == 1 || n == 3;
}

std::vector<bool> solutions::kids_with_candies(const std::vector<int>& candies, const int extra_candies)
{
	int max = 0;

	for (const int& candy : candies)
	{
		if (max < candy)
		{
			max = candy;
		}
	}

	std::vector<bool> greatest;

	greatest.reserve(candies.size());
	for (const int& candy : candies)
	{
		greatest.push_back(candy + extra_candies >= max);
	}

	return greatest;
}

bool solutions::check_tree(const tree_node* root)
{
	return root->val == root->left->val + root->right->val;
}

solutions::tree_node* is_exist(solutions::tree_node* node, const int target_value)
{
	if (node == nullptr)
	{
		return nullptr;
	}

	if (node->val == target_value)
	{
		return node;
	}

	solutions::tree_node* left = is_exist(node->left, target_value);

	if (left != nullptr)
	{
		return left;
	}

	return is_exist(node->right, target_value);
}

solutions::tree_node* solutions::get_target_copy(tree_node* original, tree_node* cloned, const tree_node* target)
{
	return is_exist(cloned, target->val);
}

int solutions::deepest_leaves_sum(const tree_node* root)
{
	static int sum = 0;
	static int height = 0;
	static int maxHeight = 0;

	if (root == nullptr)
	{
		return 0;
	}

	if (root->left != nullptr)
	{
		height += 1;
		deepest_leaves_sum(root->left);
		height -= 1;
	}

	if (root->right != nullptr)
	{
		height += 1;
		deepest_leaves_sum(root->right);
		height -= 1;
	}

	if (height >= maxHeight && root->left == nullptr && root->right == nullptr)
	{
		if (height > maxHeight)
		{
			sum = 0;
			maxHeight = height;
		}

		sum += root->val;
	}

	return sum;
}

solutions::list_node* solutions::merge_nodes(const list_node* head)
{
	const auto sum_list_head = new list_node(0);
	list_node* sum_list_iter = sum_list_head;

	while (head->next != nullptr)
	{
		head = head->next;

		if (head->val == 0 && head->next != nullptr)
		{
			sum_list_iter->next = new list_node(0);
			sum_list_iter = sum_list_iter->next;
		}
		else
		{
			sum_list_iter->val += head->val;
		}
	}

	return sum_list_head;
}

int solutions::subtract_product_and_sum(int n)
{
	int sum = 0;
	int product = 1;

	while (n > 0)
	{
		const int temp = n % 10;

		sum += temp;
		product *= temp;

		n /= 10;
	}

	return product - sum;
}

std::vector<int> solutions::smaller_numbers_than_current(std::vector<int>& nums)
{
	std::vector<int> sorted(nums.size());
	partial_sort_copy(begin(nums), end(nums), begin(sorted), end(sorted));

	int lastNum = 0;
	int indexOfNum = 0;
	std::vector<int> result;

	for (int& num : nums)
	{
		if (lastNum != num)
		{
			indexOfNum = static_cast<int>(std::find(sorted.begin(), sorted.end(), num) - sorted.begin());
		}

		lastNum = num;
		result.push_back(indexOfNum);
	}

	return result;
}

std::vector<int> solutions::count_points(std::vector<std::vector<int>>& points, std::vector<std::vector<int>>& queries)
{
	std::vector<int> result;

	for (std::vector<int>& query : queries)
	{
		int count = 0;

		for (std::vector<int>& point : points)
		{
			if (sqrt(pow(point[0] - query[0], 2) + pow(point[1] - query[1], 2)) <= query[2])
			{
				count += 1;
			}
		}

		result.push_back(count);
	}

	return result;
}

std::string solutions::interpret(std::string command)
{
	std::string result;

	for (auto i = command.begin(); i < command.end(); ++i)
	{
		if (*i == '(')
		{
			if (*(i + 1) == ')')
			{
				result += 'o';
				i += 1;
			}
			else
			{
				result += "al";
				i += 3;
			}
		}
		else
		{
			result += *i;
		}
	}

	return result;
}

int solutions::max_increase_keeping_skyline(const std::vector<std::vector<int>>& grid)
{
	std::vector<int> rows_max;
	std::vector<int> columns_max;

	const size_t size = grid.size();

	for (uint8_t i = 0; i < size; i++)
	{
		int row_max = 0;
		int col_max = 0;

		for (uint8_t j = 0; j < size; j++)
		{
			if (grid[i][j] > row_max)
			{
				row_max = grid[i][j];
			}

			if (grid[j][i] > col_max)
			{
				col_max = grid[j][i];
			}
		}

		rows_max.push_back(row_max);
		columns_max.push_back(col_max);
	}

	int sum = 0;

	for (uint8_t i = 0; i < size; i++)
	{
		for (uint8_t j = 0; j < size; j++)
		{
			const int min_max = rows_max[i] > columns_max[j] ? columns_max[j] : rows_max[i];

			if (grid[i][j] < min_max)
			{
				sum += min_max - grid[i][j];
			}
		}
	}

	return sum;
}

std::vector<int> solutions::decode(const std::vector<int>& encoded, const int first)
{
	std::vector<int> decoded{first};

	for (const int& num : encoded)
	{
		decoded.push_back(*(decoded.end() - 1) ^ num);
	}

	return decoded;
}

std::vector<int> solutions::decompress_rle_list(std::vector<int>& nums)
{
	std::vector<int> result;

	for (auto i = nums.begin(); i < nums.end(); i += 2)
	{
		for (int j = 0; j < *i; j++)
		{
			result.push_back(*(i + 1));
		}
	}

	return result;
}

std::vector<int> solutions::create_target_array(const std::vector<int>& nums, const std::vector<int>& index)
{
	std::vector<int> target;

	for (size_t i = 0; i < nums.size(); i++)
	{
		target.insert(target.begin() + index[i], nums[i]);
	}

	return target;
}

std::unordered_map<std::string, std::string> dict;

std::string solutions::encode(const std::string& long_url)
{
	const std::string server_url = "http://tinyurl.com/";
	const std::string characters = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(static_cast<uint32_t>(time(nullptr))); // NOLINT(cert-msc51-cpp)

	const int loop = rand() % 5 + 5; // NOLINT(concurrency-mt-unsafe)
	const size_t size = characters.size();

	std::string encoded = server_url;

	for (int i = 0; i < loop; i++)
	{
		encoded += characters[rand() % size]; // NOLINT(concurrency-mt-unsafe)
	}

	dict[encoded] = long_url;

	return encoded;
}

std::string solutions::decode(const std::string& short_url)
{
	return dict[short_url];
}

std::vector<std::vector<int>> solutions::group_the_people(const std::vector<int>& group_sizes)
{
	std::unordered_map<int, std::vector<int>> groups;

	for (size_t i = 0; i < group_sizes.size(); i++)
	{
		groups[group_sizes[i]].push_back(static_cast<int>(i));
	}

	std::vector<std::vector<int>> result;

	for (std::pair<const int, std::vector<int>> group : groups)
	{
		for (size_t i = 0; i < group.second.size(); i += group.first)
		{
			result.emplace_back(group.second.begin() + static_cast<int>(i),
			                    group.second.begin() + static_cast<int>(i) + group.first);
		}
	}

	return result;
}

std::string solutions::restore_string(const std::string& s, const std::vector<int>& indices)
{
	const size_t size = s.size();
	std::string restored(size, ' ');

	for (size_t i = 0; i < size; i++)
	{
		restored[indices[i]] = s[i];
	}

	return restored;
}

std::vector<std::string> solutions::cells_in_range(const std::string& s)
{
	std::vector<std::string> cells;

	for (int i = static_cast<unsigned char>(s[0]); i <= s[3]; i++)
	{
		for (int j = static_cast<unsigned char>(s[1]); j <= s[4]; j++)
		{
			cells.push_back(static_cast<char>(i) + std::to_string(j - '0'));
		}
	}

	return cells;
}

std::vector<double> solutions::convert_temperature(const double celsius)
{
	double kelvin = celsius + 273.15;
	double fahrenheit = celsius * 1.80 + 32.00;
	return {kelvin, fahrenheit};
}

std::vector<int> solutions::find_array(const std::vector<int>& pref)
{
	const size_t size = pref.size();

	std::vector<int> array;
	array.reserve(size);
	array.push_back(pref[0]);

	for (size_t i = 1; i < size; i++)
	{
		array.push_back(pref[i - 1] ^ pref[i]);
	}

	return array;
}

int solutions::number_of_steps(int num)
{
	int steps = 0;
	while (num > 0)
	{
		if (num % 2 == 0)
		{
			num /= 2;
		}
		else
		{
			num -= 1;
		}

		steps++;
	}

	return steps;
}

solutions::ordered_stream::ordered_stream(const int n)
{
	ptr = 0;
	chunk = new std::vector<std::string>(n);
}

std::vector<std::string> solutions::ordered_stream::insert(const int id_key, const std::string& value)
{
	*(chunk->begin() + id_key - 1) = value;

	const int temp = ptr;

	if (ptr + 1 == id_key)
	{
		ptr += 1;

		while (chunk->begin() + ptr != chunk->end() && !(chunk->begin() + ptr)->empty())
		{
			ptr += 1;
		}
	}

	return {chunk->begin() + temp, chunk->begin() + ptr};
}

std::vector<int> solutions::min_operations(const std::string& boxes)
{
	const size_t size = boxes.size();
	auto* res = new std::vector<int>(size);

	int cost_left = 0;
	int cost_right = 0;
	int last_cost_left = 0;
	int last_cost_right = 0;

	for (size_t i = 0; i < size; i++)
	{
		res->at(i) += last_cost_left;
		res->at(size - i - 1) += last_cost_right;

		cost_left += boxes[i] - '0';
		cost_right += boxes[size - i - 1] - '0';

		last_cost_left += cost_left;
		last_cost_right += cost_right;
	}

	return *res;
}

auto solutions::decode_message(const std::string& key, const std::string& message) -> std::string
{
	std::unordered_map<char, unsigned int> alphabet;

	char decode = 'a';

	for (const char& c : key)
	{
		if (std::isalpha(c) && alphabet.find(c) == alphabet.end())
		{
			alphabet[c] = static_cast<int>(decode);
			decode++;
		}
	}

	std::string str{};

	for (const char& c : message)
	{
		if (std::isalpha(c))
		{
			str.push_back(static_cast<char>(alphabet[c]));
		}
		else
		{
			str.push_back(c);
		}
	}

	return str;
}
