#pragma once

class ForwardList
{
private:
	Node* head;
	Node* tail;
public:
	ForwardList() : head(nullptr), tail(nullptr) {}
	void push_back(int value);
	void push_front(int value);
	void insert_after(Node* before, int value);
	void print();
	void clear();
};
class Node
{
public:
	int value;
	Node* next;
	Node() : value(0), next(nullptr) {}
	Node(int value) : value(value), next(nullptr) {}
};
