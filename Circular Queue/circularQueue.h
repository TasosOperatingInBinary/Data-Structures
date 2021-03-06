#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#define DEFAULT_CIRCULAR_QUEUE_SIZE 10

template <typename T,int CIRCULAR_QUEUE_SIZE>
class circularQueue
{
    public:
        circularQueue();
        ~circularQueue();
        bool isEmpty() const;
        bool isFull() const;
        bool enqueue(T enqueuedValue);
        bool dequeue(T &dequeuedValue);
    private:
        T*array;
        int start;
        int finish;
        int ARRAY_SIZE;//we use this variable to store how much
                       //space we have allocated so we can optimize
                       //the memory usage depending on the occupancy factor
                       //( n/|Array| ) where n is the elements that we really use
                       //and |Array| the memory space we have allocated which in our case is
                       //ARRAY_SIZE and we keep this factor ~>1/4 
};
#endif