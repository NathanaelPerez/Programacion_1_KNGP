#include<iostream>

using namespace std;

int main ()
{
 
 int y = 10;
 int *ptr_y = nullptr;

ptr_y = &y;


cout << " Y es = " << y << endl;
cout << " &Y es = " << &y << endl;
cout << " Ptr_y es = " << ptr_y << endl;
cout << " &Ptr_y es = " << &ptr_y << endl;
cout << " valor *ptr_y es = " << *ptr_y << endl;

//EL apuntador hace referencia indirectamente al valor de la variable y  //

*ptr_y = 9 ;

cout << " valor *ptr_y es = " << *ptr_y << endl;


}