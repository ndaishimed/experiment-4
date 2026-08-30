#include <stdio.h>
#define M 101

int main() {
    int a[100], h[M]={0}, n, T, i, x, c=0;

    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&T);

    for(i=0;i<n;i++) {
        x=T-a[i];
        if(h[(x%M+M)%M]) {
            printf("Pair: %d %d",x,a[i]);
            c=1;
            break;
        }
        h[(a[i]%M+M)%M]=1;
    }

    if(!c) printf("No pair found");
    return 0;
}
