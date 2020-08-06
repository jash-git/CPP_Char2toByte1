#include <iostream>

using namespace std;

int main()
{
    char data[16]={'5','7','1','3','1','1','3','d','6','9','3','4','d','3','e','0'};
    int intdata[8]={0};
    int j=0;
    int a=0;
    int b=0;
    for(int i=(16-1);i>=0;i-=2)
    {
       a=data[i];
       b=data[i-1];
       if(a>=48&&a<=57)
       {
           a=a-48;
       }
       else
       {
           a=a-97+10;
       }
       if(b>=48&&b<=57)
       {
           b=b-48;
       }
       else
       {
           b=b-97+10;
       }
       intdata[j]=a+(b*16);
       cout <<intdata[j]<<",";
       j++;
    }
    cout <<endl;
    for(int i=0;i<16;i++)
    {
        cout << data[i];
    }
    cout <<endl;

    cout << "Hello world!" << endl;
    return 0;
}
