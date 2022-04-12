#include"../../include/Operator/Operator.hpp"
//region list
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
            else{
                if(last == head){
                    //one element
                    last = new node<L>;
                    last->data = data;
                    last->next = NULL;
                    head->next = last;
                }
                else{
                    //more than one element
                    node<L>* insdata = new node<L>;
                    insdata->data = data;
                    insdata->next = NULL;
                    last->next = insdata;
                    last = insdata;
                }
            }
        }

        L get(int index){
            if(index == 0){
                return this->head->data;
            }
            else{
                node<L>* curr = this->head;
                for(int i = 0; i<index; ++i){
                    curr = curr->next;
                }
                return curr->data;
            }
        }

        L operator[] (int index){
            return get(index);
        }
};

//endregion list

//region Operator
Operator::Operator(){
    m_isBusy = false;
    m_schedule = new LinkedList<ScheduleItem>;
}
void Operator::AddToSchedule(ScheduleItem newItem){
    this->m_schedule->add(newItem);
}
//endregion Operator
