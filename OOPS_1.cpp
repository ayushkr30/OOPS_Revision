// Create a Class

#include <string>
class MyClass {   //the class
    public:       // access specifier
    int num;      //Attribute
    string myString;      //Attribute
};

//Create an Object 


int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.num = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;

  // Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  
}

