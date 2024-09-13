#include <iostream>
#include <fstream>
#include "Problem1_5.h"
using namespace std;

// Constructor to initialize size to 0
StaticArrayHandler::StaticArrayHandler() : size(0) {}

// Function to populate the static array from a file
void StaticArrayHandler::populateArray(const char* filename) {
  ifstream inFile(filename);
  if (!inFile) {
    cout << "Error opening file!" << endl;
    return;
  }

  int num, index = 0;
  while (inFile >> num && index < MAX_ARRAY) {
    arr[index++] = num;
  }
  size = index;
  inFile.close();
}

// Function to print the static array contents
void StaticArrayHandler::printArray() const {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Function to calculate the average of the static array elements
float StaticArrayHandler::averageArray() const {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return static_cast<float>(sum) / size;
}

