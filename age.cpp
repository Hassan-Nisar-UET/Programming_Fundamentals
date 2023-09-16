#include <iostream>
using namespace std;
int main(){
   int age;
   cout<<"enter your age"<<endl;
   cin>>age;
   int number;
   cout<<"enter your number"<<endl;
   cin>>number;
   if(number<0){
       cout<<"your number is neagitive"<<endl;
   }
   else if(number > age){
       cout<<"your number is greater than the age"<<endl;

   }
   else if(number < age){
       cout<<"your number is less than the age"<<endl;
   }
}