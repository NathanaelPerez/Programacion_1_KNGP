#include <iostream>

using namespace std;
int digitos ( int n);

int main ()
{
  int n = 10;
  digitos(10);
return 0;
}

int digitos (int n)
{
if (n < 0)
return 0;

else
{ 
 cout << n << endl;
 digitos(n-1);
}

}