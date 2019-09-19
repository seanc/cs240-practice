#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void printRow (string title, vector<string> row) {
	string rowString = "";
	for (const auto &piece : row) rowString += piece + " ";

	cout << title << ": " << endl << "1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16" << endl << rowString << endl;
}

string randomColor () {
	const char* colors[] = {"R", "G", "B", "O", "P"};
	int index = rand() % 5;
	string color = colors[index];
	
	return color; 
}

vector<string> randomColorRow () {
	vector<string> colors;
	for (int i = 0; i <= 15; i++) {
		colors.push_back(randomColor() + " ");
	}

	return colors;
}

void askSwap () {
	int swapFromIndex = 0;
	int swapToIndex = 0;

	cout << "Enter an index to swap from (1-10):" << endl;
	cin >> swapFromIndex;

	cout << "Enter an index to swap to (1-10):" << endl;
	cin >> swapToIndex;
	
	// TODO: check if selected indices are larger than the vector size
}

vector<string> parseColorRow (vector<string> row) {
	int index = 0;
	int occurences = 0;
	int firstOccurenceIndex = 0;
	string lastColor;

	while (index < row.size())
	{
		string color = row[index];
		int nextColorIndex = index + 1;

		if (nextColorIndex < row.size()) {
			if (color == row[nextColorIndex] || color == lastColor) {
				occurences++;
				lastColor = row[index];

				if (occurences == 1) {
					firstOccurenceIndex = index;
				}

				if (occurences >= 3) {
					// Replace subset with random sequence
					for (int j = firstOccurenceIndex; j <= index; j++) {
						row[j] = randomColor();
					}

					// Restart parsing from initial detection of sequence
					index = firstOccurenceIndex;
					occurences = 0;
				}
			} else {
				occurences = 0;
			}
		}

		index++;
	}
	
	return row;
}

int main () {
	srand(time(0)); 

	vector<string> startRow = randomColorRow();
	// vector<string> row{"R", "R", "R", "R", "R", "R", "B", "G", "B", "R", "R", "R", "R", "R", "P", "O", "O", "O", "O", "O", "G", "G", "G", "A", "B", "B", "B", "G", "G", "B", "B", "B"};
	// vector<string> parsedRow = parseColorRow(row);

	printRow("Original Row", startRow);
	// printRow("Parsed Row", parsedRow);
}
