#include<stdio.h>
int stlen(char *ptr);
int freq(char *sptr);
int i=0;
int main()
{
    char a[25];
    char *ptr=a;
    printf("Enter the name :");
    scanf("%s",a);
    freq(a);
}

int stlen(char *tr)
{
    while(*(tr+i)!='\0')
    {
        i++;
    }
    return i;    
}

int freq(char *sptr)
{
    int p=stlen(sptr);
    for(i=0;i<=p && *(sptr+i)>97 && *(sptr+i)<123;i++)
    {
        int count=0;
        for(int j=0;j<p ;j++)
        {
            if(*(sptr+i)==*(sptr+j)) 
            {
                count++;
            }
        }
        printf("Frequency of %c is %d \n ",*(sptr+i),count);
    }
}