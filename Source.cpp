#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int c,r;
int *p;
//Rows
cout<<"\nEnter Number of Rows:";
cin>>r;
p=new int[r];

//Columns
//cout<<"\nEnter Number of Columns:";
//cin>>c;
//p=new int[c];

for(int i=1;i<=r;i++)
{
cout<<"\nEnter Element"<<i<<":";
cin>>p[i];
}

cout<<"\nMatrix Is:";
for(int i=1;i<=r;i++)
{
//cout<<"\nEnter Element"<<i<<":";
	//cout<<endl;
	cout<<"\t\n"<<*(p+i)<<"";
}
getch();

}