#include<iostream>
#include"Shape.h"
using namespace std;
int main()
{circle c(3.0);
 rectangle r(6.0,6.0);
 triangle t(9.0,9.0);
 trapezoid tr(1.0,1.0,1.0);
 square s(1.0,1.0);
 float areas;
 Shape*c1=&c;
 Shape*r1=&r;
 Shape*t1=&t;
 Shape*tr1=&tr;
 Shape*s1=&s;
 areas=c1->printArea()+r1->printArea()+t1->printArea()+tr1->printAre()a+s1->printArea();
 cout<<areas<<endl;
 return 0;
};