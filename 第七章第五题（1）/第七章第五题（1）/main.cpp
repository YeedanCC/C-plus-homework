#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<strstream>
using namespace std;
class staff
{public:
staff(int num, char name[10],int age,double pay)
{num=num;
 stecpy(name,nam);
 age=age;
 pay=pay;
}
  int num;
  char name[10];
  int age;
  double pay;
}
int main()
{ int i,j;
staff first[5];
  staff sta[7]={staff s1(),staff s2(),staff s3(),staff s4(),staff s5()};

  for(i=0;i<4;i++)
  {
	  for(j=i+1;j<5;j++)
	  {if(sta[i].num>sta[j].num)
	    first[i]=sta[j];
	    sta[j]=sta[i];
		sta[i]=first[i];
	  }}
  int i,m,num;
    fstream iofile("staff.dat",ios::in|ios::out|ios::binary);
	if(!iofile)
  {cerr<<"open error"<<endl;
  }
  for(i=0;i<5;i++)
  {iofile.write((char*)&sta[i],sizeof(sta[i]));}
 for(i=5;i<7;i++)
  {cin>>sta[i].num>>sta[i].name>>sta[i].age>>sta[i].pay;}
 for(i=5;i<7;i++)
 {iofile.seekp(i*sizeof(sta[i]),ios::beg);//定位新成员位置
 iofile.write((char*)&sta[i],sizeof(sta[i]));}
 staff put[7];//将接收文件数据输出到显示屏
 for(i=0;i<7;i++)
 {
	 iofile.seekg(i*sizeof(sta[i]),ios::beg);//定位位置
	 iofile.read((char*)&put[i],sizeof(put[i]));//读入put对象数组中
	 cout<<put[i].num<<""<<put[i].name<<""<<put[i].age<<put[i].pay<<endl;
 }
  

 bool go=true;
 do{cout<<"你要查找的号码"<<endl;
    int b;
	bool yes=false;
	cin<<b;
	for(i=0;i<7;i++)
	{if(put[i].num==b)
	{yes=true;
	cout<<"你要找的成员是第"<<i+1<<"个员工"<<endl;
	cout<<put[i].num<<put[i].name<<put[i].age<<put[i].pay<<endl;
	cout<<"继续查找吗Y/N"<<endl;
	char c;
	cin<<c;
	if(c=='n'||c=='N')
	   go=flase;}}\
	   if(!yes)
	   {cout<<"无此人"<<endl;
        cout<<"继续查找吗Y/N"<<endl;
	char c;
	cin<<c;
	if(c=='n'||c=='N')
	   go=flase;
	   }
 }
 while(go);
 iofile.close();

}