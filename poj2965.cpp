#include <iostream>
using namespace std;

int handles[4][4]={0};

int main ()
{
   int step_num=0;
   for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
   {
     char ch;
     cin>>ch;
     if(ch=='+')   //����+ʱ��������λ������Ӧ���к���
     {
       handles[i][j]++;
       for(int k=0;k<4;k++)
       {
         handles[i][k]++;
         handles[k][j]++;
       }
     }
   }

   for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)   //��������
   {
     if(handles[i][j]%2)   //���Ϊ������step_num��һ
      step_num++;
   }
   cout<<step_num<<endl;    //���������
   for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
   {
     if(handles[i][j]%2)     //��������ĵ�λ��
      cout<<i+1<<' '<<j+1<<endl;
   }
}
