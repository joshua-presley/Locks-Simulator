#include<iostream>
#include"../include/Operator/Operator.hpp"

using namespace std;

int main(void){

    //create the operator
    Operator op;
    //test adding items to op schedule
    bool loop = true;
    int hour, minute;
    while(loop){
        cout << "Enter the hour, or -1 to end\n";
        cin >> hour;
        if(hour > 0){
            cout << "Enter the minute\n";
            cin >> minute;

            ScheduleItem item(hour, minute);
            op.AddToSchedule(item);
        }
        else{
            loop = false;
        }
    }
    
    return 0;
}