#ifndef PRIORITY_QUEUE_PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_PRIORITY_QUEUE_H
#include "Item.cpp"

template<class T>
class Priority_Queue {

public:

    set<item<T>, greater<>> Q;
    void push(T, int);
    void pop();
    Priority_Queue();
    int size();
    friend ostream &operator<<(ostream &out,Priority_Queue &q){
        out<<"(p :priority , v : value)\n";
        set<item<int>,greater<>>::iterator itr;
        for(itr = q.Q.begin(); itr != q.Q.end(); itr++)
        {
            out<<*itr<<" ";
        }
        out<<endl;
        return out;
    }


};




#endif //PRIORITY_QUEUE_PRIORITY_QUEUE_H
