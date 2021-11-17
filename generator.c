#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 9872, rc = 4936; 
    int **G = NULL;
    int Glenrow = rc;
    int Glencolumn = n;
    int i,j;
    FILE *fpr1;
    fpr1=fopen("generator1.txt","r");
    n = 9872;
    rc = 4936;
    printf("column = %d\n", n);
    printf("row = %d\n", rc);
    Glenrow = rc;
    Glencolumn = n;
    G = (int **)malloc(Glenrow * sizeof(int *));
    for (i = 0; i < Glenrow; i++) G[i] = (int *)malloc(Glencolumn * sizeof(int));
    for (i = 0; i < Glenrow; i++) {
        for (j = 0; j < Glencolumn; j++) {
            fscanf(fpr1,"%d",&G[i][j]);
            //if (G[i][j] == 1) printf("%d ", j);
        }
        //printf("\n");
    }
    // for CODE part
    fclose(fpr1);
    FILE *outfp;
    outfp = fopen("generator.txt","w");
    for (i = 0; i < rc; i++) {
        for (j =0; j  <n; j++) {
            if (G[i][j] == 1) fprintf(outfp,"%d ", j+1);
        }
         fprintf(outfp,"\n");
    }
    fclose(outfp);
    for (i = 0; i < rc; i++) free(G[i]);
    free(G);
    return 0;

}