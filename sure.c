#include <stdio.h>
#include <stdlib.h>

int main() {
    int **G = NULL;
    int Glenrow = 4936;
    int Glencolumn = 9872;
    int krc,n;
    int i,j;
    FILE *fpr1;
    fpr1=fopen("generator1.txt","r");
    //fscanf(fpr1,"%d",&krc);
    //fscanf(fpr1,"%d",&n);
    n = 9872;
    krc = 4936;
    printf("column = %d\n", n);
    printf("row = %d\n", krc);
    Glenrow = krc;
    Glencolumn = n;
    G = (int **)malloc(Glenrow * sizeof(int *));
    for (i = 0; i < Glenrow; i++) G[i] = (int *)malloc(Glencolumn * sizeof(int));
    for (i = 0; i < Glenrow; i++) {
        for (j = 0; j < Glencolumn; j++) {
            fscanf(fpr1,"%d",&G[i][j]);
            //if (G[i][j] == 1) printf("%d ", j);
            //if (G[i][j] == 1 && j == i)printf("i = %d; j = %d",i,j);
        }
        //printf("\n");
    }
    printf("yes");
    int num = 0;
    int q=0;
    int q1=0;
    for (i = 0; i < Glencolumn; i++) {
        num = 0;
        for (j = 0; j < Glenrow; j++) {
            if (G[j][i] == 1) {
                num++;
                //printf("%d ", i+1);
                //break;
            }
            
            //if (G[i][j] == 1 && j == i)printf("i = %d; j = %d",i,j);
        }
        for (j = 0; j < Glenrow; j++) {
            if (G[j][i] == 1 && num == 1) {
                printf("%d ", i+1);
                if (i < 5553) q++;
                else q1++;
                break;
            }
        }
        printf("\n");
    }
    printf("q=%d",q);
    printf("q1=%d",q1);
    fclose(fpr1);
    for (i = 0; i < krc; i++) free(G[i]);
    free(G);

    return 0;

}