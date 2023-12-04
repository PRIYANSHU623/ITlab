#include<stdio.h>
void rev(char *ptr);
void stradd(char *str1,char *str2);
int stlen(char *ptr);
int comp(char *str1,char *str2);
int j,i,p;

int main()
{
    char name[20];
    printf("Enter the string :");
    scanf("%s",name);
    printf("Length of the string is :%d\n",stlen(name));
    rev(name);
    char str1[]="Priyanshu";
    char str2[]="Priyanshu";
    stradd(str1,str2);
    int y=comp(str1,str2);
    if(y==1)
    {
        printf("yes ! Both string are Same .");
    }
    else if(y==0)
    {
        printf("Both Strings are diffrent !");
    }


}

int stlen(char *ptr)
{
    while(*(ptr+i)!='\0')
    {
        i++;
    }
    return i;
}

void rev(char *ptr)
{
    char ch[i+1];
    for(j=0;j<i;j++)
    {
        ch[j]=*(ptr+i-j-1);
        
    }
    printf("Reverse of string is : %s\n",ch);
}

void stradd(char *str1,char *str2)
{
    int k=stlen(str1);
    p=stlen(str2);
    char st[k+p];
    for (int z=0;z<k;z++)
    {
        *(st+z)=*(str1+z);
    }  
    for (int z=0;z<p;z++)
    {
        *(st+k+z)=*(str2+z);
    }
    
    printf("COncadination of two String is :%s\n",st);
}

int comp(char *str1,char *str2)
{
    int k=stlen(str1);
    p=stlen(str2);
    if(k=p)
    {
        for(int z=0;z<k;z++)
        {
            if(*(str1+z)!=*(str2+z))
            {
                return 0; 
            }

        }
        return 1;
    }
    else
    {
        return 0;
    }
}