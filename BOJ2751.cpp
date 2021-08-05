#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
#include<algorithm>
//2751번: 수 정렬하기2
//sort함수사용
using namespace std;
vector <int> nums;
int main() {
    nums.reserve(1000000);
    int rep;
    int temp;
    scanf("%d", &rep);
    for (int i = 0; i < rep; i++) {
        scanf("%d", &temp);
        nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < rep; i++)
        printf("%d\n", nums[i]);
    return 0;
}