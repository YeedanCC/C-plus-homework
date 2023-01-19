#include<fstream>
#include<iostream>
using namespace std;
int main()
{void get_from_file()
int a[20],;
ifstream infile("f2.dat",ios::in|ios::nocreate);//定义输入流文件，以输入方式打开磁盘文件f2.dat

for(int i=0;i<20;i++)//读入f2.dat的数据，并放在一个数组里
{outlile>>a[i]

}
int len;
int i=0;int j;int t;
for(i=0;i<len-1;i++) //冒泡法对数据排序
{for(j=0;j<len-i-1;j++)
{if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;}}}

for(int i=0;i<20;i++)//将排好序的数据再放回f2.dat中
{inlile>>a[i]

}
infile.close();//关闭文件

return 0;
}}