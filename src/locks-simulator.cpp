#include<iostream>
#include"../include/Operator/Operator.hpp"


int main(void){


    Operator op;
    ScheduleItem item(6, 30);

    op.AddToSchedule(item);

    std::cout << item.GetArrivalTime() << std::endl;
    
    return 0;
}