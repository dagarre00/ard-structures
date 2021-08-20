#include <queue.h>

#define DEFAULT_SIZE 10

template <class t>
Queue<t>::Queue(int size){
    this->list = new t[size];
    this->front_index = 0;
    this->rear_index = 0;
    this->size = size;
    this->free_slots = size;
}

template <class t>
int Queue<t>::freeSlots() {
    return this->free_slots;
}

template <class t>
t Queue<t>::deQueue(){
    if(this->free_slots <= size){
        int value = this->list[this->front_index];
        if(this->front_index + 1 == this->size){
            this->front_index = 0;
        } else {
            this->front_index ++;
        }
        this->free_slots ++;
        return value;
    }
    else {
        return -1;
    }
}

template <class t>
bool Queue<t>::queue(t value) {
    if(this->free_slots >= 1){
        this->list[this->rear_index] = value;
        this->free_slots --;
        if((this->rear_index + 1) == this->size){
            this->rear_index = 0;
        } else {
            this->rear_index ++;
        }
        return true;
    } else {
        return false;
    }
}

template class Queue<float>;
template class Queue<int>;
template class Queue<char>;