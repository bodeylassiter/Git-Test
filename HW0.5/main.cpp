#include <iostream>
#include "Problem1_5.h"  // Include the header for StaticArrayHandler
#include "Problem2_3.h"  // Include the header for DynamicArrayHandler
#include "Circle.h" // Include the header for the Circle class

using namespace std;

int main() {
  // Problem 1/5: Static Array
  cout << "Running Problem 1/5 (Static Array):" << endl;
  StaticArrayHandler staticHandler;  // Correctly declare StaticArrayHandler
  staticHandler.populateArray("input.txt");  // Populate the static array
  staticHandler.printArray();  // Print the static array
  float staticAvg = staticHandler.averageArray();  // Calculate average of the static array
  cout << "Average of static array: " << staticAvg << endl;

  cout << endl;

  // Problem 2/3: Dynamic Array
  cout << "Running Problem 2/3 (Dynamic Array):" << endl;

  // Ask the user for the size of the dynamic array
  int arraySize;
  cout << "Enter the size of the array: ";
  cin >> arraySize;

  // Dynamically allocate array of the given size
  int* dynamicArray = new int[arraySize];

  DynamicArrayHandler dynamicHandler;
  dynamicHandler.populateArray(dynamicArray, arraySize, "input.txt");  // Populate the dynamic array
  dynamicHandler.printArray(dynamicArray, arraySize);  // Print the dynamic array
  float dynamicAvg = dynamicHandler.averageArray(dynamicArray, arraySize);  // Calculate average of the dynamic arra\
y
  cout << "Average of dynamic array: " << dynamicAvg << endl;

  // Free dynamically allocated memory
  delete[] dynamicArray;

  cout << endl;
  // Problem 4: Circle
  cout << "Running Problem 4 (Circle Class):" << endl;
  Circle myCircle;

  cout << "Enter details for the circle:" << endl;
  myCircle.read();

  cout << "Initial circle details:" << endl;
  myCircle.print();

  return 0;

}
