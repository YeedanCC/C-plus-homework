#include<fstream>
#include<iostream>
using namespace std;
int main()
{int a[20];//20������
 cout<<"enter 20 numbers:"<<endl;
 ofstream outfile_1("f1.dat",ios::out);//�����ļ������󣬴򿪴����ļ���f1.dat��
 if(!outfile_1)//�����ʧ�ܣ�����ֵ0
 {cerr<<"open error"<<endl;
  exit(1);}
 for(int i=0;i<10;i++)
 {cin>>a[i];//����
 outfile_1<<a[i]<<endl;}//���ļ��������
 outfile_1.close();
 ofstream outfile_2("f2.dat",ios::out);//�����ļ������󣬴򿪴����ļ���f2.dat��
 if(!outfile_2)
 {cerr<<"open error"<<endl;
  exit(1);}
 for(int i=10;i<20;i++)
 {cin>>a[i];
 outfile_2<<a[i]<<endl;}
 outfile_2.close();
 return 0;
}