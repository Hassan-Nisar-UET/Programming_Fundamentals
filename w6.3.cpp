#include <iostream>
using namespace std;
void grades();
int main(){
    grades();
     


}
void grades(){
    int marks;
   cout<<"enter your marks"<<endl;
   cin>>marks;
   if(marks >=90 && marks <=100){
       cout<<"your grade is A"<<endl;
   }
   else if(marks >=86 && marks <=90){
       cout<<"your grade is a-"<<endl;
   }
    else if(marks >=81 && marks <=85){
       cout<<"your grade is b+"<<endl;
   }
    else if(marks >=76 && marks <=80){
       cout<<"your grade is b"<<endl;
   }
    else if(marks >=71 && marks <=75){
       cout<<"your grade is b-"<<endl;
   }
    else if(marks >=66 && marks <=70){
       cout<<"your grade is c+"<<endl;
   }
    else if(marks >=61 && marks <=65){
       cout<<"your grade is c"<<endl;
   }
    else if(marks >=56 && marks <=60){
       cout<<"your grade is c-"<<endl;
   }
    else if(marks >=51 && marks <=55){
       cout<<"your grade is d"<<endl;
   }
    else if(marks <= 50){
       cout<<"FAIL"<<endl;
   }
   
}