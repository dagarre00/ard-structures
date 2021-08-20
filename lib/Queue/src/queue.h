#ifndef QUEUE
#define QUEUE

template <class t>
class Queue
{
private:
    int front_index;
    int rear_index;
    t* list;
    int size;
    int free_slots;
public:
    Queue(int size);
    bool queue(t value);
    t deQueue();
    int freeSlots();
};

#endif