#include<iostream>
#include"Shape.h"
using namespace std;
int main()
{circle c(3.0);
 rectangle r(6.0,6.0);
 triangle t(9.0,9.0);
 c.printArea();
 r.printArea();
 t.printArea();
 return 0;
};