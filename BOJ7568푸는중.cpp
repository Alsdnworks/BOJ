#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;


int inputN;
dch rankArray[50][50];
class dch {
public:
    dch() {
        rank = NULL;
    }
    int rank;
    int w = 0;
    int h = 0;
    int order;
    ~dch() {};
};



void brute(dch test) {
    // 50등i부터 1등i까지--
    for (i = 50; i >= 0; i--) {
        //1등null 일때첫삽입(init)
        if (rankArray[0][0] == NULL)
            rankArray[0][0] = test;
        //삽입된적없는 i를 찾아 --
        if (rankArray[i - 1][0] == NULL)
            continue;
        else {
            //덩치가 비슷하면 넣어주기
            if (test.h > rankArray[i][0].h xor test.w > rankArray[i][0].w) {
                //삽입된i, 빈공간찾아(insert)
                for (int j = 0; j < 50; j++) {
                    if (rankArray[i][j] == NULL) {
                        rankArray[i][j] = test;
                        break;
                    }
                }
            }
            //앞과 덩치가크면 바꾸기(sawp)
            else if (test.h > rankArray[i - 1][0].h && test.w > rankArray[i - 1][0].w) {

            }
            else


        }
    }
}
j = 0;
while (rankArray[i][j] == nullptr && rankArray[i - 1][j] == nullptr) {
    swap(rankArray[i][j], rankArray[i - 1][j]);
    j++;
}
int main() {
    scanf("%d", &inputN);
    for (int i = 0; i < inputN; i++) {
        dch* newdch = new dch;
        scanf("%d %d", newdch->h, newdch->w);
        newdch->order = i;
    }
    for (int i = 0; i < inputN; i++) {

        brute(input[i]);
    }
}