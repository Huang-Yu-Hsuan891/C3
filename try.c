#include <stdio.h>
#include <stdlib.h>
int main() {
    // for H1
    int n1, rc1;
    int e1;
    int N1, RC1;
    // for H2
    int n2, rc2;
    int e2;
    int N2, RC2;
    //for H3
    int n3, rc3;
    int e3;
    int N3, RC3;

    int i, j, m, k;

    int **H1Cmask;
    int H1Cmaskrow, H1Cmaskcolumn;
    int **H2Cmask;
    int H2Cmaskrow, H2Cmaskcolumn;
    int **H3Cmask;
    int H3Cmaskrow, H3Cmaskcolumn;
    int **H1C;
    int H1Crow, H1Ccolumn;
    int **H2C;
    int H2Crow, H2Ccolumn;
    int **H3C;
    int H3Crow, H3Ccolumn;


    int **H;
    int Hrow, Hcolumn;
    int **H1;
    int H1row, H1column;


    FILE *fpr;
    fpr = fopen("H1.txt", "r");
    fscanf(fpr,"%d",&e1);
    fscanf(fpr, "%d",&n1);
    fscanf(fpr, "%d",&rc1);
    fscanf(fpr, "%d",&RC1);
    fscanf(fpr, "%d",&N1);
    N1 = N1 * 2;
    H1Cmaskrow = RC1;
    H1Cmaskcolumn = N1;
    H1Cmask = (int **)malloc(H1Cmaskrow * sizeof(int *));
    for (i = 0; i < H1Cmaskrow; i++) H1Cmask[i] = (int *)malloc(H1Cmaskcolumn * sizeof(int));
    for (i = 0; i < RC1; i++) {
        for (j = 0; j < N1; j++) {
            fscanf(fpr, "%d", &H1Cmask[i][j]);
        }
    }
    fclose(fpr);

    FILE *fpr2;
    fpr2 = fopen("H2.txt", "r");
    fscanf(fpr2,"%d",&e2);
    printf("%d\n",e2);
    fscanf(fpr2, "%d",&n2);
    printf("%d\n",n2);
    fscanf(fpr2, "%d",&rc2);
    fscanf(fpr2, "%d",&RC2);
    fscanf(fpr2, "%d",&N2);
    N2 = N2 * 2;
    H2Cmaskrow = RC2;
    H2Cmaskcolumn = N2;
    H2Cmask = (int **)malloc(H2Cmaskrow * sizeof(int *));
    for (i = 0; i < H2Cmaskrow; i++) H2Cmask[i] = (int *)malloc(H2Cmaskcolumn * sizeof(int));
    for (i = 0; i < RC2; i++) {
        for (j =0; j < N2; j++) {
            fscanf(fpr2, "%d", &H2Cmask[i][j]);
            printf("%d", H2Cmask[i][j]);
        }
    }
    fclose(fpr2);
    return 0;
}