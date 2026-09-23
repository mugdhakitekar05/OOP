#include<iostream>
using namespace std;
int fact(int p)
{
    int result=1,i;
    for(i=p;i>1;i--)
    {
        result=result*i;
    }
   
    return result;
}


int BinoCoef(int a,int b)
{
    return (fact(a)/(fact(b)*fact(a-b)));}


void printpascal(int l)
{
    for(int i=0;i<l;i++)
    {for(int j=0;j<=i;j++)
    {cout<<"\t"<<BinoCoef(i,j);}
    cout<<endl;}
    }




int main()
{
    cout<<"\nenter no. of rows of triangle";
    int r;
    cin>>r;
    printpascal(r);
    return 0;
}



