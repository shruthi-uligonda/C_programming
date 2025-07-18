#include <stdio.h>
int main() {
   int n,i,bookStatus,damagedCount=0,partiallyDamagedCount=0,notDamagedCount=0; 
    printf(" ");
    scanf("%d",&n);
    printf(" \n");
    for (i = 0; i < n; i++) {
        scanf("%d",&bookStatus);
        if (bookStatus == 0) {
            damagedCount++;
        } else if (bookStatus == 1) {
            partiallyDamagedCount++;
        } else if (bookStatus == 2) {
            notDamagedCount++;
        } 
    }
    printf("Fully damaged count: %d\n", damagedCount);
    printf("Partially damaged count: %d\n", partiallyDamagedCount);
    printf("Not damaged count: %d\n", notDamagedCount);
    return 0;
}


