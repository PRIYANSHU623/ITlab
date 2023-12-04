#include<stdio.h>
int plndrm(char *);
int stlen(char *);

int i;
int main()
{
    char str[50];
    printf("enter the string : ");
    scanf("%[^\n]s",str);
    int l =plndrm(str);

    if(l==1){
        printf("its a palendrome");
    }
    else
    printf("no");
}

int plndrm(char *ptr)
{
    int k=stlen(ptr);
   
    char *tempstr = ptr;
    char *end= ptr+k-1;

    
    for(i=0;i<k;i++){

        if(*(tempstr+i)!= *(end-i)){

            return 0;
        }

    }

    return 1;
    
}
int stlen(char *tr)
{
    while(*(tr+i)!='\0')
    {
        i++;
    }
    return i;    
}