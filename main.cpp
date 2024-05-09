#include <iostream>
#include <list>

using namespace std;

int main() {
  int rateOffStatus = 0xf0f0ffff;
  cout << std::hex << rateOffStatus << endl;
  list<unsigned int> tankMeterRateOffStatus;
  rateOffStatus &= 0x3fffffff;
  cout << std::hex << rateOffStatus << endl;
  for (int i = 0; i < 31; i = i + 2) {
    if ((rateOffStatus >> i) & 0x3) {
      cout << std::hex << ((rateOffStatus >> i) & 0x3) << " " << std::dec << i
           << endl;
    }
  }
  return 0;
}
