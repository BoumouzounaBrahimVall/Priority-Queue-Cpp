
#include "Item.h"


template<class T>
item<T>::item()=default;

template<class T>
item<T>::item(int p, T v) {
    priority=p;
    _item_=v;
}
