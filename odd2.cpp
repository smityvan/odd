#include<iostream>
#include<fstream>
#include<string>
#include<string.h> 
using namespace std;
fstream fp;
class student
{
	public:
		char regd[11],name[16],phone[11];
		void unpack()
			{
				fp.get(regd,11);
				fp.get(name,16);
				fp.get(phone,11);
			}		
		void display()
		{
			cout<<"Registration Number = "<<regd<<"\nname = "<<name<<"\nphone = "<<phone<<endl;
		}
}s[10];
int main()
{
	fp.open("students.txt",ios::in);
	int i=0;
	while(!fp.eof())		
	s[i++].unpack();
	int n=i;i=0;
	while(i<n-1){		s[i++].display();		}
	fp.close();
	return 0;
}
