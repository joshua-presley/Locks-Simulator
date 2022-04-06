#include"../../include/Operator/Operator.hpp"

//region Operator
Operator::Operator(){
    m_isBusy = false;
    m_schedule = new LinkedList<ScheduleItem>;
}
void Operator::AddToSchedule(ScheduleItem newItem){
    this->m_schedule->add(newItem);
}
//endregion Operator
