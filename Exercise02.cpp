#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   // 1. Create a dynamic Rectangle type variable (pointer)
      Rectangle *R;
   // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
      R = new Rectangle(length , width);
   // 3. Create a dynamic Circle type variable (pointer)
      Circle *C;
   // 4. Create a dynamic Circle Object set radius that was input from the keyboard
      C = new Circle(radius);
   // 5. Call the display method of the Rectangle Object
      cout<< "Area of Rectangle :"<<R->calcArea()<<endl;
   // 6. Call the display method of the Circle Object
      cout<< "Area of Circle :"<<C->calcArea()<<endl;
   // 7. Delete the Rectangle Object from memory
      delete R;
   // 8. Delete the Circle Object from memory
      delete C;
  
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
