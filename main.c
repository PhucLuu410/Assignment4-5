#include<stdio.h>
#include<string.h>

enum type
{
    CLOTHING,
    FOOTWEAR,
    ELECTRONICS
};

union detail
{
    int size;
    float weight;
};

struct product
{
    char name[20];
    float price;
    enum type type1;
    union detail detail1;
};

int main()
{
    int number,i;
    struct product product[i];
    union detail detail[i];
    printf("Enter the number of products:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        printf("Enter information for product %d:\n",i);
        printf("Name:");
        scanf("%s",&product[i].name);
        printf("Price:");
        scanf("%f",&product[i].price);
        printf("Type (0: Clothing, 1: Footwear, 2: Electronics):");
        scanf("%d",&product[i].type1);
        if(product[i].type1==CLOTHING || product[i].type1==FOOTWEAR)
        {
            printf("Size:");
            scanf("%d",detail[i].size);
        }
        else if(product[i].type1==ELECTRONICS)
        {
            printf("Weight:");
            scanf("%f",detail[i].weight);
        }        
    }
    printf("Enter the name of the product to retrieve information:");
    char search[20];
    scanf("%s",&search);
    for(int a=1;a<=i;a++)
    {
        if(strcmp(search,product[a].name)==0)
        {
            printf("Product Information:\n");
            printf("Name:%s\n",product[a].name);
            printf("Price:%0.2f\n",product[a].price);
            if(product[a].type1==0)
            {
                printf("Type:CLOTHING");
            }
            else if(product[a].type1==1)
            {
                printf("Type:FOOTWEAR");
            }
            else if(product[a].type1==2)
            {
                printf("Type:ELECTRONICS");
            }
            break;
        }
        else
        {
            printf("Not found");
            break;
        }
    }
    

}