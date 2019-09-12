#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

string randomColor () {
	char colors = {"R", "G", "B", "O", "p"};
	string color = colors[rand() % 5];
	
	return color; 
}

vector<string> parseColorRow (row) {
	int lastColorIndex;
	int occurences;
	int firstOccurenceIndex;
	
	for (int i = 0; i < row.size(); i++) {
		int nextColorIndex = i + 1
		int color = row[i]		

		if (nextColorIndex <= row.size()) {
			if (color = row[nextColorIndex]) {
				occurences++;
				if (occurences == 1) {
					firstOccurenceIndex = i;
				} 
			} else if {
				occurences = 0
			}

			if (occurences >= 3) {
				for (j = firstOccurenceIndex; j <= i; j++) {
					row[j] = randomColor();
				}
				parseColorRow(row, )
			}
		} else {
			
		}
	}		
}

int main () {
	
}
