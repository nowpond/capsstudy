#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int x;
    /*while (x<=100) {
      if (x%3==0)
        printf("%d ", x);
      ++x;
    }*/

    for (x = 1; x <= 100; ++x) {
        if (x % 3 == 0)
            printf("%d ", x);
    }
    return 0;
}