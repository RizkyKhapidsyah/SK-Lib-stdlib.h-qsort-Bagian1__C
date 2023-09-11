#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int values[] = { 40, 10, 100, 90, 20, 25 };

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    qsort(values, 6, sizeof(int), compare);

    for (n = 0; n < 6; n++) {
        printf("%d ", values[n]);
    }

    _getch();
    return 0;
}