#include<fstream>
#include<iostream>
using namespace std;
int main()
{void get_from_file()
{char ch;
ifstream infile("f1.dat",ios::in|ios::nocreate);//定义输入流文件，以输入方式打开磁盘文件f1.dat
ofstream outfile("f2.dat");//定义输出流文件,以输出方式打开f2.dat
while(infile.get(ch))
{for(i=0;i<10;i++)
 {outfile.put(ch);
cout ch;}
cout endl;
infile.close();
outfile.close();
}}
int main()
{get_from_file();
return 0;
}