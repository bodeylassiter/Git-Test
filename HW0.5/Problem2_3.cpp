#include <iostream>
#include <fstream>
#include "Problem2_3.h"
using namespace std;

// Constructor (can be empty since we use dynamic arrays)
DynamicArrayHandler::DynamicArrayHandler() {}

// Function to populate the dynamic array from a file
void DynamicArrayHandler::populateArray(int* arr, int maxSize, const char* filename) {
  ifstream inFile(filename);
  if (!inFile) {
    cout << "Error opening file!" << endl;
    return;
  }

  int num, index = 0;
  while (inFile >> num && index < maxSize) {
    arr[index++] = num;
  }

  inFile.close();
}

// Function to print the dynamic array contents
void DynamicArrayHandler::printArray(const int* arr, int length) const {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Function to calculate the average of the dynamic array elements
float DynamicArrayHandler::averageArray(const int* arr, int length) const {
  if (length == 0) return 0;

  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += arr[i];
  }
  return static_cast<float>(sum) / length;
}

