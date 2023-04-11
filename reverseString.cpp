#include<stdio.h>
#include<stdlib.h>

void swap(char* s1, char* s2)
{
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
    return;
}

int main()
{   
    int size;
    scanf("%d", &size);
    char* str = (char*)malloc(sizeof(size));
    scanf("%s", str);

    for (int i = 0; i < size / 2; i++)
    {
        swap(str + i, str + size - 1  - i);
    }
    
    printf("%s", str);
    return 0;
}