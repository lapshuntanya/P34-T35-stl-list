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