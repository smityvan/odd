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
	cout<<"Enter the regd number"<<endl;
	cin>>regd;
	cout<<"Enter the name"<<endl;
	cin>>name;
	cout<<"Enter the phone number"<<endl;
	cin>>phone;
	string packer=regd+'|'+name+'|'+phone+'|'+'#';
	fp<<packer;
}
int main()
{
	fp.open("student.txt",ios::out);
	int n,i=0;
	cout<<"Enter the no.of records"<<endl;
	cin>>n;
	while(i<n) {  temp.pack();	i++;	}
	fp.close();
	cout<<"\n\nContent in file: \n\n";
	fp.open("student.txt",ios::in);
	cout<<fp.rdbuf();
	fp.close();
	return 0;
}
