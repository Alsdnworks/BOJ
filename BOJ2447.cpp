#include <iostream>
//2447번: 별찍기-10
//mainmenuset(이하 a)을통해 수를 입력받아 init_quad로 a*a의 사각형을 초기화한다.->buffer[][]2차원 배열 형태로 저장
//del에서 전달받은 a/3의 값 만큼 제거해나간다 point_X, point_Y(a/3)를 시작점으로 a/3만큼 삭제하고 del(a/3)의 다음 삭제대상으로 재귀한다
//a/3이 1보다 작으면 리턴후 사각형을 출력한다.
using namespace std;
const char* buffer[2190][2190];
int Q_size;

void Init_quad(int sqrtofQ) {
    int y = 0;
    int x = 0;
    for (y = 0; y < sqrtofQ; y++) {
        for (x = 0; x < sqrtofQ; x++) {
            buffer[y][x] = "*";
        }
        buffer[y][x + 1] = "\n";
    }
}

void del(int num) {
    if (num < 1)return;
    for (int point_Y = num; point_Y < Q_size; point_Y += (3 * num)) {
        for (int point_X = num; point_X < Q_size; point_X += (3 * num)) {
            for (int point_y = 0; point_y < num; point_y++) {
                for (int point_x = 0; point_x < num; point_x++) {
                    buffer[point_Y + point_y][point_X + point_x] = " ";
                }
            }
        }
    }

    del(num / 3);
}

int main() {
    int mainMenuSet;
    int i = 0;
    int j = 0;
    cin >> mainMenuSet;
    Q_size = mainMenuSet;
    Init_quad(mainMenuSet);
    del(mainMenuSet / 3);
    for (i = 0; i < mainMenuSet; i++) {
        for (j = 0; j < mainMenuSet; j++) {
            printf("%c", *buffer[i][j]);
        }
        printf("%c", *buffer[i][j + 1]);
    }
    return 0;
}