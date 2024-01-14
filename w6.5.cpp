#include <iostream>
using namespace std;
float vowel();
int c=0;
int main(){
   c= vowel();
   cout<<c<<endl;

    
}
float vowel(){
    
    char arr[]={'a','e','i','o','u'};
    string charecter;
    cout<<"enter the character"<<endl;
    cin>>charecter;
    for(int i=0; i<=4; i++){
        
        for(int j=0;j<=4; j++){
           if(charecter[i] == arr[j]){
               c=1;
           }
        }   
    }
    return c;
}