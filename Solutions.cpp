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
