#pragma once
#include <iostream>
using std::cout;
using std::endl;

template<typename T>
class DNode {
public:
	T info;
	DNode* prev; //адреса попереднього вузла
	DNode* next;  //адреса наступного вузла

	DNode(T value) { info = value; next=prev = nullptr; }
	void showNode() {
		cout << "INFO: " << info << endl;
		cout<< "\tPREV: " << prev << endl;
		cout<< "\tNEXT: " << next << endl;
	}
};


template <typename T>
class DList {
	DNode<T>* head;
	DNode<T>* current;
public:
	DList() { head = current = nullptr; }

	void push_back(T value) {
		DNode<T>* el = new DNode<T>(value);

		if (head == nullptr) {
			head = current = el;
		}
		else {
			current->next = el;
			el->prev = current;

			current = el;
		}
	}

	void showList() {
		DNode<T>* p = head;
		while (p != nullptr) {
			cout << p->info << " ";
			p = p->next;
		}
		cout << endl;
	}
};
