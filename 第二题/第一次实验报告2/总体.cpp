#include<iostream>
using namespace std;
class Time;//��Time�����ǰ����
class Date //����date��
{
	public:
		Date(int, int, int);
		void display(Time&);//display�ǳ�Ա�������β���Time����������
	private:
		int month;
		int day;
		int year;
};
class Time {
	public:
		Time(int, int, int);
		friend void Date::display(Time&);//����Date�е�display����Ϊ����
	private://��Ԫ�����ĳ�Ա���
		int hour;
		int minute;
		int sec;
};
Date::Date(int m, int d, int y) //������Time�Ĺ��캯��
{
		month = m;
		day = d;
		year = y;
	}
void Date::display(Time &t)//Display�����������ʱ���룬������
{
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
	cout << month <<"/" << day << "/" << year << endl;
}
Time::Time(int h, int m, int s) //��Time�Ĺ��캯��
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