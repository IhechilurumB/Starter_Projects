#include <iostream>
#include <cstring>
int main () {
  const char* str {"I'm the top dog today on."};
  char target = 't';
  const char* result {str};
  size_t iteration {};
  
  while((result = std::strchr(result, target)) != nullptr) {
    std::cout << "Found an instance of " << target << std::endl;
    std::cout << "Starting from :" << result << std::endl;
    
    ++result;
    ++iteration;
  }
  return 0;
}