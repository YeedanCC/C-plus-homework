#include<iostream>
using namespace std;
class rectangle//类声明
{public:
	friend istream& operator >>(istream&,rectangle&r);//声明友元重载运算符“>>”
	friend ostream& operator <<(ostream&,rectangle&r);//声明友元重载运算符“<<”
private:
	int length;
	int width;
};