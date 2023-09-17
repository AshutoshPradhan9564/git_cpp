#include <iostream>
using namespace std;
struct date{
    int day,month,year;
    void display(), read();
    int validate();
};
struct date d;
int main()
{
    d.read();
    if(d.validate()==0){
        cout<<"Enter a Valid Date."<<endl;
    }
    else{
        d.display();
    }
}

void date::read(){
    cout<<"Enter the Day:";
    cin>>day;
    cout<<"Enter the Month:";
    cin>>month;
    cout<<"Enter the Year:";
    cin>>year;
}
int date::validate(){
    if(day<1 || month<1 || year<1 || day>31 || month>12){
        return 0;
    }
    if(month==2){               
        if(year%4==0){               
            if(day<=29){             
                return 1;            
            }                          //CONDITIION FOR LEAP YEAR
            else{                    
                return 0;            
            }                        
        }                            
        else if(day>28){             
            return 0;                
        }                            
    }                               
    if(month==4 || month==6 || month==9 || month==11){
        if(day>=31){
            return 0;
        }
        else{
            return 1;
        }
    }
    return 1;
    
}
void date::display(){
    switch(month){
        case 1:cout<<"January "<<day<<" "<<year<<endl;
        case 2:cout<<"February "<<day<<" "<<year<<endl;
        break;
        case 3:cout<<"March "<<day<<" "<<year<<endl;
        break;
        case 4:cout<<"April "<<day<<" "<<year<<endl;
        break;
        case 5:cout<<"May "<<day<<" "<<year<<endl;
        break;
        case 6:cout<<"June "<<day<<" "<<year<<endl;
        break;
        case 7:cout<<"July "<<day<<" "<<year<<endl;
        break;
        case 8:cout<<"August "<<day<<" "<<year<<endl;
        break;
        case 9:cout<<"September "<<day<<" "<<year<<endl;
        break;
        case 10:cout<<"October "<<day<<" "<<year<<endl;
        break;
        case 11:cout<<"November "<<day<<" "<<year<<endl;
        break;
        case 12:cout<<"December "<<day<<" "<<year<<endl;
        break;
    }
}