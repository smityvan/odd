#include<iostream>
#include<stdlib.h>
using namespace std;
int ht[10],status[10]={0};
int checknext(int n)
{
	for(int i=n;i<10;i++)
	if(status[i]==0)
	return i;
	for(int i=0;i<n;i++)
	if(status[i]==0)
	return i;
	return -2;
}
void insert(int n)
{
	if(status[n%10]==0)
	{
		ht[n%10]=n;
		status[n%10]=1;
	}
	else
	{
		int index=checknext(n%10);
		if(index==-2)
		{
			cout<<"Hash map full !!";
			exit(0);
		}
		else
		{
			ht[index]=n;
			status[index]=1;
		}
	}
}
void display()
{
	cout<<"\n\n\t\t\tAddress\t\t\tValue\n";
	for(int i=0;i<10;i++)
		cout<<"\t\t\t"<<i<<"\t\t\t"<<ht[i]<<endl;
	cout<<"\n\n";
}
int main()
{
	int temp,opt;
	while(1)
	{
		cout<<"Enter 1 to insert \n      2 to show hash table\n      3 to exit"<<endl;
		cin>>opt;
		switch(opt)
		{
			case 1 : cout<<"enter the key"<<endl;
					 cin>>temp;
					 insert(temp); break;
			case 2 : display(); break;
			default: exit(0);
		}
	}
	return 0;
}
