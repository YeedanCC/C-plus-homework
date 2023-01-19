#include<iostream>
using namespace std;
class Shape//������
{public:
	virtual void printArea()=0;//���촿�麯��
};
class circle: public Shape//cirle��Shape��Ĺ�������
{public:
circle(float r):radius(r){}//���캯��
	void printArea(){cout<<3.14159*radius*radius<<endl;}//�������Բ����麯��

protected:
	float radius;//�뾶
};
class square: public Shape//square��Shape��Ĺ�������
{public:
square(float l):length(l){}//���캯��
	void printArea(){cout<<l*l<<endl;}//�������Բ����麯��

protected:
	float length;//�뾶
};
class rectangle:public Shape//rectangle��Shape��Ĺ�������
{public:
rectangle(float x1=0,float y1=0):x(x1),y(y1){}//���캯��
	void printArea(){cout<<x*y<<endl;}//��������������麯��

protected:
	float x;//��
	float y;//��
};
class trapezoid:public Shape//trapezoid��Shape��Ĺ�������
{public:
trapezoid(float a=0,float b=0,float c=0):a(a1),b(b1),c(c1)){}//���캯��
	void printArea(){cout<<x*y<<endl;}//��������������麯��

protected:
	float a;
	float b;
	float c;
};
class triangle:public Shape//triangle��Shape��Ĺ�������
{public:
triangle(float hig=0,float len=0):h(hig),l(len){}//���캯��
	void printArea(){cout<<0.5*l*h<<endl;}//�����������������麯��

private:
	float h;//��
	float l;//��
};