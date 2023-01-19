#include<iostream>
using namespace std;
class Time;//对Time类的提前声明
class Date //声明date类
{
	public:
		Date(int, int, int);
		void display(Time&);//display是成员函数，形参是Time类对象的引用
	private:
		int month;
		int day;
		int year;
};
class Time {
	public:
		Time(int, int, int);
		friend void Date::display(Time&);//声明Date中的display函数为本类
	private://友元函数的成员组成
		int hour;
		int minute;
		int sec;
};
Date::Date(int m, int d, int y) //定义类Time的构造函数
{
		month = m;
		day = d;
		year = y;
	}
void Date::display(Time &t)//Display的作用是输出时分秒，年月日
{
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
	cout << month <<"/" << day << "/" << year << endl;
}
Time::Time(int h, int m, int s) //类Time的构造函数
{
	hour = h;
	minute = m;
	sec = s;
}
int main()
{
	Time t1(10,13,56);
	Date d1(12, 25, 2004);
	d1.display(t1);
	return 0;}