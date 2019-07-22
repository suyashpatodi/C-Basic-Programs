#include<iostream>
using namespace std;
int main()
{
	string str;
	int flag=1;
cout<<"Enter String:::";
cin>>str;
for(int i=0;i<str.length();i++)
{
	if(str[i]!=str[str.length()-i-1])
	{
		flag=0;
		break;
	}
}
if(flag==0)
	cout<<"Not Palindrome";
	else
	cout<<"Palindrome:";
}
