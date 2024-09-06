#include <iostream>

  int sum(int n) {
    int total = 0;
    for (int i = 1; i <=n; ++i){
      total += i;
    }
    return total;
  }

  int main() {
    int n;

    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = sum(n);
    std::cout << "The sum of number 1 to " << n << " is: " << result << std::endl;

    return 0;

  }
