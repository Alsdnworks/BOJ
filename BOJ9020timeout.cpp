#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
using namespace std;
vector <int> output;
void gbTest(int test) {
	vector<int> temp;
	vector<int>pBuffer;
	int m_subIndex;int subIndex=10000;
	int m_output[2];
	bool* list = new bool[test + 1];
	for (int i = 2; i <= test; i++)
		list[i] = true;
	for (int i = 2; i * i <= test; i++) {
		if (list[i])
			for (int j = i * i; j <= test; j += i)
				list[j] = false;
	}
	for (int i = 2; i <= test; i++) {
		if (list[i] == true)
			temp.push_back(i);
	}
	for (int i = 0; i < temp.size(); i++) {
		for (int j = 0; j < temp.size(); j++) {
			if (test - temp[i] == temp[j]) {
				m_subIndex = abs(temp[i] - temp[j]);
				if (m_subIndex < subIndex) {
					subIndex = m_subIndex;
					m_output[0] = temp[i];
					m_output[1] = temp[j];
				}
			}
		}
	}
	output.push_back(m_output[0]);
	output.push_back(m_output[1]);
}
int main() {
	int test; int num;
	output.reserve(100);
	pBuffer.reserve(100);
	temp.reserve(100);
	scanf("%d", &test);
	for (int i = 0;i<test;i++) {
		scanf("%d", &num);
		gbTest(num);
	}
	for (int i = 0; i < output.size(); i+=2) {
		printf("%d %d\n", output[i], output[i + 1]);
	}
	return 0;
}