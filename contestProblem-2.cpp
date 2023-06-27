#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data[12];
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(const char *data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->data, data);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node *createTree()
{
    struct Node *root = NULL;
    char value[10];
    printf("Enter node value (or 'x' to skip): ");
    scanf("%s", value);

    if (strcmp(value, "x") != 0)
    {
        root = createNode(value);
        printf("Enter left child of %s:\n", value);
        root->left = createTree();
        printf("Enter right child of %s:\n", value);
        root->right = createTree();
    }

    return root;
}


int main()
{
    struct Node *root = createTree();

    char inputValues[2][10];
    printf("Enter region code 1: ");
    scanf("%s", inputValues[0]);
    printf("Enter region code 2: ");
    scanf("%s", inputValues[1]);

    char *path[2][10];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            path[i][j] = (char *)malloc(10 * sizeof(char));
        }
    }
}