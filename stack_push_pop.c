#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_SIZE 5

// char stack[100];
int top = -1;
int val;

typedef struct
{
    int top;
    int arr[MAX_SIZE];
} stack;

bool isempty(stack *stack)
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool isfull(stack *stack)
{
    if (top == MAX_SIZE)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(char x)
{
    if (top != MAX_SIZE)
    {
        printf("Enter the value : ");
        scanf("%d", &val);
        top++;
    }
    else
    {
        printf("stack is full");
    }

    // stack[++top] = x;
}

char pop()
{
    // if (top == -1)
    //     return -1;
    // else
    //     return stack[top--];
    if (top != -1)
    {
        top--;
    }
    else
    {
        printf("stack is underflow");
    }
}

int main()

{
    int flag = 1;
    int user;
    while (flag == 1)
    {
        printf("1.push\n2.pop\n3.exit\n");
        scanf("%d", &user);
        if (user == 1)
        {
            push(user);
        }
        else if (user == 2)
        {
            pop();
        }
        else if (user == 3)
        {
            flag == 0;
            break;
        }
        else
        {
            printf("invalid input");
        }
    }

    char exp[100];
    char *e, x;
    printf("Enter the value : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;

    return 0;
}