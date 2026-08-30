#include <stdio.h>
#define M 10

int main() {
    int h[M], n, x, i, k, j;
    for(i=0;i<M;i++) h[i]=-1;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++) {
        scanf("%d",&x);
        k=x%M;
        j=0;
        while(h[(k+j*j)%M]!=-1)
            j++;
        h[(k+j*j)%M]=x;
    }

    printf("Hash Table:\n");
    for(i=0;i<M;i++)
        printf("%d : %d\n",i,h[i]);

    return 0;
}
