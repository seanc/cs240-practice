#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void printRow (string title, vector<string> row) {
	string rowString = "";
	for (const auto &piece : row) rowString += piece + " ";

	cout << title << ": " << endl << rowString << endl;
}

string randomColor () {
	const char* colors[] = {"R", "G", "B", "O", "P"};
	string color = colors[rand() % 5];
	
	return color; 
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
					for (int j = firstOccurenceIndex; j <= index; j++) {
						row[j] = randomColor();
					}

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
	vector<string> row{"R", "R", "R", "G", "B", "R", "R", "R", "P", "O", "O", "O", "O", "O", "G", "G", "G", "A", "B", "B", "B", "G", "G", "B", "B", "B"};
	vector<string> parsedRow = parseColorRow(row);

	printRow("Original Row", row);
	printRow("Parsed Row", parsedRow);
}
