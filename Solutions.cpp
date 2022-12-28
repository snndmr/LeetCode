#include "Solutions.h"

int Solutions::findCenter(std::vector<std::vector<int>>& edges) {
	if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
		return edges[0][0];
	}

	return edges[0][1];
}

int Solutions::sumOddLengthSubarrays(std::vector<int>& arr) {
	const size_t size = arr.size();
	std::vector<int> preSum(size + 1);

	for (size_t i = 0; i < size; i++) {
		preSum[i + 1] = preSum[i] + arr[i];
	}

	int result = 0;

	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size - i; j += 2) {
			result += preSum[i + j + 1] - preSum[i];
		}
	}

	return result;
}

int Solutions::deleteGreatestValue(std::vector<std::vector<int>>& grid) {
	const size_t gridSize = grid.size();
	const size_t rowSize = grid.at(0).size();

	for (size_t i = 0; i < gridSize; i++) {
		std::sort(grid[i].begin(), grid[i].end());
	}

	int result = 0;

	for (size_t i = 0; i < rowSize; i++) {
		int max = 0;

		for (size_t j = 0; j < gridSize; j++) {
			if (grid[j][i] > max) {
				max = grid[j][i];
			}
		}

		result += max;
	}

	return result;
}

bool Solutions::arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
	std::string concanated1;
	std::string concanated2;

	for (std::string& piece : word1) {
		concanated1 += piece;
	}

	for (std::string& piece : word2) {
		concanated2 += piece;
	}

	if (concanated1.size() != concanated2.size()) {
		return false;
	}

	return concanated1 == concanated2;
}

int Solutions::numberOfMatches(int n) {
	int sum = 0;

	while (n > 1) {
		if (n % 2 == 0) {
			sum += n / 2;
			n /= 2;
		} else {
			sum += (n - 1) / 2;
			n /= 2;
			n++;
		}
	}

	return sum;
}

int Solutions::uniqueMorseRepresentations(std::vector<std::string>& words) {
	std::string morseAlphabet[26] = {
			".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",
			".---", "-.-",  ".-..", "--",   "-.",  "---",  ".--.", "--.-", ".-.",
			"...",  "-",    "..-",  "...-", ".--", "-..-", "-.--", "--.." };

	std::unordered_set<std::string> convertedWords;
	std::vector<std::string> converted(words.size(), "");

	for (std::string& word : words) {
		std::string convertedWord;

		for (char& letter : word) {
			convertedWord += morseAlphabet[letter - 'a'];
		}

		convertedWords.insert(convertedWord);
	}

	return convertedWords.size();
}

int Solutions::maxDepth(std::string s) {
	int maxDepth = 0;
	int currentDepth = maxDepth;

	for (char& c : s) {
		if (c == '(') {
			currentDepth++;
		} else if (c == '(') {
			currentDepth--;
		}

		if (currentDepth > maxDepth) {
			maxDepth = currentDepth;
		}
	}

	return maxDepth;
}

int Solutions::getDecimalValue(ListNode* head) {
	std::string binNum;

	while (head != nullptr) {
		binNum += head->val;
		head = head->next;
	}

	int base = 1;
	int result = 0;

	for (int i = binNum.size() - 1; i >= 0; i--) {
		result += binNum[i] * base;
		base *= 2;
	}

	return result;
}

int Solutions::countKDifference(std::vector<int>& nums, int k) {
	int countKDifference = 0;

	// Brute Force - Time Complexity: O(n^2)
	/*
	const size_t size = nums.size();

	for (size_t i = 0; i < size - 1; i++) {
		for (size_t j = i + 1; j < size; j++) {
			if (abs(nums[i] - nums[j]) == k) {
				countKDifference++;
			}
		}
	}
	*/

	int map[101] = {};

	for (int& num : nums) {
		map[num]++;
	}

	for (int i = k + 1; i < 101; i++) {
		countKDifference += map[i] * map[i - k];
	}

	return countKDifference;
}

std::string Solutions::truncateSentence(std::string s, int k) {
	int lastPos = 0;
	int spaceCount = 0;

	for (size_t i = 0; i < s.size(); i++) {
		if (isspace(s[i])) {
			spaceCount++;
		}

		if (spaceCount == k) {
			lastPos = i;
			break;
		}

		if (i == s.size() - 1) {
			return s;
		}
	}

	return s.substr(0, lastPos);
}

int Solutions::countAsterisks(std::string s) {
	int pair = 0;
	int asteriskCount = 0;

	for (char& c : s) {
		if (c == '|') {
			pair++;
		} else if (pair % 2 == 0 && c == '*') {
			asteriskCount++;
		}
	}

	return asteriskCount;
}

int Solutions::minBitFlips(int start, int goal) {
	std::string startBinary = std::bitset<32>(start).to_string();
	std::string goalBinary = std::bitset<32>(goal).to_string();

	int countDifference = 0;

	for (size_t i = 0; i < startBinary.size(); i++) {
		if (startBinary[i] != goalBinary[i]) {
			countDifference++;
		}
	}

	return countDifference;
}

int Solutions::maximum69Number(int num) {
	std::string str = std::to_string(num);

	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == '6') {
			str[i] = '9';
			break;
		}
	}

	return stoi(str);
}

std::string Solutions::toLowerCase(std::string s) {
	for (size_t i = 0; i < s.size(); i++) {
		if (isupper(s[i])) {
			s[i] = tolower(s[i]);
		}
	}

	return s;
}

int Solutions::countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
	bool map[26] = { false };

	for (size_t i = 0; i < allowed.size(); i++) {
		map[allowed[i] - 'a'] = true;
	}

	int count = 0;
	bool isInconsistent;

	for (std::string& word : words) {
		isInconsistent = false;

		for (char& letter : word) {
			if (!map[letter - 'a']) {
				isInconsistent = true;
				break;
			}
		}

		if (!isInconsistent) {
			count++;
		}
	}

	return count;
}

std::vector<std::string> Solutions::sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
	std::map<int, std::string, std::greater<int>> people;

	for (size_t i = 0; i < names.size(); i++) {
		people[heights[i]] = names[i];
	}

	std::vector<std::string> result;

	for (std::pair<int, std::string> person : people) {
		result.push_back(person.second);
	}

	return result;
}

std::string Solutions::reverseWords(std::string s) {
	int begin = 0;

	for (size_t i = 0; i < s.size(); i++) {
		if (isspace(s[i])) {
			std::reverse(s.begin() + begin, s.begin() + i);
			begin = i + 1;
		} else if (i == s.size() - 1) {
			std::reverse(s.begin() + begin, s.begin() + i + 1);
		}
	}

	return s;
}

int Solutions::countPoints(std::string rings) {
	bool rods[10][3] = { {false} };

	for (size_t i = 0; i < rings.size(); i += 2) {
		int rodIndex = rings[i + 1] - '0';

		switch (rings[i]) {
			case 'R':
				rods[rodIndex][0] = true;
				break;
			case 'G':
				rods[rodIndex][1] = true;
				break;
			case 'B':
				rods[rodIndex][2] = true;
				break;
		}
	}

	int count = 0;

	for (size_t i = 0; i < 10; i++) {
		if (rods[i][0] && rods[i][1] && rods[i][2]) {
			count++;
		}
	}

	return count;
}

int Solutions::maxProductDifference(std::vector<int>& nums) {
	int biggest = INT_MIN;
	int nextBiggest = INT_MIN;
	int smallest = INT_MAX;
	int nextSmallest = INT_MAX;

	for (size_t i = 0; i < nums.size(); i++) {
		if (nums[i] > biggest) {
			nextBiggest = biggest;
			biggest = nums[i];
		} else if (nums[i] > nextBiggest) {
			nextBiggest = nums[i];
		}

		if (nums[i] < smallest) {
			nextSmallest = smallest;
			smallest = nums[i];
		} else if (nums[i] < nextSmallest) {
			nextSmallest = nums[i];
		}
	}

	return (biggest * nextBiggest) - (smallest * nextSmallest);
}

int Solutions::countGoodTriplets(std::vector<int>& arr, int a, int b, int c) {
	int count = 0;

	const size_t size = arr.size();
	for (size_t i = 0; i < size - 2; i++) {
		for (size_t j = i + 1; j < size - 1; j++) {
			for (size_t k = j + 1; k < size; k++) {
				if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c) {
					count++;
				}
			}
		}
	}

	return count;
}

std::vector<std::vector<int>> Solutions::flipAndInvertImage(std::vector<std::vector<int>>& image) {
	const size_t size = image.size();
	const size_t rowSize = image.at(0).size();

	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < rowSize / 2; j++) {
			int temp = image[i][j];
			image[i][j] = image[i][rowSize - j - 1];
			image[i][rowSize - j - 1] = temp;

			image[i][j] = image[i][j] == 0 ? 1 : 0;
			image[i][rowSize - j - 1] = image[i][rowSize - j - 1] == 0 ? 1 : 0;
		}
	}

	return image;
}

int Solutions::countPairs(std::vector<int>& nums, int k) {
	int count = 0;

	for (size_t i = 0; i < nums.size() - 1; i++) {
		for (size_t j = i + 1; j < nums.size(); j++) {
			if (nums[i] == nums[j] && (i * j) % k == 0) {
				count++;
			}
		}
	}
	return count;
}

int Solutions::minMovesToSeat(std::vector<int>& seats, std::vector<int>& students) {
	std::sort(seats.begin(), seats.end());
	std::sort(students.begin(), students.end());

	int sum = 0;

	for (size_t i = 0; i < seats.size(); i++) {
		sum += abs(students[i] - seats[i]);
	}

	return sum;
}

std::string Solutions::removeOuterParentheses(std::string s) {
	std::string result;

	int loc = 0;

	for (size_t i = 0; i < s.size(); i++) {
		if (loc == 0 && s[i] == '(') {
			loc++;
			continue;
		} else if (s[i] == '(') {
			loc++;
		} else if (s[i] == ')') {
			loc--;
		}

		if (loc > 0) {
			result += s[i];
		}
	}

	return result;
}

int Solutions::commonFactors(int a, int b) {
	int count = 1;

	for (int i = 2; i <= std::min(a, b); i++) {
		if (a % i == 0 && b % i == 0) {
			count++;
		}
	}

	return count;
}

int Solutions::numOfStrings(std::vector<std::string>& patterns, std::string word) {
	int counter = 0;
	for (const std::string& str : patterns) {
		for (size_t i = 0; i < word.size(); ++i) {
			if (word[i] == str[0] && word.substr(i, str.size()) == str) {
				counter += 1;
				break;
			}
		}
	}
	return counter;
}

int Solutions::diagonalSum(std::vector<std::vector<int>>& mat) {
	const size_t size = mat.size();

	int sum = 0;

	for (size_t i = 0; i < size / 2; i++) {
		sum += mat[i][i] + mat[size - i - 1][size - i - 1] + mat[size - i - 1][i] + mat[i][size - i - 1];
	}

	if (size % 2 != 0) {
		sum += mat[size / 2][size / 2];
	}

	return sum;
}

std::string Solutions::replaceDigits(std::string s) {
	for (size_t i = 1; i < s.size(); i += 2) {
		s[i] = static_cast<char>(s[i - 1] + (s[i] - '0'));
	}
	return s;
}

int Solutions::pivotInteger(int n) {
	int sum = 0;
	int sumUpToN = (n * (n + 1)) / 2;

	for (int i = n; i >= n / 2; i--) {
		sum += i;
		if (sum == sumUpToN) {
			return i;
		}
		sumUpToN -= i;
	}

	return -1;
}

std::string Solutions::freqAlphabets(std::string s) {
	std::string decrypted;

	for (size_t i = 0; i < s.size(); i++) {
		if (i + 2 < s.size() && s[i + 2] == '#') {
			decrypted += 'a' + stoi(s.substr(i, 2)) - 1;
			i += 2;
		} else {
			decrypted += 'a' + s[i] - '0' - 1;
		}
	}

	return decrypted;
}

std::vector<int> Solutions::twoSum(std::vector<int>& nums, int target) {
	return std::vector<int>();
}
