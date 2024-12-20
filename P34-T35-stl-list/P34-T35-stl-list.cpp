#include "MyList.h"
#include "DList.h"

int main()
{
    using namespace mylist;

    //7 4 9 2
   /* Node<int> first(7); //info =7, next =nullptr

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
    }*/

   /*
    MyList<int> a; //head=current = nullptr;
    a.push_back(7); //head=7, current=7
    a.push_back(4); //head=7, current=4
    a.push_back(9); //head=7, current=9
    a.push_back(2); //head=7, current=2
    a.showList();*/

    DList<int> b;
    b.push_back(7);
    b.push_back(4);
    b.push_back(9);
    b.push_back(2);

    b.showList(); // 7 4 9 2
    cout << "---------------\n";
    b.showReverseList(); // 2 9 4 7
    cout << "---------------\n";

    DNode<int>* user = b.search(2);
    if (user == nullptr)
        cout << "Not found!\n";
    else
        user->showNode();

}

