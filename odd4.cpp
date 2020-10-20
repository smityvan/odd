#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Keys : ";
    cin>>n;
    int i,a[n]={0},key,h;
    cout<<"Enter keys : ";
    for(i=0;i<n;i++)
    {
        cin>>key;
        h=key%10;
        while(a[h]!=0){
            h++;
            if(h==n)
                h = 0;
        }
        a[h] = key;
    }
    cout<<"Hash Table :"<<endl;
    for( i=0; i<n; i+=1){
        cout<<i<<"   "<<a[i]<<endl;
    }
    return 0;
}
