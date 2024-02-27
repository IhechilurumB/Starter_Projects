#include <iostream>
using namespace std;

int main() {
  double sales = 95000;
  double stateTax = sales * 0.04;
  double countyTax = sales * 0.02;
  double totalTax = stateTax + countyTax;
  cout << "Total sales: " << sales << endl
       << "State Tax: " << stateTax << endl
       << "County Tax: " << countyTax << endl
       << "Total Tax: " << totalTax << endl;
  return 0;
}
