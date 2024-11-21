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
	~DList() {
		DNode<T>* p = head;
		DNode<T>* pdel = head;

		while (p != nullptr) {
			cout << "del: " << p->info << endl;
			pdel = p;

			p = p->next;
			if (pdel != nullptr) {
				delete pdel;
			}
		}
	}

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
			//p->showNode();
			p = p->next;
		}
		cout << endl;
	}

	void showReverseList() {
		DNode<T>* p = current;
		while (p != nullptr) {
			cout << p->info << " ";
			//p->showNode();
			p = p->prev;
		}
		cout << endl;
	}

	DNode<T>* search(T value) {
		//Знаходження вузла з зазначенним value
		//Якщо такого вузла немає, то повернути nullptr

		DNode<T>* p = head;
		while (p != nullptr) {
			if (p->info == value)
				return p;
			 
			p = p->next;
		}
		return nullptr;
	}
};
