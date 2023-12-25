#include <iostream>
#include <string>
#include <limits>
using namespace std;
void convert24__12(int);
void convert12__24(int, string);
int main(){
    bool go= true;
    do
    {
        cout<<"Which system you want to convert to:   \n12:To convert to 12 \n24:To convert to 24   ";
       int system;
       cin>>system;
       int time;
       switch(system){
        case 12:
            
            cout<<"Enter time in 24: ";
            cin>>time;
            convert24__12(time);
            break;
        case 24:
           string dayNight;
           
           cout<<"Enter time:  ";
           cin>>time;
           cout <<"Enter PM or AM:  \n (Becarful with the case type it as in above)";
           cin.ignore(numeric_limits<streamsize>::max(), '\n'); //This line to clear buffer in the output
           getline(cin, dayNight);
           convert12__24(time, dayNight);
           break; 
       } 
       char choice;
       cout<<"Do you want to do this again:  \n y: yes \n n: no \n";
       cin>>choice;
       if (choice=='y')
       {
        go = true;
       } else{
        go = false;
       }
       
    
    } while (go==true);
    

    system("pause");
    return 0;
}

void convert24__12(int TIME){
    if (TIME>12){
        TIME-=12;
        cout<<"Time is  "<<TIME<<":00 PM \n";
    }  else {
        cout <<"Time is  "<<TIME<<":00 AM  \n" ;
        }
}

void convert12__24(int TIME, string DayOrNight){
    if (DayOrNight=="PM"){
        TIME+=12;
        cout<<"The time is "<<TIME<<":00 \n";

    } else if(DayOrNight=="AM") {
         cout<<"The Time is  "<<TIME<<":00  \n";
    }
}