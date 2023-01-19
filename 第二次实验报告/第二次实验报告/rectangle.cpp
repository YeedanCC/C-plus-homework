#include<iostream>
#include"rectangle.h"
using namespace std;

istream & operator >>(istream & input,rectangle& r)//定义友元重载运算符“>>”函数
{input>>r.length>>r.width;
 return input;
}
 ostream & operator <<(ostream & output,rectangle &r)//定义友元重载运算符“<<”函数
 {output<<"length:"<<r.length<<"width:"<<r.width<<endl;
 return output;
 }