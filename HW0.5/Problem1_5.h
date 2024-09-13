#ifndef PROBLEM1_5_H
#define PROBLEM1_5_H

class StaticArrayHandler {
 public:
  static const int MAX_ARRAY = 1000;

  // Constructor
  StaticArrayHandler();


  // Function to populate the array from a file
  void populateArray(const char* filename);

  // Function to print the array contents
  void printArray() const;

  // Function to calculate the average of the array elements
  float averageArray() const;

 private:
  int arr[MAX_ARRAY];  // Static array of size MAX_ARRAY
  int size;            // Actual number of elements in the array
};

#endif
