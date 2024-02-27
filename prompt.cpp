#include <iostream>
using namespace std;

int main(){
  int x = 0, y = 0;
  cout << "Enter two numbers to print range of values\n";
  cin >> x >> y;
  while(y >= x ){
    cout << x << "\n";
    x++;
  }
  while(x >= y ){
    cout << x << "\n";
    x--;
  }
  return 0;
}
