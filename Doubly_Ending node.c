#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode, *temp;
    int n, i, value;

    // Number of existing nodes
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Create initial nodes
    for(i = 1; i <= n; i++)
    {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL)
        {
            newNode->prev = NULL;
            head = newNode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            newNode->prev = temp;
            temp->next = newNode;
        }
    }

    // Add a new value at the END
    printf("\nEnter value to insert at end: ");
    scanf("%d", &value);

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    temp = head;

    // Go to last node
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    newNode->prev = temp;
    temp->next = newNode;

    // Display the list
    printf("\nDoubly Linked List:\n");
    printf("NULL <- ");

    temp = head;

    while(temp != NULL)
    {
        printf("%d", temp->data);

        if(temp->next != NULL)
        {
            printf(" <-> ");
        }

        temp = temp->next;
    }

    printf(" -> NULL");

    return 0;
}