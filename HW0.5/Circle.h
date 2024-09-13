#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
 private:
  int x, y;        // Coordinates of the circle's center
  float radius;    // Radius of the circle

 public:
  // Constructor
  Circle();

  // Method to move the circle by setting new x and y values
  void move(int newX, int newY);

  // Method to resize the circle by setting a new radius
  void resize(float newRadius);

  // Method to read the values of x, y, and radius from the user
  void read();

  // Method to print the values of x, y, and radius to the terminal
  void print() const;
};

#endif


