#include <iostream>

int main () {
  char text[] {"This is supposed to be uppercase"};
  
  char dest [std::size(text)];
  
  for(size_t i {}; i < std::size(text); i++) {
    dest[i] = toupper(text[i]);
  }
  
  std::cout << "Original string: " << text << std::endl;
  std::cout << "Modified string: " << dest << std::endl;
  return 0;
}