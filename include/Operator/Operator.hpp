#include<iostream>


//region List area
template<class L>
struct node{
    node<L>* next;
    L data;
};

template<class L>
class LinkedList{
    public:
        node<L>* head;
        node<L>* last;

        LinkedList<L>();
        void add(L data);
        L get(int index);
        L operator[] (int index);
};
//endregion List area


class ScheduleItem{
    private:
        int m_arrivalHour;
        int m_arrivalMinute;
    public:
        ScheduleItem(int arrivalHour, int arrivalMinute){
            m_arrivalHour = arrivalHour;
            m_arrivalMinute = arrivalMinute;
        }
        ScheduleItem() = default;
        //turn the hour values into one int for ease of comparison
        int GetArrivalTime(){
            return (m_arrivalHour * 100) + m_arrivalMinute;
        }

};
class Operator{
    private: 
        bool m_isBusy;
        LinkedList<ScheduleItem> * m_schedule;
    
    public:
        Operator();
        void OpenLock();
        void CloseLock();
        void MoveLock(int Direction);
        void AddToSchedule(ScheduleItem newItem);
        
};

