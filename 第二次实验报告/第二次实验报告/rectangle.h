#include<iostream>
using namespace std;
class rectangle//������
{public:
	friend istream& operator >>(istream&,rectangle&r);//������Ԫ�����������>>��
	friend ostream& operator <<(ostream&,rectangle&r);//������Ԫ�����������<<��
private:
	int length;
	int width;
};