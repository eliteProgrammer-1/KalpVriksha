#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    char* str = (char*)malloc(sizeof(size));
    scanf("%s", str);

    int startIndex = 0, endIndex = 0, index = 0;
    char* temp = (char*)malloc(sizeof(size));
    for (int i = 0; i < size; i++)
    {   
        temp[index] = str[i];
        if(str[i] == ' ')
        {
            
        }
        index++;
    }

    
}