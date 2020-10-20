#include<iostream>
#include<string>
#include<fstream>
using namespace std;
fstream fp;
class student{
	public:
		string name,regd,phone;
		void pack();
}temp;
void student :: pack()
{
	cout<<"Register Number : "<<endl;
	cin>>regd;
	cout<<"Name : "<<endl;
	cin>>name;
	cout<<"Phone Number : "<<endl;
	cin>>phone;
	string packer=regd+'|'+name+'|'+phone+'|'+'#';
	fp<<packer;
}
int main()
{
	fp.open("student.txt",ios::out);
	int n,i=0;
	cout<<"Enter Number of Students : "<<endl;
	cin>>n;
	while(i<n) {  temp.pack();	i++;	}
	fp.close();
	cout<<"\n\nContent in file: \n\n";
	fp.open("student.txt",ios::in);
	cout<<fp.rdbuf();
	fp.close();
	return 0;
}
