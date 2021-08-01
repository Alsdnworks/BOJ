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

class Deque {
private :
	node* head, * bottom;
public:
	Deque() { head = bottom = 0; }
	~Deque() {};
	void push_back(int element);
	void push_front(int element);
	int pop_front();
	int pop_back();
	int size();
	bool empty();
	int front();
	int back();
};
void Deque::push_front(int element) {
	if (head == NULL)
		head = bottom = new node(element);
	else {
		head->next = new node(element);
		head = head->next;
	}
}
int Deque::pop_front() {
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
void Deque::push_back(int element) {
	if (head == NULL)
		head = bottom=new node(element);
	else {
		node* newnode = new node(element);
		newnode->next = bottom;
		bottom = newnode;
	}
}
int Deque::pop_back() {
	int el;
	if (bottom == NULL) {
		return -1;
	}
	el = bottom->info;
	if (head == bottom) {
		delete head, bottom;
		bottom = head = NULL;
	}
	else {
		node* tmp=new node();
		tmp = bottom->next;
		delete bottom;
		bottom = tmp;
	}
	return el;
}
int Deque::size() {
	node* tmp;
	int size=1;
	if (head == NULL) return 0;
	for (tmp = bottom; tmp->next != NULL; tmp = tmp->next) {
		if (tmp == nullptr) break;
		size++;
	}
	return size;
}
bool Deque::empty() {
	if (head == NULL)
		return true;
	else return false;
}
int Deque::front() {
	if (head == NULL) 
		return -1;
	return (head->info);
}
int Deque::back() {
	if (bottom == NULL)
		return -1;
	return (bottom->info);
}

int main() {
	int rep, argu=0;
	Deque Deque;
	scanf("%d", &rep);
	for (int i = 0; i < rep; i++) {
		argu = 0;
		char command[50];
		scanf("%s\0", &command);

		if (strcmp(command, "pop_back") == 0) {
			argu=Deque.pop_back();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "pop_front") == 0) {
			argu = Deque.pop_front();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "size") == 0) {
			argu = Deque.size();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "empty") == 0) {
			argu=(int)Deque.empty();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "front") == 0) {
			argu = Deque.front();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "back") == 0) {
			argu = Deque.back();
			printf("%d\n", argu);
			continue;
		}
		if (strcmp(command, "push_front") == 0) {
			scanf("%d", &argu);
			Deque.push_front(argu);
			continue;
		}
		if (strcmp(command, "push_back") == 0){
			scanf("%d", &argu);
			Deque.push_back(argu);
			continue;
		}
	}
	return 0;
}