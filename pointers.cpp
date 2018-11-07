#include <iostream>
#include <string>

using namespace std;

class Car{
public:
    int wheels;
    string engine;
    int doors;

    Car(int wheels, string engine, int doors){
      this->wheels = wheels;
      this->engine = engine;
      this->doors = doors;
    }

    friend std::ostream& operator<< (std::ostream& stream, const Car& car) {
      stream << "wheels: " << car.wheels << endl;
      stream << "engine: " << car.engine << endl;
      stream << "doors: " << car.doors << endl;
      cout << "............................" << endl;
      return stream;
    }

    string toString() {
      cout << "printing car: " << this << endl;
      cout << "wheels: " << wheels << endl;
      cout << "engine: " << engine << endl;
      cout << "doors: " << doors << endl;
      cout << "............................";
    }
};

int main() {
  // Pointer to memory
  Car* c = new Car(4, "v8", 2);
  
  Car a = Car(16, "v12", 4);
  
  cout << c << endl;
  cout << a << endl;
}