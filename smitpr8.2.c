/*
 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
9   4
25 64
*/

#include<stdio.h>

void cube(int x, int y) {
    int a[x][y];
    int i, j;

    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            printf("a[%d][%d] => ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int *p;
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            a[i][j] = a[i][j] * a[i][j] * a[i][j];
            p = &a[i][j];
            printf("%d\n", *p);
        }
    }
}

int main() {
    int x,y;
    printf("Enter the length of row: ");
    scanf("%d", &x);
    printf("Enter the length of column: ");
    scanf("%d", &y);

    cube(x,y);

    return 0;
}
