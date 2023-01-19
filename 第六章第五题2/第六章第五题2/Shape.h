#include<iostream>
using namespace std;
class Shape//类声明
{public:
	virtual void printArea()=0;//构造纯虚函数
};
class circle: public Shape//cirle是Shape类的共用派生
{public:
circle(float r):radius(r){}//构造函数
	void printArea(){cout<<3.14159*radius*radius<<endl;}//定义计算圆面积虚函数

protected:
	float radius;//半径
};
class square: public Shape//square是Shape类的共用派生
{public:
square(float l):length(l){}//构造函数
	void printArea(){cout<<l*l<<endl;}//定义计算圆面积虚函数

protected:
	float length;//半径
};
class rectangle:public Shape//rectangle是Shape类的共用派生
{public:
rectangle(float x1=0,float y1=0):x(x1),y(y1){}//构造函数
	void printArea(){cout<<x*y<<endl;}//定义计算矩形面积虚函数

protected:
	float x;//长
	float y;//宽
};
class trapezoid:public Shape//trapezoid是Shape类的共用派生
{public:
trapezoid(float a=0,float b=0,float c=0):a(a1),b(b1),c(c1)){}//构造函数
	void printArea(){cout<<x*y<<endl;}//定义计算矩形面积虚函数

protected:
	float a;
	float b;
	float c;
};
class triangle:public Shape//triangle是Shape类的共用派生
{public:
triangle(float hig=0,float len=0):h(hig),l(len){}//构造函数
	void printArea(){cout<<0.5*l*h<<endl;}//定义计算三角形面积虚函数

private:
	float h;//高
	float l;//底
};