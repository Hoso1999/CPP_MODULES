#include "Pony.hpp"

int main()
{
    Pony p;
    Pony p1 = p.ponyOnTheStack();
    Pony *p2 = p.ponyOnTheHeap();
    p.print();
    p1.print();
    p2->print();

    delete p2;
    return 0;
}