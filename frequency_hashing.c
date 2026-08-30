#include <stdio.h>
#define M 100

int main() {
    int a[100], h[M]={0}, n, i, k;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        k=a[i]%M;
        h[k]++;
    }

    printf("Frequency:\n");
    for(i=0;i<M;i++)
        if(h[i])
            printf("%d : %d\n",i,h[i]);

    return 0;
}
