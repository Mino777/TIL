//
//  main.c
//  Queue
//
//  Created by 조민호 on 2020/05/09.
//  Copyright © 2020 조민호. All rights reserved.
//


// Example
// 1.
//#include <stdio.h>
//#define MAX 10
//int queue[MAX];
//int front = -1, rear = -1;
//void insert(void);
//int delete_element(void);
//int peek(void);
//void display(void);
//int main()
//{
//    int option, val;
//    do
//{
//    printf("\n\n ***** MAIN MENU *****");
//    printf("\n 1. Insert an element");
//    printf("\n 2. Delete an element");
//    printf("\n 3. Peek");
//    printf("\n 4. Display the queue");
//    printf("\n 5. EXIT");
//    printf("\n Enter your option : ");
//    scanf("%d", &option);
//switch(option)
// {
//    case 1:
//         insert();
//         break;
//    case 2:
//        val = delete_element();
//         if (val != -1)
//             printf("\n The number deleted is : %d", val);
//        break;
//    case 3:
//        val = peek();
//         if (val != -1)
//             printf("\n The first value in queue is : %d", val);
//        break;
//    case 4:
//        display();
//        break;
// }
//}
//    while(option != 5);
//    return 0;
//}
//
//void insert()
//{
//    int num;
//    printf("\n Enter the number to be inserted in the queue : ");
//    scanf("%d", &num);
//    if(rear == MAX-1)
//        printf("\n OVERFLOW");
//    else if(front == -1 && rear == -1)
//        front = rear = 0;
//    else
//        rear++;
//        queue[rear] = num;
//}
//int delete_element()
//{
//    int val;
//    if(front == -1 || front>rear)
//    {
//    printf("\n UNDERFLOW");
//    return -1;
//    }
//    else
//    {
//        val = queue[front];
//        front++;
//        if(front > rear)
//        front = rear = -1;
//        return val;
//    }
//}
//int peek()
//{
//    if(front==-1 || front>rear)
//    {
//        printf("\n QUEUE IS EMPTY");
//        return -1;
//    }
//    else
//    {
//        return queue[front];
//    }
//}
//void display()
//{
//    int i;
//    printf("\n");
//    if(front == -1 || front > rear)
//        printf("\n QUEUE IS EMPTY");
//    else
//    {
//        for(i = front;i <= rear;i++)
//            printf("\t %d", queue[i]);
//    }
//}
//
// 2.
//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//    int data;
//    struct node *next;
//};
//struct node *front;
//struct node *rear;
//void insert(void);
//void delete(void);
//void display(void);
//int main ()
//{
//    int choice = 0;
//    while(choice != 4)
//    {
//        printf("\n********Main Menu********\n");
//        printf("\n=================================================================\n");
//        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
//        printf("\nEnter your choice ?");
//        scanf("%d",& choice);
//        switch(choice)
//        {
//            case 1:
//            insert();
//            break;
//            case 2:
//            delete();
//            break;
//            case 3:
//            display();
//            break;
//            case 4:
//            exit(0);
//            break;
//            default:
//            printf("\nEnter valid choice??\n");
//        }
//    }
//}
//void insert()
//{
//    struct node *ptr;
//    int item;
//
//    ptr = (struct node *) malloc (sizeof(struct node));
//    if(ptr == NULL)
//    {
//        printf("\nOVERFLOW\n");
//        return;
//    }
//    else
//    {
//        printf("\nEnter value?\n");
//        scanf("%d",&item);
//        ptr -> data = item;
//        if(front == NULL)
//        {
//            front = ptr;
//            rear = ptr;
//            front -> next = NULL;
//            rear -> next = NULL;
//        }
//        else
//        {
//            rear -> next = ptr;
//            rear = ptr;
//            rear->next = NULL;
//        }
//    }
//}
//void delete ()
//{
//    struct node *ptr;
//    if(front == NULL)
//    {
//        printf("\nUNDERFLOW\n");
//        return;
//    }
//    else
//    {
//        ptr = front;
//        front = front -> next;
//        free(ptr);
//    }
//}
//void display()
//{
//    struct node *ptr;
//    ptr = front;
//    if(front == NULL)
//    {
//        printf("\nEmpty queue\n");
//    }
//    else
//    {   printf("\nprinting values .....\n");
//        while(ptr != NULL)
//        {
//            printf("\n%d\n",ptr -> data);
//            ptr = ptr -> next;
//        }
//    }
//}
//
// 3.
//#include <stdio.h>
//#define MAX 10
//int queue[MAX];
//int front=-1, rear=-1;
//void insert(void);
//int delete_element(void);
//int peek(void);
//void display(void);
//int main()
//{
//int option, val;
//do
//{
//     printf("\n ***** MAIN MENU *****");
//     printf("\n 1. Insert an element");
//     printf("\n 2. Delete an element");
//     printf("\n 3. Peek");
//     printf("\n 4. Display the queue");
//     printf("\n 5. EXIT");
//     printf("\n Enter your option : ");
//     scanf("%d", &option);
//    switch(option)
//     {
//     case 1:
//         insert();
//         break;
//     case 2:
//             val = delete_element();
//             if(val!=-1)
//                 printf("\n The number deleted is : %d", val);
//             break;
//     case 3:
//             val = peek();
//             if(val!=-1)
//                 printf("\n The first value in queue is : %d", val);
//             break;
//     case 4:
//             display();
//             break;
//     }
//    }while(option!=5);
//    return 0;
//}
//void insert()
//{
//    int num;
//    printf("\n Enter the number to be inserted in the queue : ");
//    scanf("%d", &num);
//    if(front==0 && rear==MAX-1)
//        printf("\n OVERFLOW");
//    else if(front==-1 && rear==-1)
//    {
//        front=rear=0;
//        queue[rear]=num;
//    }
//    else if(rear==MAX-1 && front!=0)
//    {
//        rear=0;
//        queue[rear]=num;
//    }
//    else
//    {
//        rear++;
//        queue[rear]=num;
//    }
//}
//int delete_element()
//{
//int val;
//    if(front==-1 && rear==-1)
//     {
//         printf("\n UNDERFLOW");
//         return -1;
//     }
//        val = queue[front];
//        if(front==rear)
//            front=rear=-1;
//    else
//    {
//        if(front==MAX-1)
//            front=0;
//        else
//            front++;
//    }
//    return val;
//}
//int peek()
//{
//    if(front==-1 && rear==-1)
//    {
//        printf("\n QUEUE IS EMPTY");
//        return -1;
//    }
//    else
//    {
//        return queue[front];
//    }
//}
//void display()
//{
//    int i;
//    printf("\n");
//        if (front ==-1 && rear ==-1)
//            printf ("\n QUEUE IS EMPTY");
//        else
//        {
//            if(front<rear)
//            {
//                for(i=front;i<=rear;i++)
//                    printf("\t %d", queue[i]);
//            }
//            else
//            {
//                for(i=front;i<MAX;i++)
//                    printf("\t %d", queue[i]);
//                for(i=0;i<=rear;i++)
//                    printf("\t %d", queue[i]);
//            }
//        }
//}
//
// 4.
//#include <stdio.h>
//#define MAX 10
//int deque[MAX];
//int left = -1, right = -1;
//void input_deque(void);
//void output_deque(void);
//void insert_left(void);
//void insert_right(void);
//void delete_left(void);
//void delete_right(void);
//void display(void);
//int main()
//{
//    int option;
//    printf("\n *****MAIN MENU*****");
//    printf("\n 1.Input restricted deque");
//    printf("\n 2.Output restricted deque");
//    printf("Enter your option : ");
//    scanf("%d",&option);
//    switch(option)
//    {
//     case 1:
//            input_deque();
//            break;
//     case 2:
//            output_deque();
//            break;
//    }
//    return 0;
//}
//void input_deque()
//{
//int option;
//do
//{
//     printf("\n INPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Delete from left");
//     printf("\n 3.Delete from right");
//     printf("\n 4.Display");
//     printf("\n 5.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             delete_left();
//             break;
//     case 3:
//             delete_right();
//             break;
//     case 4:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void output_deque()
//{
//int option;
//do
//{
//     printf("OUTPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Insert at left");
//     printf("\n 3.Delete from left");
//     printf("\n 4.Display");
//     printf("\n 5.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             insert_left();
//             break;
//     case 3:
//             delete_left();
//             break;
//     case 4:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void insert_right()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n OVERFLOW");
//        return;
//    }
//    if (left == -1) /* if queue is initially empty */
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(right == MAX-1) /*right is at last position of queue */
//            right = 0;
//        else
//         right = right+1;
//    }
//    deque[right] = val ;
//}
//void insert_left()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n Overflow");
//        return;
//    }
//    if (left == -1)/*If queue is initially empty*/
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(left == 0)
//            left=MAX-1;
//        else
//            left=left-1;
//    }
//        deque[left] = val;
//}
//void delete_left()
//{
//    if (left == -1)
//    {
//        printf("\n UNDERFLOW");
//        return ;
//    }
//        printf("\n The deleted element is : %d", deque[left]);
//        if(left == right) /*Queue has only one element */
//        {
//            left = -1;
//            right = -1;
//        }
//        else
//        {
//        if(left == MAX-1)
//            left = 0;
//        else
//            left = left+1;
//        }
//}
//void delete_right()
//{
//    if (left == -1)
//    {
//        printf("\n UNDERFLOW");
//        return ;
//    }
//        printf("\n The element deleted is : %d", deque[right]);
//        if(left == right) /*queue has only one element*/
//        {
//            left = -1;
//            right = -1;
//        }
//        else
//        {
//            if(right == 0)
//                right=MAX-1;
//            else
//                right=right-1;
//        }
//}
//void display()
//{
//    int front = left, rear = right;
//    if(front == -1)
//    {
//        printf("\n QUEUE IS EMPTY");
//        return;
//    }
//        printf("\n The elements of the queue are : ");
//        if(front <= rear )
//        {
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//        else
//        {
//            while(front <= MAX-1)
//            {
//                printf("%d", deque[front]);
//                front++;
//            }
//            front = 0;
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//    printf("\n");
//}
//
// 5.
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//int data;
//int priority;
//struct node *next;
//};
//struct node *start=NULL;
//struct node *insert(struct node *);
//struct node *delete(struct node *);
//void display(struct node *);
//int main()
//{
//    int option;
//    do
//    {
//         printf("\n *****MAIN MENU*****");
//         printf("\n 1. INSERT");
//         printf("\n 2. DELETE");
//         printf("\n 3. DISPLAY");
//         printf("\n 4. EXIT");
//         printf("\n Enter your option : ");
//         scanf( "%d", &option);
//        switch(option)
//         {
//         case 1:
//                 start=insert(start);
//                 break;
//         case 2:
//                 start = delete(start);
//                 break;
//         case 3:
//                 display(start);
//                 break;
//     }
//    }while(option!=4);
//}
//struct node *insert(struct node *start)
//{
//int val, pri;
//struct node *ptr, *p;
//ptr = (struct node *)malloc(sizeof(struct node));
//printf("\n Enter the value and its priority : " );
//scanf( "%d %d", &val, &pri);
//ptr->data = val;
//ptr->priority = pri;
//if(start==NULL || pri < start->priority )
//{
//    ptr->next = start;
//    start = ptr;
//}
//else
//{
//    p = start;
//    while(p->next != NULL && p->next->priority <= pri)
//        p = p->next;
//    ptr->next = p->next;
//    p->next = ptr;
//}
//    return start;
//}
//struct node *delete(struct node *start)
//{
//struct node *ptr;
//if(start == NULL)
//{
//    printf("\n UNDERFLOW" );
//    return 0;
//}
//else
//{
//     ptr = start;
//     printf("\n Deleted item is: %d", ptr->data);
//     start = start->next;
//     free(ptr);
//}
//    return start;
//}
//void display(struct node *start)
//{
//    struct node *ptr;
//    ptr = start;
//    if(start == NULL)
//        printf("\nQUEUE IS EMPTY" );
//    else
//    {
//        printf("\n PRIORITY QUEUE IS : " );
//        while(ptr != NULL)
//        {
//            printf( "\t%d[priority=%d]", ptr->data, ptr->priority );
//            ptr=ptr->next;
//        }
//    }
//}
//
// 6.
//#include <stdio.h>
//#define MAX 10
//int QUEUE[MAX], rearA=-1,frontA=-1, rearB=MAX, frontB = MAX;
//void insertA(int val)
//{
//    if(rearA==rearB -1)
//        printf("\n OVERFLOW");
//    else
//    {
//        if(rearA ==-1 && frontA == -1)
//        { rearA = frontA = 0;
//        QUEUE[rearA] = val;
//        }
//        else
//            QUEUE[++rearA] = val;
//    }
//}
//int deleteA()
//{
//    int val;
//    if(frontA==-1)
//    {
//        printf("\n UNDERFLOW");
//        return -1;
//    }
//    else
//    {
//        val = QUEUE[frontA];
//        frontA++;
//        if (frontA>rearA)
//            frontA=rearA=-1;
//        return val;
//    }
//}
//void display_queueA()
//{
//    int i;
//    if(frontA==-1)
//        printf("\n QUEUE A IS EMPTY");
//    else
//    {
//        for(i=frontA;i<=rearA;i++)
//            printf("\t %d",QUEUE[i]);
//    }
//}
//void insertB(int val)
//{
//    if(rearA==rearB-1)
//        printf("\n OVERFLOW");
//    else
//    {
//        if(rearB == MAX && frontB == MAX)
//        { rearB = frontB = MAX-1;
//            QUEUE[rearB] = val;
//        }
//        else
//            QUEUE[-rearB] = val;
//        }
//}
//int deleteB()
//{
//    int val;
//    if(frontB==MAX)
//    {
//    printf("\n UNDERFLOW");
//    return -1;
//    }
//    else
//    {
//        val = QUEUE[frontB];
//        frontB--;
//        if (frontB<rearB)
//            frontB=rearB=MAX;
//        return val;
//    }
//}
//void display_queueB()
//{
//    int i;
//    if(frontB==MAX)
//        printf("\n QUEUE B IS EMPTY");
//    else
//    {
//        for(i=frontB;i>=rearB;i--)
//            printf("\t %d",QUEUE[i]);
//
//    }
//}
//int main()
//{
//    int option, val;
//    do
//    {
//         printf("\n *******MENU******");
//         printf("\n 1. INSERT IN QUEUE A");
//         printf("\n 2. INSERT IN QUEUE B");
//         printf("\n 3. DELETE FROM QUEUE A");
//         printf("\n 4. DELETE FROM QUEUE B");
//         printf("\n 5. DISPLAY QUEUE A");
//         printf("\n 6. DISPLAY QUEUE B");
//         printf("\n 7. EXIT");
//         printf("\n Enter your option : ");
//         scanf("%d",&option);
//        switch(option)
//         {
//         case 1: printf("\n Enter the value to be inserted in Queue A : ");
//                 scanf("%d",&val);
//                 insertA(val);
//                 break;
//         case 2: printf("\n Enter the value to be inserted in Queue B : ");
//                 scanf("%d",&val);
//                 insertB(val);
//                 break;
//         case 3: val=deleteA();
//                 if(val!=-1)
//                     printf("\n The value deleted from Queue A = %d",val);
//                 break;
//         case 4 : val=deleteB();
//                 if(val!=-1)
//                     printf("\n The value deleted from Queue B = %d",val);
//                 break;
//         case 5: printf("\n The contents of Queue A are : \n");
//                 display_queueA();
//                 break;
//         case 6: printf("\n The contents of Queue B are : \n");
//                 display_queueB();
//                 break;
//         }
//    }while(option!=7);
//}
//
// 7.
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//    int player_id;
//    struct node *next;
//};
//struct node *start, *ptr, *new_node;
//int main()
//{
//    int n, k, i, count;
//    printf("\n Enter the number of players : ");
//    scanf("%d", &n);
//    printf("\n Enter the value of k (every kth player gets eliminated): ");
//    scanf("%d", &k);
//    start = malloc(sizeof(struct node));
//    start->player_id = 1;
//    ptr = start;
//    for (i = 2; i <= n; i++)
//    {
//        new_node = malloc(sizeof(struct node));
//        ptr->next = new_node;
//        new_node->player_id = i;
//        new_node->next=start;
//        ptr=new_node;
//    }
//    for (count = n; count > 1; count--)
//    {
//    for (i = 0; i < k - 1; ++i)
//         ptr = ptr->next;
//         ptr->next = ptr->next->next;
//    }
//    printf("\n The Winner is Player %d", ptr->player_id);
//    return 0;
//}
//
// Exercise
// 3.
//#include <stdio.h>
//#define MAX 10
//int deque[MAX];
//int left = -1, right = -1;
//void input_deque(void);
//void output_deque(void);
//void insert_left(void);
//void insert_right(void);
//void display(void);
//int main()
//{
//    int option;
//    printf("\n *****MAIN MENU*****");
//    printf("\n 1.Input restricted deque");
//    printf("\n 2.Output restricted deque");
//    printf("Enter your option : ");
//    scanf("%d",&option);
//    switch(option)
//    {
//     case 1:
//            input_deque();
//            break;
//     case 2:
//            output_deque();
//            break;
//    }
//    return 0;
//}
//void input_deque()
//{
//int option;
//do
//{
//     printf("\n INPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Display");
//     printf("\n 3.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void output_deque()
//{
//int option;
//do
//{
//     printf("OUTPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Insert at left");
//     printf("\n 3.Display");
//     printf("\n 4.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             insert_left();
//             break;
//     case 3:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void insert_right()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n OVERFLOW");
//        return;
//    }
//    if (left == -1)
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(right == MAX-1)
//            right = 0;
//        else
//         right = right+1;
//    }
//    deque[right] = val ;
//}
//void insert_left()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n Overflow");
//        return;
//    }
//    if (left == -1)
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(left == 0)
//            left=MAX-1;
//        else
//            left=left-1;
//    }
//        deque[left] = val;
//}
//void display()
//{
//    int front = left, rear = right;
//    if(front == -1)
//    {
//        printf("\n QUEUE IS EMPTY");
//        return;
//    }
//        printf("\n The elements of the queue are : ");
//        if(front <= rear )
//        {
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//        else
//        {
//            while(front <= MAX-1)
//            {
//                printf("%d", deque[front]);
//                front++;
//            }
//            front = 0;
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//    printf("\n");
//}

// 4.
//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//    int data;
//    struct node *next;
//};
//struct node *front;
//struct node *rear;
//void insert(void);
//void delete(void);
//void display(void);
//int main ()
//{
//    int choice = 0;
//    while(choice != 4)
//    {
//        printf("\n********Main Menu********\n");
//        printf("\n=================================================================\n");
//        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
//        printf("\nEnter your choice ?");
//        scanf("%d",& choice);
//        switch(choice)
//        {
//            case 1:
//            insert();
//            break;
//            case 2:
//            delete();
//            break;
//            case 3:
//            display();
//            break;
//            case 4:
//            exit(0);
//            break;
//            default:
//            printf("\nEnter valid choice??\n");
//        }
//    }
//}
//void insert()
//{
//    struct node *ptr;
//    int item;
//
//    ptr = (struct node *) malloc (sizeof(struct node));
//    if(ptr == NULL)
//    {
//        printf("\nOVERFLOW\n");
//        return;
//    }
//    else
//    {
//        printf("\nEnter value?\n");
//        scanf("%d",&item);
//        ptr -> data = item;
//        if(front == NULL)
//        {
//            front = ptr;
//            rear = ptr;
//            front -> next = NULL;
//            rear -> next = NULL;
//        }
//        else
//        {
//            rear -> next = ptr;
//            rear = ptr;
//            rear->next = NULL;
//        }
//    }
//}
//void delete ()
//{
//    struct node *ptr;
//    if(front == NULL)
//    {
//        printf("\nUNDERFLOW\n");
//        return;
//    }
//    else
//    {
//        ptr = front;
//        front = front -> next;
//        free(ptr);
//    }
//}
//void display()
//{
//    struct node *ptr;
//    ptr = front;
//    if(front == NULL)
//    {
//        printf("\nEmpty queue\n");
//    }
//    else
//    {   printf("\nprinting values .....\n");
//        while(ptr != NULL)
//        {
//            printf("\n%d\n",ptr -> data);
//            ptr = ptr -> next;
//        }
//    }
//}
// 5.

// 6.
//#include <stdio.h>
//#define MAX 10
//int deque[MAX];
//int left = -1, right = -1;
//void input_deque(void);
//void output_deque(void);
//void insert_left(void);
//void insert_right(void);
//void delete_left(void);
//void delete_right(void);
//void display(void);
//int main()
//{
//    int option;
//    printf("\n *****MAIN MENU*****");
//    printf("\n 1.Input restricted deque");
//    printf("\n 2.Output restricted deque");
//    printf("Enter your option : ");
//    scanf("%d",&option);
//    switch(option)
//    {
//     case 1:
//            input_deque();
//            break;
//     case 2:
//            output_deque();
//            break;
//    }
//    return 0;
//}
//void input_deque()
//{
//int option;
//do
//{
//     printf("\n INPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Delete from left");
//     printf("\n 3.Delete from right");
//     printf("\n 4.Display");
//     printf("\n 5.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             delete_left();
//             break;
//     case 3:
//             delete_right();
//             break;
//     case 4:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void output_deque()
//{
//int option;
//do
//{
//     printf("OUTPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Insert at left");
//     printf("\n 3.Delete from left");
//     printf("\n 4.Display");
//     printf("\n 5.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             insert_left();
//             break;
//     case 3:
//             delete_left();
//             break;
//     case 4:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void insert_right()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n OVERFLOW");
//        return;
//    }
//    if (left == -1) /* if queue is initially empty */
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(right == MAX-1) /*right is at last position of queue */
//            right = 0;
//        else
//         right = right+1;
//    }
//    deque[right] = val ;
//}
//void insert_left()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n Overflow");
//        return;
//    }
//    if (left == -1)/*If queue is initially empty*/
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(left == 0)
//            left=MAX-1;
//        else
//            left=left-1;
//    }
//        deque[left] = val;
//}
//void delete_left()
//{
//    if (left == -1)
//    {
//        printf("\n UNDERFLOW");
//        return ;
//    }
//        printf("\n The deleted element is : %d", deque[left]);
//        if(left == right) /*Queue has only one element */
//        {
//            left = -1;
//            right = -1;
//        }
//        else
//        {
//        if(left == MAX-1)
//            left = 0;
//        else
//            left = left+1;
//        }
//}
//void delete_right()
//{
//    if (left == -1)
//    {
//        printf("\n UNDERFLOW");
//        return ;
//    }
//        printf("\n The element deleted is : %d", deque[right]);
//        if(left == right) /*queue has only one element*/
//        {
//            left = -1;
//            right = -1;
//        }
//        else
//        {
//            if(right == 0)
//                right=MAX-1;
//            else
//                right=right-1;
//        }
//}
//void display()
//{
//    int front = left, rear = right;
//    if(front == -1)
//    {
//        printf("\n QUEUE IS EMPTY");
//        return;
//    }
//        printf("\n The elements of the queue are : ");
//        if(front <= rear )
//        {
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//        else
//        {
//            while(front <= MAX-1)
//            {
//                printf("%d", deque[front]);
//                front++;
//            }
//            front = 0;
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//    printf("\n");
//}

// 7.
//#include <stdio.h>
//#define MAX 10
//int deque[MAX];
//int left = -1, right = -1;
//void input_deque(void);
//void output_deque(void);
//void insert_left(void);
//void insert_right(void);
//void delete_left(void);
//void delete_right(void);
//void display(void);
//int main()
//{
//    int option;
//    printf("\n *****MAIN MENU*****");
//    printf("\n 1.Input restricted deque");
//    printf("\n 2.Output restricted deque");
//    printf("Enter your option : ");
//    scanf("%d",&option);
//    switch(option)
//    {
//     case 1:
//            input_deque();
//            break;
//     case 2:
//            output_deque();
//            break;
//    }
//    return 0;
//}
//void input_deque()
//{
//int option;
//do
//{
//     printf("\n INPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Delete from left");
//     printf("\n 3.Delete from right");
//     printf("\n 4.Display");
//     printf("\n 5.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             delete_left();
//             break;
//     case 3:
//             delete_right();
//             break;
//     case 4:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void output_deque()
//{
//int option;
//do
//{
//     printf("OUTPUT RESTRICTED DEQUE");
//     printf("\n 1.Insert at right");
//     printf("\n 2.Insert at left");
//     printf("\n 3.Delete from left");
//     printf("\n 4.Display");
//     printf("\n 5.Quit");
//     printf("\n Enter your option : ");
//     scanf("%d",&option);
//    switch(option)
//     {
//     case 1:
//             insert_right();
//             break;
//     case 2:
//             insert_left();
//             break;
//     case 3:
//             delete_left();
//             break;
//     case 4:
//             display();
//             break;
//     }
//    }while(option!=5);
//}
//void insert_right()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n OVERFLOW");
//        return;
//    }
//    if (left == -1) /* if queue is initially empty */
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(right == MAX-1) /*right is at last position of queue */
//            right = 0;
//        else
//         right = right+1;
//    }
//    deque[right] = val ;
//}
//void insert_left()
//{
//    int val;
//    printf("\n Enter the value to be added:");
//    scanf("%d", &val);
//    if((left == 0 && right == MAX-1) || (left == right+1))
//    {
//        printf("\n Overflow");
//        return;
//    }
//    if (left == -1)/*If queue is initially empty*/
//    {
//        left = 0;
//        right = 0;
//    }
//    else
//    {
//        if(left == 0)
//            left=MAX-1;
//        else
//            left=left-1;
//    }
//        deque[left] = val;
//}
//void delete_left()
//{
//    if (left == -1)
//    {
//        printf("\n UNDERFLOW");
//        return ;
//    }
//        printf("\n The deleted element is : %d", deque[left]);
//        if(left == right) /*Queue has only one element */
//        {
//            left = -1;
//            right = -1;
//        }
//        else
//        {
//        if(left == MAX-1)
//            left = 0;
//        else
//            left = left+1;
//        }
//}
//void delete_right()
//{
//    if (left == -1)
//    {
//        printf("\n UNDERFLOW");
//        return ;
//    }
//        printf("\n The element deleted is : %d", deque[right]);
//        if(left == right) /*queue has only one element*/
//        {
//            left = -1;
//            right = -1;
//        }
//        else
//        {
//            if(right == 0)
//                right=MAX-1;
//            else
//                right=right-1;
//        }
//}
//void display()
//{
//    int front = left, rear = right;
//    if(front == -1)
//    {
//        printf("\n QUEUE IS EMPTY");
//        return;
//    }
//        printf("\n The elements of the queue are : ");
//        if(front <= rear )
//        {
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//        else
//        {
//            while(front <= MAX-1)
//            {
//                printf("%d", deque[front]);
//                front++;
//            }
//            front = 0;
//            while(front <= rear)
//            {
//                printf("%d",deque[front]);
//                front++;
//            }
//        }
//    printf("\n");
//}

// 8.
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//int data;
//int priority;
//struct node *next;
//};
//struct node *start=NULL;
//struct node *insert(struct node *);
//struct node *delete(struct node *);
//void display(struct node *);
//int main()
//{
//    int option;
//    do
//    {
//         printf("\n *****MAIN MENU*****");
//         printf("\n 1. INSERT");
//         printf("\n 2. DELETE");
//         printf("\n 3. DISPLAY");
//         printf("\n 4. EXIT");
//         printf("\n Enter your option : ");
//         scanf( "%d", &option);
//        switch(option)
//         {
//         case 1:
//                 start=insert(start);
//                 break;
//         case 2:
//                 start = delete(start);
//                 break;
//         case 3:
//                 display(start);
//                 break;
//     }
//    }while(option!=4);
//}
//struct node *insert(struct node *start)
//{
//int val, pri;
//struct node *ptr, *p;
//ptr = (struct node *)malloc(sizeof(struct node));
//printf("\n Enter the value and its priority : " );
//scanf( "%d %d", &val, &pri);
//ptr->data = val;
//ptr->priority = pri;
//if(start==NULL || pri < start->priority )
//{
//    ptr->next = start;
//    start = ptr;
//}
//else
//{
//    p = start;
//    while(p->next != NULL && p->next->priority <= pri)
//        p = p->next;
//    ptr->next = p->next;
//    p->next = ptr;
//}
//    return start;
//}
//struct node *delete(struct node *start)
//{
//struct node *ptr;
//if(start == NULL)
//{
//    printf("\n UNDERFLOW" );
//    return 0;
//}
//else
//{
//     ptr = start;
//     printf("\n Deleted item is: %d", ptr->data);
//     start = start->next;
//     free(ptr);
//}
//    return start;
//}
//void display(struct node *start)
//{
//    struct node *ptr;
//    ptr = start;
//    if(start == NULL)
//        printf("\nQUEUE IS EMPTY" );
//    else
//    {
//        printf("\n PRIORITY QUEUE IS : " );
//        while(ptr != NULL)
//        {
//            printf( "\t%d[priority=%d]", ptr->data, ptr->priority );
//            ptr=ptr->next;
//        }
//    }
//}

// 9.
//#include <stdio.h>
//#include <stdlib.h>
//
//void push1(int);
//void push2(int);
//int pop1(void);
//int pop2(void);
//void enqueue(void);
//void dequeue(void);
//void display(void);
//void create(void);
//
//int st1[100], st2[100];
//int top1 = -1, top2 = -1;
//int count = 0;
//
//int main()
//{
//    int ch;
//
//    printf("\n1 - Enqueue element into queue");
//    printf("\n2 - Dequeu element from queue");
//    printf("\n3 - Display from queue");
//    printf("\n4 - Exit");
//    create();
//    while (1)
//    {
//        printf("\nEnter choice");
//        scanf("%d", &ch);
//        switch (ch)
//        {
//        case 1:
//            enqueue();
//            break;
//        case 2:
//            dequeue();
//            break;
//        case 3:
//            display();
//            break;
//        case 4:
//            exit(0);
//        default:
//            printf("Wrong choice");
//        }
//    }
//}
//
//void create()
//{
//    top1 = top2 = -1;
//}
//
//void push1(int data)
//{
//    st1[top1++] = data;
//}
//
//int pop1()
//{
//    return(st1[top1--]);
//}
//
//void push2(int data)
//{
//    st2[++top2] = data;
//}
//
//
//int pop2()
//{
//    return(st2[top2--]);
//}
//
//void enqueue()
//{
//    int data, i;
//
//    printf("Enter data into queue");
//    scanf("%d", &data);
//    push1(data);
//    count++;
//}
//
//
//void dequeue()
//{
//    int i;
//
//    for (i = 0;i <= count;i++)
//    {
//        push2(pop1());
//    }
//    pop2();
//    count--;
//    for (i = 0;i <= count;i++)
//    {
//        push1(pop2());
//    }
//}
//
//
//void display()
//{
//    int i;
//
//    for (i = 0;i <= top1;i++)
//    {
//        printf(" %d ", st1[i]);
//    }
//}
// 10.

// 11.
//#include<stdio.h>
//#include<stdlib.h>
//
//struct node
//{
//    int data;
//    struct node * next;
//};
//
//struct queue
//{
//    struct node * front;
//    struct node * rear;
//};
//
//struct stackNode
//{
//    int data;
//    struct stackNode * next;
//};
//
//struct stackNode * push(struct stackNode * top, int element);
//struct queue * enQueue(struct queue * q, int num);
//int deQueue(struct queue ** q);
//int pop(struct stackNode ** s);
//
//void printer(struct queue * q)
// {
//     struct node * x = q->front;
//     while(x != NULL)
//     {
//         printf("%d ",x->data);
//         x = x->next;
//     }
//     printf("\n");
// }
//int main(void)
//{
//    struct queue * Q = NULL;
//
//    //adding some elements
//    Q = enQueue(Q,4);
//    Q = enQueue(Q,8);
//    Q = enQueue(Q,15);
//    Q = enQueue(Q,16);
//    Q = enQueue(Q,23);
//    Q = enQueue(Q,42);
//
//    printer(Q);
//
//    struct stackNode * S = NULL;
//
//    while(Q->front != NULL)
//        S = push(S, deQueue(&Q));
//
//
//    Q = NULL;
//    while(S != NULL)
//        Q = enQueue(Q, pop(&S));
//
//
//    printer(Q);
//
//    return 0;
//}
//
//struct stackNode * push(struct stackNode * top, int element)
//{
//    struct stackNode * temp = (struct stackNode *)malloc(sizeof(struct stackNode));
//    if(!temp)
//    {
//        printf("STACK OVERFLOW");
//        return top;
//    }
//    temp -> data = element;
//    temp -> next = top;
//    return temp;
//}
//
//struct queue * enQueue(struct queue * q, int num)
//{
//    struct node * temp = (struct node*)malloc(sizeof(struct node));
//    temp -> data = num;
//    temp -> next = NULL;
//    if(q==NULL)
//    {
//        q = (struct queue*)malloc(sizeof(struct queue));
//        if(!q)
//        {
//            printf("OVERFLOW EXCEPTION");
//            return NULL;
//        }
//        q -> front = temp;
//    }
//    else
//        q -> rear -> next = temp;
//    q -> rear = temp;
//    return q;
//}
//
//int deQueue(struct queue ** q)
//{
//    int x = (*q)->front->data;
//    struct node * temp = (*q)->front;
//    (*q) -> front = (*q)->front->next;
//    free(temp);
//    return x;
//}
//
//int pop(struct stackNode ** s)
//{
//    int x = (*s)->data;
//    struct stackNode * temp = *s;
//    *s = (*s)->next;
//    free(temp);
//    return x;
//}
 

// 12.
// 13.

