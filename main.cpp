#include <iostream>
#include <list>
#include "feature-1/feature.h"

using namespace std;

int main() {
  int rateOffStatus = 0xf0f0ffff;
  cout << std::hex << rateOffStatus << endl;
  list<unsigned int> tankMeterRateOffStatus;
  rateOffStatus &= 0x3fffffff;
  cout << std::hex << rateOffStatus << endl;
  print_funct();
  return 0;
}
