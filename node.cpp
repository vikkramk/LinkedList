/*Definitions of Node Class*/
#include "node.hpp"

/*Make a new node with the given data and next node*/
Node::Node(Student* data) {
	this->data = data;
}

/*Destroy this node and its data*/
Node::~Node() {
	delete data;
}

/*Get the pointer to the next node in the list*/
Node* Node::getNext() {
	return next;
}

/*Retrieve the data of the node*/
Student* Node::getData() {
	return data;
}

/*Set the next node in the list*/
Node* Node::setNext(Node* next) {
	Node* oldnext = next;
	this->next = next;
	return oldnext;
}
