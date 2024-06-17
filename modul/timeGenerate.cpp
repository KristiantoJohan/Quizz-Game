#include <iostream>
#include <Windows.h>

int main(int argc, char const *argv[]) {
    float time = 12;
    while(time >= 0) {
        printf("\rTIME LEFT : %8.f",time);
        Sleep(1000);
        time--;

    }

    return 0;
}
