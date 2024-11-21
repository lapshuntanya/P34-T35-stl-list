#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace mylist {

	template<typename T>
	class Node {
	public:
		T info;
		Node* next;

		Node(T value) { info = value; next = nullptr; }
		void showNode() {
			cout << "INFO: " << info << "\tNEXT: " << next << endl;
		}
	};
}