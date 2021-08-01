#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
class node {
public:
	node() { next = nullptr; }
	node(int el, node* ptr = 0) { info = el; next = ptr; }
	~node() {};
	int info; node* next;
};

class Queue {
private :
	node* head, * bottom;
public:
	Queue() { head = bottom = 0; }
	~Queue() {};
	void push(int element);
	int pop();
	int size();
	bool empty();
	int front();
	int back();
};

void Queue::push(int element) {
	if (head == NULL)
		head = bottom=new node(element);
	else {
		node* newnode = new node(element);
		newnode->next = bottom;
		bottom = newnode;
	}
}
int Queue::pop() {
	int el;
	if (head == NULL) {
		return -1;
	}
	el = head->info;
	if (head == bottom) {
		delete head, bottom;
		bottom = head = NULL;
	}
	else {
		node* tmp=new node();
		for (tmp = bottom; tmp->next != head; tmp = tmp->next);
		delete head;
		head = tmp;
		head->next = nullptr;
	}
	return el;
}
int Queue::size() {
	node* tmp;
	int size=1;
	if (head == NULL) return 0;
	for (tmp = bottom; tmp->next != NULL; tmp = tmp->next) {
		if (tmp == nullptr) break;
		size++;
	}
	return size;
}
bool Queue::empty() {
	if (head == NULL)
		return true;
	else return false;
}
int Queue::front() {
	if (head == NULL) 
		return -1;
	return (head->info);
}
int Queue::back() {
	if (bottom == NULL)
		return -1;
	return (bottom->info);
}

int main() {
	int rep, argu=0;
	Queue Queue;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++) {
		argu = 0;
		char command[50];
		scanf("%s\0", &command);

		if (strcmp(command, "pop") == 0) {
			argu=Queue.pop();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "size") == 0) {
			argu = Queue.size();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "empty") == 0) {
			argu=(int)Queue.empty();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "front") == 0) {
			argu = Queue.front();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "back") == 0) {
			argu = Queue.back();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "push") == 0){
			scanf("%d", &argu);
			Queue.push(argu);
			continue;
		}
	}
	return 0;
}