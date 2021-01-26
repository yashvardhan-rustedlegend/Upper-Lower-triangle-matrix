#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			//cout<<"a[i][j]=;
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
			{
				a[i][j]=0;
			}
		}
	}
	cout<<"New array is"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j==2)
			{
				cout<<a[i][j];
				cout<<"\n";
			}
			else
			{
				cout<<a[i][j];
			}
		}
	}
	return 0;
	
}
