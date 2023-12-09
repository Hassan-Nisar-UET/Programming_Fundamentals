#include <iostream>
using namespace std;
int main(){
    int n,l,p;
    cout<<"enter the value of n"<<endl;
    cin>>n;
      int m;
    cout<<"enter the value of m"<<endl;
    cin>>m;
      int s;
    cout<<"enter the value of s"<<endl;
    cin>>s;
    while(m >= n){
        if(m%3==0 && m%2==0){
            
            if(m==s){
                break;
            }
            cout<<m<<" ";
        }
            
            m--;       }
    
}