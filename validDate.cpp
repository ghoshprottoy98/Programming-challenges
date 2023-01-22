#include<iostream>
using namespace std;

int main(){
  
  int day,month,year;
  
  cout<<"Enter the date (Day Month Year) : \n";
  
  cin>>day>>month>>year;
  
  if(1000 <= year <= 3000)
       {
         if((month==1 || month==3 || month==5|| month==7|| month==8||month==10||month==12) && day>0 && day<=31)
         cout<<"It is valid";
         else 
     if(month==4 || month==6 || month==9|| month==11 && day>0 && day<=30)
            cout<<"It is Valid";
         else
            if(month==2)
               {
               if((year%400==0 || (year%100!=0 && year%4==0)) && day>0 && day<=29)
                 cout<<"It is Valide";
               else if(day>0 && day<=28)
                  cout<<"It is Valid";
               else
                  cout<<"It is Invalid";
               }
         else
               cout<<"It is Invalid";
      }
    else
        cout<<"It is Invalid";
  
  return 0;
}
