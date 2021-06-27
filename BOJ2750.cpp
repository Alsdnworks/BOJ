#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stack>

using namespace std;
int nums[1003];

void QS(int init,int rep) {
    if (init >= rep) return; 
    int pivot = init;
    int store = pivot + 1;
    int rightmost = rep;
    while (store <= rightmost){
        while (store <= rep&&nums[store] >= nums[pivot]) 
            store++;
    while (rightmost > init&&nums[rightmost] <= nums[pivot])
        rightmost--;
    if (store > rightmost) 
        swap(nums[pivot], nums[rightmost]);
    else swap(nums[store], nums[rightmost]); 
}
    QS(init, rightmost - 1);
    QS(rightmost+1, rep);
}

int main() {
    int rep;
    stack<int>rev;
    scanf("%d", &rep);
        for (int i = 0; i < rep; i++)
            scanf("%d", &nums[i]);
        QS(0,rep-1);
        for (int i = 0; i < rep; i++)
            rev.push(nums[i]);       
        while (rev.empty() == 0) {
            printf("%d\n", rev.top());
            rev.pop();
        }
}
