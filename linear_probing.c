#include <stdio.h>
#define M 10

int main() {
    int h[M], n, x, i, k;
    for(i=0;i<M;i++) h[i]=-1;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++) {
        scanf("%d",&x);
        k=x%M;
        while(h[k]!=-1)
            k=(k+1)%M;
        h[k]=x;
    }

    printf("Hash Table:\n");
    for(i=0;i<M;i++)
        printf("%d : %d\n",i,h[i]);

    return 0;
}
