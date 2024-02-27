#include <iostream>
void cns (int a) {
  //initiallize dynamic char array
  const char* result = new char [] {1};
  size_t i{0};
  do{
    std::cout << *result;
  } while(i < a);
  
  delete [] result;
  result = nullptr;
}

int main () {
  cns(3);
  return 0;
}