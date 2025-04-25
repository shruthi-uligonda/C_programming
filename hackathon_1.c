#include<stdio.h>
#include<string.h>

struct cow {
    int cow_id;
    char breed[20];
    int age, milk_production;
    char health_status[10];
} c[3];

int main() {
    int i, j, change1, change2, change3, cow_details;
    int change1_id, change1_age, change1_production, check_status;
    char change1_breed[20], change1_status[10];
    int change2_id, change2_age, change2_production;
    char change2_breed[20], change2_status[10];
    int change3_id, change3_age, change3_production, remove_cow;
    char change3_breed[20], change3_status[10];

    for (j = 1; j <= 3; j++) {
        printf("\nEnter the details of cow %d:\n", j);
        printf("Enter cow_id: ");
        scanf("%d", &c[j].cow_id);
        printf("Enter breed: ");
        scanf("%s", c[j].breed);
        printf("Enter age and milk_production: ");
        scanf("%d %d", &c[j].age, &c[j].milk_production);
        printf("Enter health status: ");
        scanf("%s", c[j].health_status);
    }

    for (j = 1; j <= 3; j++) {
        printf("****************************************\n");
        printf("The details of cow %d:\n", j);
        printf("COW_ID: %d\n", c[j].cow_id);
        printf("COW_BREED: %s\n", c[j].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[j].age, c[j].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[j].health_status);
    }

    printf("\nTotal Milk in a day: %d (litres)\n", c[1].milk_production + c[2].milk_production + c[3].milk_production);

    printf("\nEnter 1 to change the details of cow1:");
    printf("\nEnter 2 to change the details of cow2:");
    printf("\nEnter 3 to change the details of cow3:");
    scanf("%d", &cow_details);

    switch (cow_details) {
        case 1: {
            printf("\nEnter 1 to change cow id:");
            printf("\nEnter 2 to change cow breed:");
            printf("\nEnter 3 to change cow age:");
            printf("\nEnter 4 to change cow milk production:");
            printf("\nEnter 5 to change cow health status:");
            scanf("%d", &change1);

            switch (change1) {
                case 1:
                    printf("Enter new cow id: ");
                    scanf("%d", &change1_id);
                    c[1].cow_id = change1_id;
                    break;
                case 2:
                    printf("Enter new cow breed: ");
                    scanf("%s", change1_breed);
                    strcpy(c[1].breed, change1_breed);
                    break;
                case 3:
                    printf("Enter new cow age: ");
                    scanf("%d", &change1_age);
                    c[1].age = change1_age;
                    break;
                case 4:
                    printf("Enter new cow milk production: ");
                    scanf("%d", &change1_production);
                    c[1].milk_production = change1_production;
                    break;
                case 5:
                    printf("Enter new health status: ");
                    scanf("%s", change1_status);
                    strcpy(c[1].health_status, change1_status);
                    break;
            }

            printf("Updated details of cow1:\n");
            printf("COW_ID: %d\n", c[1].cow_id);
            printf("COW_BREED: %s\n", c[1].breed);
            printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[1].age, c[1].milk_production);
            printf("COW_HEALTH_STATUS: %s\n", c[1].health_status);
            break;
        }
        case 2:
{
    printf("\nEnter 1 to change cow id:");
    printf("\nEnter 2 to change cow breed:");
    printf("\nEnter 3 to change cow age:");
    printf("\nEnter 4 to change cow milk production:");
    printf("\nEnter 5 to change cow health status:");
    scanf("%d", &change2);
    switch (change2)
    {
    case 1:
    {
        printf("\nEnter the cow id (you want to change): ");
        scanf("%d", &change2_id);
        c[2].cow_id = change2_id;
        printf("\nThe details of 2nd cow\n");
        printf("COW_ID: %d\n", c[2].cow_id);
        printf("COW_BREED: %s\n", c[2].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[2].age, c[2].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[2].health_status);
        break;
    }
    case 2:
    {
        printf("\nEnter the cow breed (you want to change): ");
        scanf("%s", change2_breed);
        strcpy(c[2].breed, change2_breed);
        printf("\nThe details of 2nd cow\n");
        printf("COW_ID: %d\n", c[2].cow_id);
        printf("COW_BREED: %s\n", c[2].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[2].age, c[2].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[2].health_status);
        break;
    }
    case 3:
    {
        printf("\nEnter the cow age (you want to change): ");
        scanf("%d", &change2_age);
        c[2].age = change2_age;
        printf("\nThe details of 2nd cow\n");
        printf("COW_ID: %d\n", c[2].cow_id);
        printf("COW_BREED: %s\n", c[2].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[2].age, c[2].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[2].health_status);
        break;
    }
    case 4:
    {
        printf("\nEnter the cow milk production (you want to change): ");
        scanf("%d", &change2_production);
        c[2].milk_production = change2_production;
        printf("\nThe details of 2nd cow\n");
        printf("COW_ID: %d\n", c[2].cow_id);
        printf("COW_BREED: %s\n", c[2].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[2].age, c[2].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[2].health_status);
        break;
    }
    case 5:
    {
        printf("\nEnter the cow health status (you want to change): ");
        scanf("%s", change2_status);
        strcpy(c[2].health_status, change2_status);
        printf("\nThe details of 2nd cow\n");
        printf("COW_ID: %d\n", c[2].cow_id);
        printf("COW_BREED: %s\n", c[2].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[2].age, c[2].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[2].health_status);
        break;
    }
    }
    printf("\nMilk_in_day: %d (litres)\n", c[1].milk_production + c[2].milk_production + c[3].milk_production);
}
break;
     case 3:
{
    printf("\nEnter 1 to change cow id:");
    printf("\nEnter 2 to change cow breed:");
    printf("\nEnter 3 to change cow age:");
    printf("\nEnter 4 to change cow milk production:");
    printf("\nEnter 5 to change cow health status:");
    scanf("%d", &change3);
    switch (change3)
    {
    case 1:
    {
        printf("\nEnter the cow id (you want to change): ");
        scanf("%d", &change3_id);
        c[3].cow_id = change3_id;
        printf("\nThe details of 3rd cow\n");
        printf("COW_ID: %d\n", c[3].cow_id);
        printf("COW_BREED: %s\n", c[3].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[3].age, c[3].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[3].health_status);
        break;
    }
    case 2:
    {
        printf("\nEnter the cow breed (you want to change): ");
        scanf("%s", change3_breed);
        strcpy(c[3].breed, change3_breed);
        printf("\nThe details of 3rd cow\n");
        printf("COW_ID: %d\n", c[3].cow_id);
        printf("COW_BREED: %s\n", c[3].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[3].age, c[3].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[3].health_status);
        break;
    }
    case 3:
    {
        printf("\nEnter the cow age (you want to change): ");
        scanf("%d", &change3_age);
        c[3].age = change3_age;
        printf("\nThe details of 3rd cow\n");
        printf("COW_ID: %d\n", c[3].cow_id);
        printf("COW_BREED: %s\n", c[3].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[3].age, c[3].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[3].health_status);
        break;
    }
    case 4:
    {
        printf("\nEnter the cow milk production (you want to change): ");
        scanf("%d", &change3_production);
        c[3].milk_production = change3_production;
        printf("\nThe details of 3rd cow\n");
        printf("COW_ID: %d\n", c[3].cow_id);
        printf("COW_BREED: %s\n", c[3].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[3].age, c[3].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[3].health_status);
        break;
    }
    case 5:
    {
        printf("\nEnter the cow health status (you want to change): ");
        scanf("%s", change3_status);
        strcpy(c[3].health_status, change3_status);
        printf("\nThe details of 3rd cow\n");
        printf("COW_ID: %d\n", c[3].cow_id);
        printf("COW_BREED: %s\n", c[3].breed);
        printf("COW_AGE: %d\nCOW_MILK_PRODUCTION: %d\n", c[3].age, c[3].milk_production);
        printf("COW_HEALTH_STATUS: %s\n", c[3].health_status);
        break;
    }
    }
    printf("\nMilk_in_day: %d (litres)\n", c[1].milk_production + c[2].milk_production + c[3].milk_production);
}

    }
    printf("\nEnter 1 to check health status of 1st cow");
	printf("\nEnter 2 to check health status of 2nd cow");
	printf("\nEnter 3 to check health status of 3rd cow");
	scanf("%d",&check_status);
	switch(check_status)
	{
	case 1:
	{
		printf("\nHealth status of 1st cow:%s",c[1].health_status);
		break;
	}
	case 2:
	{
		printf("\nHealth status of 2nd cow:%s",c[2].health_status);
		break;
	}
	case 3:
	{
		printf("\nHealth status of 3rd cow:%s",c[3].health_status);
		break;
	}
	}
	printf("\nEnter 1 to remove 1st cow:");
	printf("\nEnter 2 to remove 2nd cow");
	printf("\nEnter 3 to remove 3rd cow");
	scanf("%d",&remove_cow);
	switch(remove_cow)
	{
	case 1:
	{
		printf("\nRemoved 1st cow");
		printf("COW_ID1:%d\n",c[2].cow_id);
		printf("COW_BREED1:%s\n",c[2].breed);
		printf("COW_AGe1:%d\nCOW_MILK_PRODUCTION1:%d\n",c[2].age,c[2].milk_production);
		printf("COW:HEALTH_STATUS1:%s\n",c[2].health_status);
		printf("\n");
		printf("COW_ID2:%d\n",c[3].cow_id);
		printf("COW_BREED2:%s\n",c[3].breed);
		printf("COW_AGe2:%d\nCOW_MILK_PRODUCTION2:%d\n",c[3].age,c[3].milk_production);
		printf("COW:HEALTH_STATUS2:%s\n",c[3].health_status);
	}
    break;
	case 2:
	{
		printf("\nRemoved 2nd cow");
		printf("COW_ID1:%d\n",c[1].cow_id);
		printf("COW_BREED1:%s\n",c[1].breed);
		printf("COW_AGe1:%d\nCOW_MILK_PRODUCTION1:%d\n",c[1].age,c[1].milk_production);
		printf("COW:HEALTH_STATUS1:%s\n",c[1].health_status);
		printf("\n");
		printf("COW_ID2:%d\n",c[3].cow_id);
		printf("COW_BREED2:%s\n",c[3].breed);
		printf("COW_AGe2:%d\nCOW_MILK_PRODUCTION2:%d\n",c[3].age,c[3].milk_production);
		printf("COW:HEALTH_STATUS2:%s\n",c[3].health_status);
		
	}
	break;
	case 3:
	{
		printf("\nRemoved 3rd cow");
		printf("COW_ID1:%d\n",c[1].cow_id);
		printf("COW_BREED1:%s\n",c[1].breed);
		printf("COW_AGe1:%d\nCOW_MILK_PRODUCTION1:%d\n",c[1].age,c[1].milk_production);
		printf("COW:HEALTH_STATUS1:%s\n",c[1].health_status);
		printf("\n");
		printf("COW_ID2:%d\n",c[2].cow_id);
		printf("COW_BREED2:%s\n",c[2].breed);
		printf("COW_AGe2:%d\nCOW_MILK_PRODUCTION2:%d\n",c[2].age,c[2].milk_production);
		printf("COW:HEALTH_STATUS2:%s\n",c[2].health_status);
	
	}
	break;
	}
	printf("\n**********Thank you***********");
}

