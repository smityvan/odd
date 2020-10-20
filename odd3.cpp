#include<iostream>
#include<fstream>
#include<string>
using namespace std;
fstream fp;
int count1=-1,count2=-1;
class lists
{
	public:
		string l1[100],l2[100];
		void match()
			{
				cout<<"\n \n Output :: \n \n ";
				int i1=0,i2=0;
				while(i1<=count1&&i2<=count2)
				{
				if(l1[i1]==l2[i2])
				{
					cout<<l1[i1++]<<endl;
						i2++;
				}
				else if(l1[i1]<l2[i2])
					i1++;
					
				else if(l1[i1]>l2[i2])
					i2++;
				}
			}	
}list;	
int main()
{
	string name;
	fp.open("st1.txt",ios::in);
	while(fp)
	{
		getline(fp,name,'\n');
		list.l1[++count1]=name;
	}
	fp.close();
	fp.open("st2.txt",ios::in);
	while(fp)
	{
		getline(fp,name,'\n');
		list.l2[++count2]=name;
	}
	fp.close();
	list.match();
	return 0;
}
