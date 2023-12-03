#include<stdio.h>
int plndrm(char *ptr);
int stlen(char *tr);

int i;
int main()
{
    char str[50];
    printf("enter the string : ");
    scanf("%s",str);
    int p=plndrm(str);
    if(p==1)
    {
        printf("The String is pelendrome !!\n");
    }
    else
    {
        printf("The String is not pelendrome !!\n");
    }
}
int j=0;
int plndrm(char *ptr)
{
    int k=stlen(ptr);
    printf("%d",k);
    for(int j=0;j<k;j++)
    {
        printf("hi");
        if(*(ptr+j)!=*(ptr+k-j))
        {
            return 1;
        } 
        else
        {
            j++;
        }  
printf("%d",j);
    }
    printf("%d",j);
}


int stlen(char *tr)
{
    while(*(tr+i)!='\0')
    {
        i++;
    }
    return i;    
}