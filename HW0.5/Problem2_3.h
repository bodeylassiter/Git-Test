#ifndef PROBLEM2_3_H
#define PROBLEM2_3_H

class DynamicArrayHandler {
 public:
  // Constructor
  DynamicArrayHandler();

  // Function to populate the dynamic array from a file
  void populateArray(int* arr, int maxSize, const char* filename);

  // Function to print the dynamic array contents
  void printArray(const int* arr, int length) const;

  // Function to calculate the average of the dynamic array elements
  float averageArray(const int* arr, int length) const;
};

#endif
