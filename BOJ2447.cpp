#include <iostream>

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