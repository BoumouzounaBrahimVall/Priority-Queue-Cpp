
#ifndef PRIORITY_QUEUE_ITEM_H
#define PRIORITY_QUEUE_ITEM_H

#include <bits/stdc++.h>
using namespace std;

template<class T>
class  item  {
public:
    item();
    item(int,T);
    int priority{};
    T _item_;

    friend ostream &operator<<(ostream &out,item i){
            // p :priority , v : value
        out<<"(P"<<i.priority<<",V="<<i._item_<<")";
        return out;
    }
    bool operator==( item f) const{return  (this->priority==f.priority) ;}
    bool operator>(item f) const {return  (this->priority>f.priority);}
    bool operator<(item f) const {return  (this->priority<f.priority);}
    bool operator!=(item f) const {return  (this->priority!=f.priority);}

};

#endif //PRIORITY_QUEUE_ITEM_H
