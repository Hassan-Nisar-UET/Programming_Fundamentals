#include <iostream>
using namespace std;
int main(){
    float bgl;
    float ticket;
    float percent;
    int budget;
    cout<<"enter your budget"<<endl;
    cin>>budget;
    string catagory;
    cout<<"enter the catagory of ticket"<<endl;
    cin>>catagory;
    int range;
    cout<<"enter the range of football fans"<<endl;
    cin>>range;
    if(catagory == "normal" ){
            if(range >=1 && range <=4){
                percent=(budget*75)/100;
                percent=budget-percent;
                ticket = 249.99*range;
                bgl=percent-ticket;
                
                 if(bgl > 0 ){
                    cout<<"yes you have "<<bgl<<"levas left"<<endl;
                }   else{
                    bgl=bgl*-1;
                    cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                }
            }
                
        
        
        else if(range >=5 && range <=9){
                percent=(budget*60)/100;
                percent=budget-percent;
                ticket = 249.99*range;
                bgl=percent-ticket;
                
                 if(bgl > 0 ){
                    cout<<"yes you have "<<bgl<<"levas left"<<endl;
                }
                else{
                    bgl=bgl*-1;
                    cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                }
            }   
        
            
                else if(range >=10 && range <=24){
                        percent=(budget*50)/100;
                        percent=budget-percent;
                        ticket = 249.99*range;
                        bgl=percent-ticket;
                        
                     if(bgl > 0 ){
                        cout<<"yes you have "<<bgl<<"levas left"<<endl;
                    }
                    else{
                        bgl=bgl*-1;
                        cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                    }
                }
                 else if(range >=25 && range <50){
                        percent=(budget*40)/100;
                        percent=budget-percent;
                        ticket = 249.99*range;
                        bgl=percent-ticket;
                        
                    if(bgl > 0 ){
                        cout<<"yes you have "<<bgl<<"levas left"<<endl;
                    }
                    else{
                        bgl=bgl*-1;
                        cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                    }
                }
                else if(range > 50){
                        percent=(budget*25)/100;
                        percent=budget-percent;
                        ticket = 249.99*range;
                        bgl=percent-ticket;
                        
                    if(bgl > 0 ){
                        cout<<"yes you have "<<bgl<<"levas left"<<endl;
                    }
                    else{
                        bgl=bgl*-1;
                        cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                    }
                }
        
    }    
    if(catagory == "vip" ){
            if(range >=1 && range <=4){
                percent=(budget*75)/100;
                percent=budget-percent;
                ticket = 499.99*range;
                bgl=percent-ticket;
                
                 if(bgl > 0 ){
                    cout<<"yes you have "<<bgl<<"levas left"<<endl;
                }   else{
                    bgl=bgl*-1;
                    cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                }
            }
                
        
        
        else if(range >=5 && range <=9){
                percent=(budget*60)/100;
                percent=budget-percent;
                ticket = 499.99*range;
                bgl=percent-ticket;
                
                 if(bgl > 0 ){
                    cout<<"yes you have "<<bgl<<"levas left"<<endl;
                }
                else{
                    bgl=bgl*-1;
                    cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                }
            }   
        
            
                else if(range >=10 && range <=24){
                        percent=(budget*50)/100;
                        percent=budget-percent;
                        ticket = 499.99*range;
                        bgl=percent-ticket;
                        
                     if(bgl > 0 ){
                        cout<<"yes you have "<<bgl<<"levas left"<<endl;
                    }
                    else{
                        bgl=bgl*-1;
                        cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                    }
                }
                 else if(range >=25 && range <= 49){
                        percent=(budget*40)/100;
                        percent=budget-percent;
                        ticket = 499.99*range;
                        bgl=percent-ticket;
                        
                    if(bgl > 0 ){
                        cout<<"yes you have "<<bgl<<"levas left"<<endl;
                    }
                    else{
                        bgl=bgl*-1;
                        cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                    }
                }
                  else if(range > 50){
                        percent=(budget*25)/100;
                        percent=budget-percent;
                        ticket = 499.99*range;
                        bgl=percent-ticket;
                        
                    if(bgl > 0 ){
                        cout<<"yes you have "<<bgl<<"levas left"<<endl;
                    }
                    else{
                        bgl=bgl*-1;
                        cout<<"not enough money you need "<<bgl<<"  levas"<<endl;
                    }
                }
        
    }    
}
