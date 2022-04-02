
class Operator{
    private: 
        bool m_isBusy;
        Schedule m_schedule;
    
    public:
        Operator();
        void OpenLock();
        void CloseLock();
        void MoveLock(int Direction);
        void EditSchedule();
};

class Schedule{
    private:
        int m_numberOfItems; // currentNumber of boats
        
    public:

};