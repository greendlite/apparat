#pragma once
#include<iostream>
using namespace std;
class Queue
{
private:
	struct Node {
		int data;
		Node* next;
	};
	Node* head, * tail;
public:
	Queue() {
		head = NULL;
		tail = NULL;
	}
	bool empty() {
		return head == NULL;
	}
	void add(int value) {
		if (empty()) {
			head = new Node;
			head->data = value;
			head->next = NULL;
			tail = head;
		}
		else {
			tail->next = new Node;
			tail = tail->next;
			tail->data = value;
			tail->next = NULL;
		}
	}

	int del() {
		if (empty()) {
			cout << "Queue is empty" << endl;
			return 0;
		}
		else {
			int d = head->data;
			Node* tmp = head;
			head = head->next;
			delete(tmp);
			return d;
		}
	}
	void nullQueue() {
		Node* tmp;
		while (!empty()) {
			tmp = head;
			head = head->next;
			delete(tmp);
		}
	}
	void print() {
		if (empty()) {
			cout << "Queue is empty" << endl;
		}
		else {
			Node* cur = head;
			while (cur != nullptr) {
				cout << cur->data << " ";
				cur = cur->next;
			}
			cout << endl;
		}
	}
};

