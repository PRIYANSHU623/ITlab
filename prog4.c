#include <stdio.h>

void rev(char *ptr);
int stlen(char *tr);

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    rev(str);
}

void rev(char *ptr) {
    int k = stlen(ptr);
    char rst[k + 1];  //
    for (int j = 0; j <k; j++)
    {
        if ((*(ptr + j) >= 'A' && *(ptr + j) <= 'Z') || (*(ptr + j) >= 'a' && *(ptr + j) <= 'z')) 
        {
            rst[j] = *(ptr+k-j-1);
        }
        else {
            rst[j] = *(ptr+j);
        }
       // printf("%c",rst[j]);
       
    }
    printf("\n");
     

   printf("Reversed string: %s\n", rst);
}

int stlen(char *tr) {
    int i = 0;
    while (*(tr + i) != '\0') {
        i++;
    }
    return i;
}
