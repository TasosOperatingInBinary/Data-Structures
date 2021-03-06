#ifndef STACK_H
#define STACK_H

#define DEFAULT_STACK_SIZE 10

template <typename T,int STACK_SIZE>
class stack
{
    public:
        stack();
        ~stack();
        bool isEmpty() const;
        bool isFull() const;
        bool push(T pushedValue);
        bool pop(T &poppedValue);
    private:
        int top;
        int ARRAY_SIZE;//we use this variable to store how much
                       //space we have allocated so we can optimize
                       //the memory usage depending on the occupancy factor
                       //( n/|Array| ) where n is the elements that we really use
                       //and |Array| the memory space we have allocated which in our case is
                       //ARRAY_SIZE and we keep this factor ~>1/4 
        T*array; 
};
#endif