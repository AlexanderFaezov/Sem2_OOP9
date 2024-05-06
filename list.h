#pragma once
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* next = nullptr;
	Node* prev = nullptr;
};

class List {
private:
	int size;
	Node* head = nullptr;
	Node* tail = nullptr;
public:
	void pushFront(int data);
	void pushBack(int data);
	List(int size);
	List(int size, int data);
	List(const List& list);
	~List();
	int popBack();
	int popFront();
	int front();
	int back();
	bool is_empty();
	List& operator =(const List& list);
	int& operator [] (int index);
	int operator () ();
	List operator * (List& list);
	int operator+(int h);
	friend istream& operator >> (istream& is, const List& list);
	friend ostream& operator << (ostream& os, List& list);
};
