#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  vec.push_back(1);
  vec.push_back(0);
  bool b = vec[0] != 0; // Explicit conversion to bool
  bool c = vec[1] != 0;
  std::cout << b << " " << c << std::endl; 
  return 0;
}
