#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node {
public:
	node() { next = nullptr; }
	node(int el, node* ptr = 0) { info = el; next = ptr; }
	~node() {};
	int info; node* next;
};

class Stack {
private :
	node* head, * bottom;
public:
	Stack() { head = bottom = 0; }
	~Stack() {};
	void push(int element);
	int pop();
	int size();
	bool empty();
	int top();
};

void Stack::push(int element) {
	if (head == NULL)
		head = bottom=new node(element);
	else {
		head->next = new node(element);
		head = head->next;
	}
}
int Stack::pop() {
	int el;
	if (head == NULL) {
		return -1;
	}
	el = head->info;
	if (head == bottom) {
		delete head;
		head = NULL;
	}
	else {
		node* tmp;
		for (tmp = bottom; tmp->next != head; tmp = tmp->next);
		delete head;
		head = tmp;
		head->next = nullptr;
	}
	return el;
}
int Stack::size() {
	node* tmp;
	int size=1;
	if (head == NULL) return 0;
	for (tmp = bottom; tmp->next != NULL; tmp = tmp->next) {
		if (tmp == nullptr) break;
		size++;
	}
	
	return size;
}
bool Stack::empty() {
	if (head == NULL)
		return true;
	else return false;
}
int Stack::top() {
	if (head == NULL) 
		return -1;
	return (head->info);
}

int main() {
	int rep, argu=0;
	Stack Stack;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++) {
		argu = 0;
		char command[50];
		scanf("%s\0", &command);

		if (strcmp(command, "pop") == 0) {
			argu=Stack.pop();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "size") == 0) {
			argu = Stack.size();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "empty") == 0) {
			argu=(int)Stack.empty();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "top") == 0) {
			argu = Stack.top();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "push") == 0){
			scanf("%d", &argu);
			Stack.push(argu);
			continue;
		}
	}
	return 0;
}