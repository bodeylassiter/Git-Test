#include <iostream>
#include "Circle.h"
using namespace std;

// Constructor initializing x, y, and radius to default values
Circle::Circle() : x(0), y(0), radius(1.0) {}

// Move method to set new x and y values
void Circle::move(int newX, int newY) {
  x = newX;
  y = newY;
}

// Resize method to set a new radius
void Circle::resize(float newRadius) {
  if (newRadius > 0) {
    radius = newRadius;
  } else {
    cout << "Radius must be positive!" << endl;
  }
}

// Read method to prompt user for x, y, and radius values
void Circle::read() {
  cout << "Enter x coordinate: ";
  cin >> x;
  cout << "Enter y coordinate: ";
  cin >> y;
  cout << "Enter radius: ";
  cin >> radius;

  if (radius <= 0) {
    cout << "Invalid radius. Setting radius to default (1.0)." << endl;
    radius = 1.0;
  }
}

// Print method to display the values of x, y, and radius
void Circle::print() const {
  cout << "Circle's center: (" << x << ", " << y << ")" << endl;
  cout << "Circle's radius: " << radius << endl;
}
