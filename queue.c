#include<stdio.h>
#define max 5

typedef struct Q
{
    int arr[max];
    int front;
    int rear;
} queue;

void initialize(queue *p);
void enqueue(queue *p, int x);
int dequeue(queue *p);
int isempty(queue *p);
int isfull(queue *p);

void main()
{
    queue q;
    int ch, n;
    initialize(&q);

    do
    {
        printf("\n1. ENQUEUE");
        printf("\n2. DEQUEUE");
        printf("\n3. EXIT");
        printf("\nENTER CHOICE: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter number to insert: ");
                scanf("%d", &n);
                enqueue(&q, n);
                break;

            case 2:
                n = dequeue(&q);
                if(n != -1)
                    printf("\nDeleted number is = %d\n", n);
                break;

            case 3:
                printf("\nProgram Ended\n");
                break;

            default:
                printf("\nWrong choice!\n");
        }

    } while(ch != 3);
}

void initialize(queue *p)
{
    p->front = -1;
    p->rear = -1;
}

void enqueue(queue *p, int x)
{
    if(isfull(p))
        printf("\nQUEUE IS FULL\n");
    else
    {
        if(p->front == -1) 
            p->front = 0;
        p->rear++;
        p->arr[p->rear] = x;
        printf("%d inserted\n", x);
    }
}

int dequeue(queue *p)
{
    if(isempty(p))
    {
        printf("\nQUEUE IS EMPTY\n");
        return -1;
    }
    else
    {
        int t = p->arr[p->front];
        if(p->front == p->rear) 
        {
            p->front = -1;
            p->rear = -1;
        }
        else
            p->front++;
        return t;
    }
}

int isempty(queue *p)
{
     if(p->front == -1)
    return (1);
    else
    return(0);
}

int isfull(queue *p)
{
    if(p->rear == max-1)
    return (1);
    else
    return(0);
} 