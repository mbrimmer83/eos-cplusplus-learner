#include <iostream>
#include <vector>
#include <algorithm>
// #include <boost/lambda/lambda.hpp>

// STL Standard Template Library https://en.wikipedia.org/wiki/Standard_Template_Library
// Containers
// Iterators
// Algorithms
// Functions

using namespace std;

int main(){
 vector<int> vectorOfNumbers = {1,2,3,4};

 
 for(int i = 0; i < vectorOfNumbers.size(); i++) {
  cout << vectorOfNumbers[i] << " ";
 }
 cout << endl;
 
 // Push 1000 to back of the vector
 vectorOfNumbers.push_back(1000);

 // Safer for loop
 // auto keyword wiil infere type
 for(auto number: vectorOfNumbers) {
  cout << number << " ";
  }
  cout << endl;

// Learn boost library
// for_each(vectorOfNumbers.begin(), vectorOfNumbers.end(), cout << boost::lambda::_1 << " ");
// cout << endl;

// Using lambda function
for_each(vectorOfNumbers.begin(), vectorOfNumbers.end(), [](int number) { cout << number << " "; });
cout << endl;

try{
  vectorOfNumbers.at(100);
}catch(std::out_of_range& ex) {
  cerr <<ex.what() << endl;
}
}