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

        LinkedList<L>(){
            head = NULL;
            last = NULL;
        }

        void add(L data){
            if(!head){
                //no elements in list
                head = new node<L>;
                head->data = data;
                head->next = NULL;
                last = head;
            }
        }
};
//endregion List area


class ScheduleItem{
    private:
        int m_arrivalHour;
        int m_arrivalMinute;
        ScheduleItem * nextItem;
        ScheduleItem * previousItem;
    public:
        ScheduleItem(int arrivalHour, int arrivalMinute){
            m_arrivalHour = arrivalHour;
            m_arrivalMinute = arrivalMinute;
        }
        //turn the hour values into one int for ease of comparison
        int GetArrivalTime(){
            return (m_arrivalHour * 100) + m_arrivalMinute;
        }

};
class Operator{
    private: 
        bool m_isBusy;
        ScheduleItem * m_schedule;
    
    public:
        Operator();
        void OpenLock();
        void CloseLock();
        void MoveLock(int Direction);
        void EditSchedule();
};

