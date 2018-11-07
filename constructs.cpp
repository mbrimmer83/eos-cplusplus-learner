#include <iostream>

using namespace std;

struct ForLoopControl{
  int numberOfIterations;
  bool isGreaterThanTen;
};

bool parameterizedforLoop(int forLoopLength) {
  for(int i = 0; i < forLoopLength; i++){
    if(forLoopLength >= 10){
      return true;
    }
    return false;
  }
  
};

bool parameterizedforLoop(ForLoopControl fControl) {
  for(int i = 0; i < fControl.numberOfIterations; i++){
  }
  return fControl.isGreaterThanTen;
  
};

int main() {
  ForLoopControl fControl;
  fControl.numberOfIterations = 100;
  fControl.isGreaterThanTen = true;
  cout << parameterizedforLoop(fControl) << endl;
};