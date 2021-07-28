#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;

class node {
public:
	node() { les = nullptr; gre = nullptr; }
	node(int el, node* ptr = nullptr) { info = el; les = ptr; gre = ptr; }
	~node() {};
	int info; node* les; node* gre;
};

class Heap {
private:
	node* root; node* iter;
public:
	Heap() { root = nullptr; iter = nullptr; };
	~Heap() {};
	void insert(int element);
	bool search(int element);
};

void Heap::insert(int element) {//노드가없다면 루트생성, 포인터를 통해 루트부터 맥스힙으로 탐색후 리프노드서 삽입
	if (root == nullptr) { root = new node(element); return; }
	iter = root;
	while (1) {
		if (element > iter->info) {
			if (iter->gre == nullptr) {
				iter->gre = new node(element);
				break;
			}
			iter = iter->gre;
		}
		else if (element < iter->info) {
			if (iter->les == nullptr) {
				iter->les = new node(element);
				break;
			}
			iter = iter->les;
		}
		else return;//겹치는 숫자 무시
	}
}

//루트부터 좌우탐색,
bool Heap::search(int element) {
	if (root == nullptr) {
		return false;
	}
	iter = root;
	while (iter != nullptr) {
		if (element == iter->info) return true;
		if (element > iter->info) iter = iter->gre;
		else if (element < iter->info) iter = iter->les;
	}
	return false;
}

int main() {
	Heap Heap;
	bool buffer[100005] = { false, };
	int i, n, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		Heap.insert(t);
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		buffer[i] = Heap.search(t);
	}
	for (i = 0; i < n; i++)
		buffer[i] == true ? printf("1\n") : printf("0\n");
	return 0;
}