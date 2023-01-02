

#include "Priority_Queue.h"

template<class T>
Priority_Queue<T>::Priority_Queue() = default;
template<class T>
void Priority_Queue<T>::push(T value,int priority) {
        Q.insert({priority,value});
}

template<class T>
void Priority_Queue<T>::pop() {
    if(!Q.empty())
    {
        Q.erase(Q.begin());
    }
}
template<class T>
int Priority_Queue<T>::size() {
    return Q.size();
}