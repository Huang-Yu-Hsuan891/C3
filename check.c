#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i, j, k1, m; 
    int n, krc;
    int **G = NULL;
    int Glenrow = krc;
    int Glencolumn = n;

    FILE *fpr1;
    fpr1=fopen("generator1.txt","r");
    n = 9872;
    krc = 4936;
    printf("column = %d\n", n);
    printf("row = %d\n", krc);
    Glenrow = krc;
    Glencolumn = n;
    G = (int **)malloc(Glenrow * sizeof(int *));
    for (i = 0; i < Glenrow; i++) G[i] = (int *)malloc(Glencolumn * sizeof(int));
    for (i = 0; i < Glenrow; i++) {
        m = 0;
        for (j = 0; j < Glencolumn; j++) {
            fscanf(fpr1,"%d",&G[i][j]);
            //if (G[i][j] == 1) printf("%d ", j);
            if (G[i][j] == 1 && m == 0) {
                printf("i = %d; j = %d\n",i,j);
                m++;
            }
        }
        printf("\n");
    }
    printf("yes");
    // for CODE part
    fclose(fpr1);
}