#include <iostream>
#include <string>
#include <concepts>

template <typename T>
requires std::integral <T>
T maximum (T a, T b){
  return (a>b) ? a : b;
}

template <std::string>
std::string maximum ( std::string a, std::string b) {
  std::cout << "Cannot compare strings" << std::endl;
}

int main () {
  //int x {2};
  //int y {7};
  
  //std::string x {"Hello"};
  //std::string y {" world"};
  
  auto max = maximum(x,y);  
  std::cout << max << std::endl;
  return 0;
}