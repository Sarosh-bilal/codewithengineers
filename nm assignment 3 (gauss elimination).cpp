#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define SIZE 10

using namespace std;

int main()
{

float a[SIZE][SIZE],x[SIZE],ratio;
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

for(i=1;i<=n-1;i++)
{
	if(a[i][i]==0.0)
	{
		cout<<"Mathematical error"<<endl;
		exit(0);
			}
			for(j=i+1;j<=n;j++)
			{
				ratio= a[j][i]/a[i][i];
			for(k=1;k<=n+1;k++)
			{
				a[j][k]=a[j][k]- ratio*a[i][k];
			}
		}
	}
	
	x[n]=a[n][n+1]/a[n][n];
	
	for(i=n-1;i>=1;i--)
	{
		x[i]=a[i][n+1];
		for(j=i+1;j<=n;j++)
		{
			x[i]=x[i]-a[i][j]*x[j];
		}
		x[i]=x[i]/a[i][i];
	}
	
	cout<<"solution"<<endl;
	cout<<"x="<<x[1]<<endl;
	cout<<"y="<<x[2]<<endl;
	cout<<"z="<<x[3]<<endl;
}

