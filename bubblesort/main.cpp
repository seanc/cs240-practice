#include <iostream>

int * populateWithRandom(int arr[], int size);
int * sort(int arr[], int size);

int main() {
  srand(time(0));

  int arr[20];
  
  int * randomArray = populateWithRandom(arr, 20);

  std::cout << "Unsorted Array:" << std::endl;
  for (int i = 0; i < 20; i++) {
    std::cout << randomArray[i] << " ";
  }

  int * sortedArr = sort(randomArray, 20);
  std::cout << std::endl <<  "Sorted Array:" << std::endl;
  for (int i = 0; i < 20; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
}

int * populateWithRandom(int arr[], int size) {
  int counter = 0;

  while (counter < 20) {
    arr[counter] = rand() % 100;
    counter++;
  }

  return arr;
}

int * sort (int arr[], int size) {
  int end = size;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < end; j++) {
      if ((j + 1) < end) {
        if (arr[j] > arr[j + 1]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      } 
    }

    end--;
  }
  
  return arr;
}