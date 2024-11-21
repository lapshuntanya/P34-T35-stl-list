#include "MyList.h"

int main()
{
    using namespace mylist;

    //7 4 9 2

    Node<int> first(7); //info =7, next =nullptr

    Node<int> second(4); // info=4, next=nullptr
    first.next = &second;

    Node<int> third(9); //info=9, next=nullptr
    second.next = &third;

    Node<int> fourth(2); //info=2, next=nullptr
    third.next = &fourth;

    //Обхід списку
    Node<int>* p = &first;
    while (p != nullptr) {
        cout << p->info << endl;
        p->showNode();
        p = p->next;
    }
}

