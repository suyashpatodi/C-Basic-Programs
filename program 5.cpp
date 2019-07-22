#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int sum=n;
	for(int i=1;i<n-1;i++)
	{
		sum=sum*(n-i);
	}
	cout<<sum;
}
