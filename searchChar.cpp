#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    char* str = (char*)malloc(sizeof(size)), target;
    scanf("%s", str);
    scanf(" %c", &target);

    for (int i = 0; i < size; i++)
    {
        if(str[i] == target)
        {   
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}