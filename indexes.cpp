#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    char* str = (char*)malloc(sizeof(size));
    scanf("%s", str);

    str = str - 'a';
    for (char c = 'a'; str[c] != '\0'; c++)
    {
        printf("%c", str[c]);
    }
    
    return 0;
}
