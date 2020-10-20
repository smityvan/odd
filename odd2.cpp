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
			cout<<"Registration Number : "<<regd<<"\nName : "<<name<<"\nPhone Number : "<<phone<<endl<<endl;
		}
}s[10];
int main()
{
	fp.open("student.txt",ios::in);
	int i=0,n=0;
	while(fp)		
		s[i++].unpack();
	while(n<i-1){
		cout<<"Student "<<n+1<<":\n";
	 	s[n++].display();}
	fp.close();
	return 0;
}
