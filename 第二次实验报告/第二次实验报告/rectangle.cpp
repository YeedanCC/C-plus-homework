#include<iostream>
#include"rectangle.h"
using namespace std;

istream & operator >>(istream & input,rectangle& r)//������Ԫ�����������>>������
{input>>r.length>>r.width;
 return input;
}
 ostream & operator <<(ostream & output,rectangle &r)//������Ԫ�����������<<������
 {output<<"length:"<<r.length<<"width:"<<r.width<<endl;
 return output;
 }