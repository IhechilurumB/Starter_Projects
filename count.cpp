#include <iostream>
using namespace std;

int main(){
  int cv = 0, val = 0;
  if(std::cin >> cv){
    int cnt = 0;
    while(std::cin >> val){
	if(val == cv){
	  cnt++;
	}
	else{
	  std::cout << cv << "occurs" << cnt << "times.";
	}
    }
  }
  return 0;
}
