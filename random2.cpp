#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
        int num;
        srand(time(0));
        num=rand()%100;
        int entry;
        int ans;
        int term = 1;
        while(term != 4){
                
                cout<<"enter your entry"<<endl;
                cin>>entry;
                ans=num-entry;
                if(ans < 0){
                  cout<<"your number is grater"<<endl;
                }
                else if(ans > 0){
                       cout<<"your number is lesser"<<endl; 
                }
                else if(ans == 0){
                        cout<<"guess is correct"<<endl;
                }
                else if(term == 3 && ans != 0){
                    cout<<"you loss"<<endl;
                }
                
                term++;
        }
}