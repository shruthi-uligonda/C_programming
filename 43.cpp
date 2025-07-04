#include <stdio.h>

int main() {
    int age1, age2, age3;
    
    printf("  ");
    scanf("%d",&age1);
    printf(" ");
    scanf("%d",&age2);
    printf(" ");
    scanf("%d", &age3);

    if (age1 == age2 || age1 == age3 || age2 == age3) {
        printf("Invalid input, ages of kids should not be same, try again!!!");
        return 0;
    }

    int sum = age1 + age2 + age3;

    if (sum < 20) {
        if (sum % 2 == 0) {
            printf("Kids will get Rs.1000 worth gift\n");
        } else {
            printf("Kids will get only Rs.200 worth gift");
        }
    } else {
        if (sum % 2 != 0) {
            printf("Kids will get Rs.5000 worth gift");
        } else {
            printf("Kids will get only Rs.200 worth gift");
        }
    }

    return 0;
}

