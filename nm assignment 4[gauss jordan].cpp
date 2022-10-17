#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
	float a[10][10],x[10],b;
	int i,j,k,n;
	cout<< setprecision(3)<< fixed;
	n=3;
	
	a[1][1]=1;
	a[1][2]=1;
	a[1][3]=2;
	a[1][4]=4;
	a[2][1]=2;
	a[2][2]=-1;
	a[2][3]=3;
	a[2][4]=9;
	a[3][1]=3;
	a[3][2]=-1;
	a[3][3]=-1;
	a[3][4]=2;
	
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				b=a[j][i]/a[i][i];
				for(k=1;k<=n+1;k++)
				{
					a[j][k]=a[j][k]-b*a[i][k];
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		x[i]=a[i][n+1]/a[i][i];
	}
	cout<<"solution"<<endl;
	cout<<"x="<<x[1]<<endl;
	cout<<"y="<<x[2]<<endl;
	cout<<"z="<<x[3]<<endl;
}
