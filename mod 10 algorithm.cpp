#include<iostream>
using namespace std;
int main()
{
	int a[14],b[14];
	long long n = 0;
	int i, j, temp;
	int k=0;
	int sum=0;
	int sum1=0;
	int result, test;
	
	cout<<"enter the Credit Card Numbers"<<endl;
	cin>>n;
	
	for( int i=13; i>=0;i--)
	{
		a[i]=n%10;
		
		
		n=n/10;
	}
	
	for (int i=0; i<13; i++)
	{ if(i%2==0)
	 {
		
	
		b[i]=2*a[i];
	 }
	else
	{
		b[i]=a[i];
	}
		if(b[i]>9)
		{
			while(b[i] !=0)
			{
				sum=sum+(b[i]%10);
				b[i]=b[i]/10;
			}
			b[i]=sum;
		}  
	cout<<b[i];
	} 
		

	for(int i=0;i<13;i++)
	{
sum1=sum1+b[i];
	}
	
	result=9*sum1;
	test=result%10;
	if(test==a[13])
	{
		cout<<"correct"<<endl;
		
	}
	else
		{
			cout<<"incorrect"<<endl;
		}  
		return 0;
	
}

