#include<fstream>
#include<iostream>
using namespace std;
int main()
{void get_from_file()
int a[20],;
ifstream infile("f2.dat",ios::in|ios::nocreate);//�����������ļ��������뷽ʽ�򿪴����ļ�f2.dat

for(int i=0;i<20;i++)//����f2.dat�����ݣ�������һ��������
{outlile>>a[i]

}
int len;
int i=0;int j;int t;
for(i=0;i<len-1;i++) //ð�ݷ�����������
{for(j=0;j<len-i-1;j++)
{if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;}}}

for(int i=0;i<20;i++)//���ź���������ٷŻ�f2.dat��
{inlile>>a[i]

}
infile.close();//�ر��ļ�

return 0;
}}