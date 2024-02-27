#include <iostream>
using namespace std;

int main(){
/*    int sum = 0, val = 51;
    while(val <= 100){
        sum += val;
        val++;
    }
    cout << "The sum of numbers from 51 through 100 is " << sum << ".";

    int x = 10;
    while(x >= 0){
        cout << "\n" << x ;
        x--;
    }
*/
  int sum = 0;
  for(int val = 0; val <= 10; ++val)
    sum += val;
  std::cout << "The sum of numbers from 1 to 10 is "<<  sum;
    return 0;
}
