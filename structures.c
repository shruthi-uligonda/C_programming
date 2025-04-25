#include<stdio.h>
struct chocolate
{
    char chocolate[20];
    float fat,cholosterol,sodium,pottasium,protein;
};
int main()
{
    struct chocolate c[10];
    int n,i,j=1,know;
    float choco1,choco2,choco3,choco4,choco5,choco6,choco7,choco8,choco9,choco10;
    int fat1,cholo1,sodium1,potta1,pro1;
    printf("\nEnter the number of chocolates:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the Name of chocolate,fats, cholosterol, sodium, pottasium and proteins in the chocolate %d:\n",i);
        scanf("%s %f %f %f %f %f",c[i].chocolate,&c[i].fat,&c[i].cholosterol,&c[i].sodium,&c[i].pottasium,&c[i].protein);
    }
    #include<stdio.h>
struct chocolate
{
    char chocolate[20];
    float fat,cholosterol,sodium,pottasium,protein;
};
int main()
{
    struct chocolate c[10];
    int n,i,j=1,know;
    float choco1,choco2,choco3,choco4,choco5,choco6,choco7,choco8,choco9,choco10;
    int fat1,cholo1,sodium1,potta1,pro1;
    printf("\nEnter the number of chocolates:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the Name of chocolate,fats, cholosterol, sodium, pottasium and proteins in the chocolate %d:\n",i);
        scanf("%s %f %f %f %f %f",c[i].chocolate,&c[i].fat,&c[i].cholosterol,&c[i].sodium,&c[i].pottasium,&c[i].protein);
    }
    for(i=1;i<=n;i++)
    {
        printf("\nChocoloate name:%s",c[i].chocolate);
        printf("\nFats in chocolate:%.1f",c[i].fat);
        printf("\nCholosterol in chocolate:%.1f",c[i].cholosterol);
        printf("\nSodium in chocolate:%.1f",c[i].sodium);
        printf("\nPottasium in chocolate:%.1f",c[i].pottasium);
        printf("\nProtein in chocolate:%.1f\n",c[i].protein);
    }
    printf("\nEnter 1 to know high fats and 2 for low fats among %d chocolates",n);
    scanf("%d",&fat1);
    switch(fat1)
    {
        case 1: 
        {
            choco1=c[0].fat;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].fat>choco1)
                {
                    choco1=c[i].fat;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has highest fats: i.e:%.1f\n",j,c[j].chocolate,choco1);
        }
        break;
        case 2: 
        {
            choco6=c[1].fat;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].fat<choco6)
                {
                    choco6=c[i].fat;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has lowest fats: i.e:%.1f\n",j,c[j].chocolate,choco6);
        }
        break;
         }
    printf("*");
    printf("\nEnter 1 know high cholosterol or 2 for low cholosterol among %d chocolates",n);
    scanf("%d",&cholo1);
    switch(cholo1)
    {
        case 1:
        {
            choco2=c[1].cholosterol;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].cholosterol>choco2)
                {
                    choco2=c[i].cholosterol;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has highest cholosterol: i.e:%.1f\n",j,c[j].chocolate,choco2);
        } 
        break;
         case 2:
        {
            choco7=c[1].cholosterol;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].cholosterol<choco7)
                { 
                    choco7=c[i].cholosterol;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has lowest cholosterol: i.e:%.1f\n",j,c[j].chocolate,choco7);
        }
        break;
    }
    printf("*");
    printf("\nEnter 1 know to high sodium or 2 for low sodium amoung %d chocolates",n);
    scanf("%d",&sodium1);
    switch(sodium1)
    {
        case 1:
        {
            choco3=c[1].sodium;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].sodium>choco3)
                {
                    choco3=c[i].sodium;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has highest sodium: i.e:%.1f\n",j,c[j].chocolate,choco3);
        }
        break;
        case 2:
        {
            choco8=c[1].sodium;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].sodium<choco8)
                {
                    choco8=c[i].sodium;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has lowest sodium: i.e:%.1f\n",j,c[j].chocolate,choco8);
        }
        break;
    }
    printf("*");
    printf("\nEnter 1 know high pottasium or 2 for low pottaosium amoung %d chocolates:",n);
    scanf("%d",&potta1);
    switch(potta1)
    {
        case 1:
        {
            choco4=c[1].pottasium;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].pottasium>choco4)
                {
                    choco4=c[i].pottasium;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has highest pottasium: i.e:%.1f\n",j,c[j].chocolate,choco4);
        }
        break;
        case 2:
        {
            choco9=c[1].pottasium;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].pottasium<choco9)
                {
                    choco9=c[i].pottasium;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has lowest pottasium: i.e:%.1f\n",j,c[j].chocolate,choco9);
        }
        break;
    }
    printf("*");
    printf("\nEnter 1 to know high protein or 2 for low protein among %d chocolate",n);
    scanf("%d",&pro1);
    switch(pro1)
    {
        case 1:
        {
            choco5=c[1].protein;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].protein>choco5)
                {
                    choco5=c[i].protein;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has highest protein: i.e:%.1f\n",j,c[j].chocolate,choco5);
        }
        break;
         case 2:
        {
            choco10=c[1].protein;
            j=1;
            for(i=1;i<=n;i++)
            {
                if(c[i].protein<choco10)
                {
                    choco10=c[i].protein;
                    j=i;
                }
            }
            printf("\nThe chocolate %d (%s) has lowest protein: i.e:%.1f\n",j,c[j].chocolate,choco10);
        }
        break;
    }
    printf("\n*THANK YOU");
    return 0;
}
