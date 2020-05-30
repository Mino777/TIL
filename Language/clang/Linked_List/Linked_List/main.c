//
//  main.c
//  Linked_List
//
//  Created by 조민호 on 2020/04/25.
//  Copyright © 2020 조민호. All rights reserved.
//

// programming Example
// 1.
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//    int data;
//    struct node *next;
//};
//    struct node *start = NULL;
//    struct node *create_ll(struct node *);
//    struct node *display(struct node *);
//    struct node *insert_beg(struct node *);
//    struct node *insert_end(struct node *);
//    struct node *insert_before(struct node *);
//    struct node *insert_after(struct node *);
//    struct node *delete_beg(struct node *);
//    struct node *delete_end(struct node *);
//    struct node *delete_node(struct node *);
//    struct node *delete_after(struct node *);
//    struct node *delete_list(struct node *);
//    struct node *sort_list(struct node *);
//    int main(int argc, char *argv[]) {
//    int option;
//    do
//    {
//         printf("\n\n *****MAIN MENU *****");
//         printf("\n 1: Create a list");
//         printf("\n 2: Display the list");
//         printf("\n 3: Add a node at the beginning");
//         printf("\n 4: Add a node at the end");
//         printf("\n 5: Add a node before a given node");
//         printf("\n 6: Add a node after a given node");
//         printf("\n 7: Delete a node from the beginning");
//         printf("\n 8: Delete a node from the end");
//         printf("\n 9: Delete a given node");
//         printf("\n 10: Delete a node after a given node");
//         printf("\n 11: Delete the entire list");
//         printf("\n 12: Sort the list");
//         printf("\n 13: EXIT");
//         printf("\n\n Enter your option : ");
//         scanf("%d", &option);
//         switch(option)
//     {
//         case 1: start = create_ll(start);
//         printf("\n LINKED LIST CREATED");
//         break;
//         case 2: start = display(start);
//         break;
//         case 3: start = insert_beg(start);
//         break;
//         case 4: start = insert_end(start);
//         break;
//         case 5: start = insert_before(start);
//         break;
//         case 6: start = insert_after(start);
//         break;
//         case 7: start = delete_beg(start);
//         break;
//         case 8: start = delete_end(start);
//         break;
//         case 9: start = delete_node(start);
//         break;
//         case 10: start = delete_after(start);
//         break;
//         case 11: start = delete_list(start);
//         printf("\n LINKED LIST DELETED");
//         break;
//         case 12: start = sort_list(start);
//         break;
//     }
//}   while(option !=13);
//    return 0;
//    }
//        struct node *create_ll(struct node *start)
//    {
//        struct node *new_node, *ptr;
//        int num;
//        printf("\n Enter -1 to end");
//        printf("\n Enter the data : ");
//        scanf("%d", &num);
//        while(num!=-1)
//    {
//         new_node = (struct node*)malloc(sizeof(struct node));
//         new_node -> data=num;
//         if(start==NULL)
//     {
//         new_node -> next = NULL;
//         start = new_node;
//     }
//     else
//     {
//         ptr=start;
//         while(ptr->next!=NULL)
//         ptr=ptr->next;
//         ptr->next = new_node;
//         new_node->next=NULL;
// }
//         printf("\n Enter the data : ");
//         scanf("%d", &num);
//}
//    return start;
//}
//    struct node *display(struct node *start)
//{
//    struct node *ptr;
//    ptr = start;
//    while(ptr != NULL)
//{
//     printf("\t %d", ptr -> data);
//     ptr = ptr -> next;
//}
//    return start;
//}
//    struct node *insert_beg(struct node *start)
//{
//    struct node *new_node;
//    int num;
//    printf("\n Enter the data : ");
//    scanf("%d", &num);
//    new_node = (struct node *)malloc(sizeof(struct node));
//    new_node -> data = num;
//    new_node -> next = start;
//    start = new_node;
//    return start;
//}
//    struct node *insert_end(struct node *start)
//{
//    struct node *ptr, *new_node;
//    int num;
//    printf("\n Enter the data : ");
//    scanf("%d", &num);
//    new_node = (struct node *)malloc(sizeof(struct node));
//    new_node -> data = num;
//    new_node -> next = NULL;
//    ptr = start;
//    while(ptr -> next != NULL)
//    ptr = ptr -> next;
//    ptr -> next = new_node;
//    return start;
//}
//    struct node *insert_before(struct node *start)
//{
//    struct node *new_node, *ptr, *preptr = NULL;
//    int num, val;
//    printf("\n Enter the data : ");
//    scanf("%d", &num);
//    printf("\n Enter the value before which the data has to be inserted : ");
//    scanf("%d", &val);
//    new_node = (struct node *)malloc(sizeof(struct node));
//    new_node -> data = num;
//    ptr = start;
//    while(ptr -> data != val)
//    {
//     preptr = ptr;
//     ptr = ptr -> next;
//    }
//    preptr -> next = new_node;
//    new_node -> next = ptr;
//    return start;
//    }
//    struct node *insert_after(struct node *start)
//    {
//        struct node *new_node, *ptr, *preptr;
//        int num, val;
//        printf("\n Enter the data : ");
//        scanf("%d", &num);
//        printf("\n Enter the value after which the data has to be inserted : ");
//        scanf("%d", &val);
//        new_node = (struct node *)malloc(sizeof(struct node));
//        new_node -> data = num;
//        ptr = start;
//        preptr = ptr;
//        while(preptr -> data != val)
//    {
//         preptr = ptr;
//         ptr = ptr -> next;
//    }
//        preptr -> next=new_node;
//        new_node -> next = ptr;
//        return start;
//    }
//        struct node *delete_beg(struct node *start)
//    {
//        struct node *ptr;
//        ptr = start;
//        start = start -> next;
//        free(ptr);
//        return start;
//    }
//        struct node *delete_end(struct node *start)
//    {
//        struct node *ptr, *preptr = NULL;
//        ptr = start;
//        while(ptr -> next != NULL)
//    {
//         preptr = ptr;
//         ptr = ptr -> next;
//    }
//        preptr -> next = NULL;
//        free(ptr);
//        return start;
//    }
//        struct node *delete_node(struct node *start)
//    {
//        struct node *ptr, *preptr = NULL;
//        int val;
//        printf("\n Enter the value of the node which has to be deleted : ");
//        scanf("%d", &val);
//        ptr = start;
//        if(ptr -> data == val)
//    {
//         start = delete_beg(start);
//         return start;
//    }
//    else
//    {
//     while(ptr -> data != val)
//     {
//         preptr = ptr;
//         ptr = ptr -> next;
//     }
//         preptr -> next = ptr -> next;
//         free(ptr);
//         return start;
//    }
//}
//    struct node *delete_after(struct node *start)
//{
//    struct node *ptr, *preptr;
//    int val;
//    printf("\n Enter the value after which the node has to deleted : ");
//    scanf("%d", &val);
//    ptr = start;
//    preptr = ptr;
//    while(preptr -> data != val)
//{
//     preptr = ptr;
//     ptr = ptr -> next;
//}
//    preptr -> next=ptr -> next;
//    free(ptr);
//    return start;
//}
//    struct node *delete_list(struct node *start)
//{
//     struct node *ptr; // Lines 252-254 were modified from original code to fix
////    unresposiveness in output window
//    if(start!=NULL){
//     ptr=start;
//     while(ptr != NULL)
// {
//     printf("\n %d is to be deleted next", ptr -> data);
//     start = delete_beg(ptr);
//     ptr = start;
// }
//}
//    return start;
//}
//    struct node *sort_list(struct node *start)
//{
//    struct node *ptr1, *ptr2;
//    int temp;
//    ptr1 = start;
//    while(ptr1 -> next != NULL)
//{
// ptr2 = ptr1 -> next;
// while(ptr2 != NULL)
// {
//     if(ptr1 -> data > ptr2 -> data)
// {
//         temp = ptr1 -> data;
//         ptr1 -> data = ptr2 -> data;
//         ptr2 -> data = temp;
// }
//     ptr2 = ptr2 -> next;
// }
//    ptr1 = ptr1 -> next;
// }
//    return start; // Had to be added
//}

//*****MAIN MENU *****
//1: Create a list
//2: Display the list
//3: Add a node at the beginning
//4: Add the node at the end
//5: Add the node before a given node
//6: Add the node after a given node
//7: Delete a node from the beginning
//8: Delete a node from the end
//9: Delete a given node
//10: Delete a node after a given node
//11: Delete the entire list
//12: Sort the list
//13: Exit
//Enter your option : 3
//Enter your option : 73

// 2.
//#include <stdio.h>
//struct node
//{
// int data;
// struct node *next;
//};
//struct node *start = NULL;
//struct node *create_cll(struct node *);
//struct node *display(struct node *);
//struct node *insert_beg(struct node *);
//struct node *insert_end(struct node *);
//struct node *delete_beg(struct node *);
//struct node *delete_end(struct node *);
//struct node *delete_after(struct node *);
//struct node *delete_list(struct node *);
//int main()
//{
// int option;
// do
// {
//    printf("\n\n *****MAIN MENU *****");
//    printf("\n 1: Create a list");
//    printf("\n 2: Display the list");
//    printf("\n 3: Add a node at the beginning");
//    printf("\n 4: Add a node at the end");
//    printf("\n 5: Delete a node from the beginning");
//    printf("\n 6: Delete a node from the end");
//    printf("\n 7: Delete a node after a given node");
//    printf("\n 8: Delete the entire list");
//    printf("\n 9: EXIT");
//    printf("\n\n Enter your option : ");
//    scanf("%d", &option);
//    switch(option)
//{
//     case 1: start = create_cll(start);
//     printf("\n CIRCULAR LINKED LIST CREATED");
//     break;
//     case 2: start = display(start);
//     break;
//     case 3: start = insert_beg(start);
//     break;
//     case 4: start = insert_end(start);
//     break;
//     case 5: start = delete_beg(start);
//     break;
//     case 6: start = delete_end(start);
//     break;
//     case 7: start = delete_after(start);
//     break;
//     case 8: start = delete_list(start);
//     printf("\n CIRCULAR LINKED LIST DELETED");
//     break;
//}
// }while(option !=9);
//    return 0;
//}
//struct node *create_cll(struct node *start)
//{
//     struct node *new_node, *ptr;
//    int num;
//    printf("\n Enter –1 to end");
//    printf("\n Enter the data : ");
//    scanf("%d", &num);
//    while(num!= -1)
//{
//     new_node = (struct node*)malloc(sizeof(struct node));
//     new_node -> data = num;
//     if(start == NULL)
// {
//     new_node -> next = new_node;
//      start = new_node;
//      }
//      else
//      {   ptr = start;
//          while(ptr -> next != start)
//          ptr = ptr -> next;
//          ptr -> next = new_node;
//          new_node -> next = start;
//      }
//          printf("\n Enter the data : ");
//          scanf("%d", &num);
//     }
//     return start;
//     }
//     struct node *display(struct node *start)
//     {
//         struct node *ptr;
//         ptr=start;
//         while(ptr -> next != start)
//     {
//          printf("\t %d", ptr -> data);
//          ptr = ptr -> next;
//     }
//         printf("\t %d", ptr -> data);
//         return start;
//     }
//     struct node *insert_beg(struct node *start)
//     {
//         struct node *new_node, *ptr;
//         int num;
//         printf("\n Enter the data : ");
//         scanf("%d", &num);
//         new_node = (struct node *)malloc(sizeof(struct node));
//         new_node -> data = num;
//         ptr = start;
//         while(ptr -> next != start)
//         ptr = ptr -> next;
//         ptr -> next = new_node;
//         new_node -> next = start;
//         start = new_node;
//         return start;
//     }
//     struct node *insert_end(struct node *start)
//     {
//         struct node *ptr, *new_node;
//         int num;
//         printf("\n Enter the data : ");
//         scanf("%d", &num);
//         new_node = (struct node *)malloc(sizeof(struct node));
//         new_node -> data = num;
//         ptr = start;
//         while(ptr -> next != start)
//         ptr = ptr -> next;
//         ptr -> next = new_node;
//         new_node -> next = start;
//         return start;
//     }
//     struct node *delete_beg(struct node *start)
//     {
//             struct node *ptr;
//             ptr = start;
//             while(ptr -> next != start)
//             ptr = ptr -> next;
//             ptr -> next = start -> next;
//             start = ptr -> next;
//             return start;
//         }
//         struct node *delete_end(struct node *start)
//         {
//             struct node *ptr, *preptr = NULL;
//             ptr = start;
//             while(ptr -> next != start)
//         {
//              preptr = ptr;
//              ptr = ptr -> next;
//         }
//             preptr -> next = ptr -> next;
//             return start;
//         }
//         struct node *delete_after(struct node *start)
//         {
//             struct node *ptr, *preptr;
//             int val;
//             printf("\n Enter the value after which the node has to deleted : ");
//             scanf("%d", &val);
//             ptr = start;
//             preptr = ptr;
//             while(preptr -> data != val)
//         {
//              preptr = ptr;
//              ptr = ptr -> next;
//         }
//             preptr -> next = ptr -> next;
//             if(ptr == start)
//              start = preptr -> next;
//             return start;
//         }
//             struct node *delete_list(struct node *start)
//         {
//             struct node *ptr;
//             ptr = start;
//             while(ptr -> next != start)
//              start = delete_end(start);
//             return start;
//         }

// 3.
//#include <stdio.h>
//struct node
//{
//struct node *next;
//int data;
//struct node *prev;
//};
//struct node *start = NULL;
//struct node *create_ll(struct node *);
//struct node *display(struct node *);
//struct node *insert_beg(struct node *);
//struct node *insert_end(struct node *);
//struct node *insert_before(struct node *);
//struct node *insert_after(struct node *);
//struct node *delete_beg(struct node *);
//struct node *delete_end(struct node *);
//struct node *delete_before(struct node *);
//struct node *delete_after(struct node *);
//struct node *delete_list(struct node *);
//int main()
//{
//int option;
//do
//{
// printf("\n\n *****MAIN MENU *****");
// printf("\n 1: Create a list");
// printf("\n 2: Display the list");
// printf("\n 3: Add a node at the beginning");
// printf("\n 4: Add a node at the end");
// printf("\n 5: Add a node before a given node");
// printf("\n 6: Add a node after a given node");
// printf("\n 7: Delete a node from the beginning");
// printf("\n 8: Delete a node from the end");
// printf("\n 9: Delete a node before a given node");
// printf("\n 10: Delete a node after a given node");
// printf("\n 11: Delete the entire list");
// printf("\n 12: EXIT");
// printf("\n\n Enter your option : ");
// scanf("%d", &option);
// switch(option)
// {
//         case 1: start = create_ll(start);
//         printf("\n DOUBLY LINKED LIST CREATED");
//         break;
//         case 2: start = display(start);
//         break;
//         case 3: start = insert_beg(start);
//         break;
//         case 4: start = insert_end(start);
//         break;
//         case 5: start = insert_before(start);
//         break;
//         case 6: start = insert_after(start);
//         break;
//         case 7: start = delete_beg(start);
//         break;
//         case 8: start = delete_end(start);
//         break;
//         case 9: start = delete_before(start);
//         break;
//         case 10: start = delete_after(start);
//          break;
//          case 11: start = delete_list(start);
//          printf("\n DOUBLY LINKED LIST DELETED");
//          break;
//          }
//         }while(option != 12);
//         return 0;
//         }
//         struct node *create_ll(struct node *start)
//         {
//         struct node *new_node, *ptr;
//         int num;
//         printf("\n Enter –1 to end");
//         printf("\n Enter the data : ");
//         scanf("%d", &num);
//         while(num != -1)
//         {
//          if(start == NULL)
//          {
//          new_node = (struct node*)malloc(sizeof(struct node));
//          new_node -> prev = NULL;
//          new_node -> data = num;
//          new_node -> next = NULL;
//          start = new_node;
//          }
//          else
//          {
//          ptr=start;
//          new_node = (struct node*)malloc(sizeof(struct node));
//          new_node->data=num;
//          while(ptr->next!=NULL)
//          ptr = ptr->next;
//          ptr->next = new_node;
//          new_node->prev=ptr;
//          new_node->next=NULL;
//          }
//          printf("\n Enter the data : ");
//          scanf("%d", &num);
//         }
//         return start;
//         }
//         struct node *display(struct node *start)
//         {
//         struct node *ptr;
//         ptr=start;
//         while(ptr!=NULL)
//         {
//          printf("\t %d", ptr -> data);
//          ptr = ptr -> next;
//         }
//         return start;
//         }
//         struct node *insert_beg(struct node *start)
//         {
//         struct node *new_node;
//         int num;
//         printf("\n Enter the data : ");
//         scanf("%d", &num);
//         new_node = (struct node *)malloc(sizeof(struct node));
//         new_node -> data = num;
//             start -> prev = new_node;
//             new_node -> next = start;
//             new_node -> prev = NULL;
//             start = new_node;
//             return start;
//             }
//             struct node *insert_end(struct node *start)
//             {
//             struct node *ptr, *new_node;
//             int num;
//             printf("\n Enter the data : ");
//             scanf("%d", &num);
//             new_node = (struct node *)malloc(sizeof(struct node));
//             new_node -> data = num;
//             ptr=start;
//             while(ptr -> next != NULL)
//              ptr = ptr -> next;
//             ptr -> next = new_node;
//             new_node -> prev = ptr;
//             new_node -> next = NULL;
//             return start;
//             }
//             struct node *insert_before(struct node *start)
//             {
//             struct node *new_node, *ptr;
//             int num, val;
//             printf("\n Enter the data : ");
//             scanf("%d", &num);
//             printf("\n Enter the value before which the data has to be inserted:");
//             scanf("%d", &val);
//             new_node = (struct node *)malloc(sizeof(struct node));
//             new_node -> data = num;
//             ptr = start;
//             while(ptr -> data != val)
//              ptr = ptr -> next;
//             new_node -> next = ptr;
//             new_node -> prev = ptr-> prev;
//             ptr -> prev -> next = new_node;
//             ptr -> prev = new_node;
//             return start;
//             }
//             struct node *insert_after(struct node *start)
//             {
//             struct node *new_node, *ptr;
//             int num, val;
//             printf("\n Enter the data : ");
//             scanf("%d", &num);
//             printf("\n Enter the value after which the data has to be inserted:");
//             scanf("%d", &val);
//             new_node = (struct node *)malloc(sizeof(struct node));
//             new_node -> data = num;
//             ptr = start;
//             while(ptr -> data != val)
//              ptr = ptr -> next;
//             new_node -> prev = ptr;
//             new_node -> next = ptr -> next;
//             ptr -> next -> prev = new_node;
//             ptr -> next = new_node;
//             return start;
//             }
//struct node *delete_beg(struct node *start)
//{
//struct node *ptr;
//ptr = start;
//start = start -> next;
//start -> prev = NULL;
//return start;
//}
//struct node *delete_end(struct node *start)
//{
//struct node *ptr;
//ptr = start;
//while(ptr -> next != NULL)
// ptr = ptr -> next;
//ptr -> prev -> next = NULL;
//return start;
//}
//struct node *delete_after(struct node *start)
//{
//struct node *ptr, *temp;
//int val;
//printf("\n Enter the value after which the node has to deleted : ");
//scanf("%d", &val);
//ptr = start;
//while(ptr -> data != val)
// ptr = ptr -> next;
//temp = ptr -> next;
//ptr -> next = temp -> next;
//temp -> next -> prev = ptr;
//return start;
//}
//struct node *delete_before(struct node *start)
//{
//struct node *ptr, *temp;
//int val;
//printf("\n Enter the value before which the node has to deleted:");
//scanf("%d", &val);
//ptr = start;
//while(ptr -> data != val)
// ptr = ptr -> next;
//temp = ptr -> prev;
//if(temp == start)
// start = delete_beg(start);
//else
//{
// ptr -> prev = temp -> prev;
// temp -> prev -> next = ptr;
//}
//return start;
//}
//struct node *delete_list(struct node *start)
//{
//while(start != NULL)
// start = delete_beg(start);
//return start;
//}
// 4.
//#include <stdio.h>
//struct node
//{
//struct node *next;
//int data;
//struct node *prev;
//};
//struct node *start = NULL;
//struct node *create_ll(struct node *);
//struct node *display(struct node *);
//struct node *insert_beg(struct node *);
//struct node *insert_end(struct node *);
//struct node *delete_beg(struct node *);
//struct node *delete_end(struct node *);
//struct node *delete_node(struct node *);
//struct node *delete_list(struct node *);
//int main()
//{
//int option;
//do
//{
//     printf("\n\n *****MAIN MENU *****");
//     printf("\n 1: Create a list");
//     printf("\n 2: Display the list");
//     printf("\n 3: Add a node at the beginning");
//     printf("\n 4: Add a node at the end");
//     printf("\n 5: Delete a node from the beginning");
//     printf("\n 6: Delete a node from the end");
//     printf("\n 7: Delete a given node");
//     printf("\n 8: Delete the entire list");
//     printf("\n 9: EXIT");
//     printf("\n\n Enter your option : ");
//     scanf("%d", &option);
//     switch(option)
//     {
//     case 1: start = create_ll(start);
//     printf("\n CIRCULAR DOUBLY LINKED LIST CREATED");
//     break;
//     case 2: start = display(start);
//     break;
//     case 3: start = insert_beg(start);
//     break;
//     case 4: start = insert_end(start);
//     break;
//     case 5: start = delete_beg(start);
//     break;
//     case 6: start = delete_end(start);
//     break;
//     case 7: start = delete_node(start);
//     break;
//     case 8: start = delete_list(start);
//     printf("\n CIRCULAR DOUBLY LINKED LIST DELETED");
//     break;
//     }
//    }while(option != 9);
//    return 0;
//    }
//    struct node *create_ll(struct node *start)
//    {
//    struct node *new_node, *ptr;
//    int num;
//    printf("\n Enter –1 to end");
//    printf("\n Enter the data : ");
//    scanf("%d", &num);
//    while(num != -1)
//    {
//     if(start == NULL)
//     {
//     new_node = (struct node*)malloc(sizeof(struct node));
//     new_node -> prev = NULL;
//     new_node -> data = num;
//     new_node -> next = start;
//     start = new_node;
//     }
//     else
//     {
//     new_node = (struct node*)malloc(sizeof(struct node));
//     new_node -> data = num;
//     ptr = start;
//     while(ptr -> next != start)
//     ptr = ptr -> next;
//     new_node -> prev = ptr;
//     ptr -> next = new_node;
//     new_node -> next = start;
//     start -> prev = new_node;
//     }
//     printf("\n Enter the data : ");
//     scanf("%d", &num);
//    }
//        return start;
//        }
//        struct node *display(struct node *start)
//        {
//        struct node *ptr;
//        ptr = start;
//        while(ptr -> next != start)
//        {
//         printf("\t %d", ptr -> data);
//         ptr = ptr -> next;
//        }
//        printf("\t %d", ptr -> data);
//        return start;
//        }
//        struct node *insert_beg(struct node *start)
//        {
//        struct node *new_node, *ptr;
//        int num;
//        printf("\n Enter the data : ");
//        scanf("%d", &num);
//        new_node = (struct node *)malloc(sizeof(struct node));
//        new_node-> data = num;
//        ptr = start;
//        while(ptr -> next != start)
//         ptr = ptr -> next;
//        new_node -> prev = ptr;
//        ptr -> next = new_node;
//        new_node -> next = start;
//        start -> prev = new_node;
//        start = new_node;
//        return start;
//        }
//        struct node *insert_end(struct node *start)
//        {
//        struct node *ptr, *new_node;
//        int num;
//        printf("\n Enter the data : ");
//        scanf("%d", &num);
//        new_node = (struct node *)malloc(sizeof(struct node));
//        new_node -> data = num;
//        ptr = start;
//        while(ptr -> next != start)
//         ptr = ptr -> next;
//        ptr -> next = new_node;
//        new_node -> prev = ptr;
//        new_node -> next = start;
//        start-> prev = new_node;
//        return start;
//        }
//        struct node *delete_beg(struct node *start)
//        {
//        struct node *ptr;
//        ptr = start;
//        while(ptr -> next != start)
//         ptr = ptr -> next;
//        ptr -> next = start -> next;
//        start=start->next;
//        start->prev=ptr;
//        return start;
//            }
//            struct node *delete_end(struct node *start)
//            {
//            struct node *ptr;
//            ptr=start;
//            while(ptr -> next != start)
//             ptr = ptr -> next;
//            ptr -> prev -> next = start;
//            start -> prev = ptr -> prev;
//            return start;
//            }
//            struct node *delete_node(struct node *start)
//            {
//            struct node *ptr;
//            int val;
//            printf("\n Enter the value of the node which has to be deleted : ");
//            scanf("%d", &val);
//            ptr = start;
//            if(ptr -> data == val)
//            {
//             start = delete_beg(start);
//             return start;
//            }
//            else
//            {
//             while(ptr -> data != val)
//             ptr = ptr -> next;
//             ptr -> prev -> next = ptr -> next;
//             ptr -> next -> prev = ptr -> prev;
//             return start;
//            }
//            }
//            struct node *delete_list(struct node *start)
//            {
//            struct node *ptr;
//            ptr = start;
//            while(ptr -> next != start)
//             start = delete_end(start);
//            return start;
//            }
//
// 5.
//#include <stdio.h>
//
//struct node
//{
//int data;
//struct node *next;
//};
//struct node *start = NULL;
//struct node *create_hll(struct node *);
//struct node *display(struct node *);
//int main()
//{
//int option;
//do
//{
// printf("\n\n *****MAIN MENU *****");
// printf("\n 1: Create a list");
// printf("\n 2: Display the list");
// printf("\n 3: EXIT");
// printf("\n Enter your option : ");
// scanf("%d", &option);
// switch(option)
// {
// case 1: start = create_hll(start);
// printf("\n HEADER LINKED LIST CREATED");
// break;
//          case 2: start = display(start);
//          break;
//          }
//         }while(option !=3);
//         return 0;
//         }
//         struct node *create_hll(struct node *start)
//         {
//         struct node *new_node, *ptr;
//         int num;
//         printf("\n Enter –1 to end");
//         printf("\n Enter the data : ");
//         scanf("%d", &num);
//         while(num!=-1)
//         {
//          new_node = (struct node*)malloc(sizeof(struct node));
//          new_node->data=num;
//          new_node->next=NULL;
//          if(start==NULL)
//          {
//          start = (struct node*)malloc(sizeof(struct node));
//          start->next=new_node;
//          }
//          else
//          {
//          ptr=start;
//          while(ptr->next!=NULL)
//          ptr=ptr->next;
//          ptr->next=new_node;
//          }
//          printf("\n Enter the data : ");
//          scanf("%d", &num);
//         }
//         return start;
//         }
//         struct node *display(struct node *start)
//         {
//         struct node *ptr;
//         ptr=start;
//         while(ptr!=NULL)
//         {
//          printf("\t %d", ptr->data);
//          ptr = ptr->next;
//         }
//         return start;
//         }
// 6.
//#include <stdio.h>
//
//struct node
//{
//int num;
//int coeff;
//struct node *next;
//};
//struct node *start1 = NULL;
//struct node *start2 = NULL;
//struct node *start3 = NULL;
//struct node *start4 = NULL;
//struct node *last3 = NULL;
//struct node *create_poly(struct node *);
//struct node *display_poly(struct node *);
//struct node *add_poly(struct node *, struct node *, struct node *);
//struct node *sub_poly(struct node *, struct node *, struct node *);
//struct node *add_node(struct node *, int, int);
//int main()
//{
//int option;
//do
//{
// printf("\n******* MAIN MENU *******");
//printf("\n 1. Enter the first polynomial");
//printf("\n 2. Display the first polynomial");
// printf("\n 3. Enter the second polynomial");
// printf("\n 4. Display the second polynomial");
// printf("\n 5. Add the polynomials");
// printf("\n 6. Display the result");
// printf("\n 7. Subtract the polynomials");
// printf("\n 8. Display the result");
// printf("\n 9. EXIT");
// printf("\n\n Enter your option : ");
// scanf("%d", &option);
// switch(option)
// {
// case 1: start1 = create_poly(start1);
// break;
// case 2: start1 = display_poly(start1);
// break;
// case 3: start2 = create_poly(start2);
// break;
// case 4: start2 = display_poly(start2);
// break;
// case 5: start3 = add_poly(start1, start2, start3);
// break;
// case 6: start3 = display_poly(start3);
// break;
// case 7: start4 = sub_poly(start1, start2, start4);
// break;
// case 8: start4 = display_poly(start4);
//         break;
//  }
// }while(option!=9);
// return 0;
// }
// struct node *create_poly(struct node *start)
// {
// struct node *new_node, *ptr;
// int n, c;
// printf("\n Enter the number : ");
// scanf("%d", &n);
// printf("\t Enter its coefficient : ");
// scanf("%d", &c);
// while(n != -1)
// {
//  if(start==NULL)
//  {
//  new_node = (struct node *)malloc(sizeof(struct node));
//  new_node -> num = n;
//  new_node -> coeff = c;
//  new_node -> next = NULL;
//  start = new_node;
//  }
//  else
//  {
//  ptr = start;
//  while(ptr -> next != NULL)
//  ptr = ptr -> next;
//  new_node = (struct node *)malloc(sizeof(struct node));
//  new_node -> num = n;
//  new_node -> coeff = c;
//  new_node -> next = NULL;
//  ptr -> next = new_node;
//  }
//  printf("\n Enter the number : ");
//  scanf("%d", &n);
//  if(n == -1)
//  break;
// printf("\t Enter its coefficient : ");
//  scanf("%d", &c);
// }
// return start;
// }
// struct node *display_poly(struct node *start)
// {
// struct node *ptr;
// ptr = start;
// while(ptr != NULL)
// {
//  printf("\n%d x %d\t", ptr -> num, ptr -> coeff);
//  ptr = ptr -> next;
// }
// return start;
// }
// struct node *add_poly(struct node *start1, struct node *start2, struct node *start3)
// {
// struct node *ptr1, *ptr2;
// int sum_num, c;
//     ptr1 = start1, ptr2 = start2;
// while(ptr1 != NULL && ptr2 != NULL)
// {
//  if(ptr1 -> coeff == ptr2 -> coeff)
//  {
//  sum_num = ptr1 -> num + ptr2 -> num;
//  start3 = add_node(start3, sum_num, ptr1 -> coeff);
//  ptr1 = ptr1 -> next;
//  ptr2 = ptr2 -> next;
//  }
//  else if(ptr1 -> coeff > ptr2 -> coeff)
//  {
//  start3 = add_node(start3, ptr1 -> num, ptr1 -> coeff);
//  ptr1 = ptr1 -> next;
//  }
//  else if(ptr1 -> coeff < ptr2 -> coeff)
//  {
//  start3 = add_node(start3, ptr2 -> num, ptr2 -> coeff);
//  ptr2 = ptr2 -> next;
//  }
// }
// if(ptr1 == NULL)
// {
//  while(ptr2 != NULL)
//  {
//  start3 = add_node(start3, ptr2 -> num, ptr2 -> coeff);
//  ptr2 = ptr2 -> next;
//  }
// }
// if(ptr2 == NULL)
// {
//  while(ptr1 != NULL)
//  {
//  start3 = add_node(start3, ptr1 -> num, ptr1 -> coeff);
//  ptr1 = ptr1 -> next;
//  }
// }
// return start3;
// }
// struct node *sub_poly(struct node *start1, struct node *start2, struct node *start4)
// {
// struct node *ptr1, *ptr2;
// int sub_num, c;
// ptr1 = start1, ptr2 = start2;
// do
// {
//  if(ptr1 -> coeff == ptr2 -> coeff)
//  {
//  sub_num = ptr1 -> num - ptr2 -> num;
//  start4 = add_node(start4, sub_num, ptr1 -> coeff);
//  ptr1 = ptr1 -> next;
//  ptr2 = ptr2 -> next;
//  }
//  else if(ptr1 -> coeff > ptr2 -> coeff)
//  {
//  start4 = add_node(start4, ptr1 -> num, ptr1 -> coeff);
//  ptr1 = ptr1 -> next;
//  }
//  else if(ptr1 -> coeff < ptr2 -> coeff)
//  {
//   start4 = add_node(start4, ptr2 -> num, ptr2 -> coeff);
//   ptr2 = ptr2 -> next;
//   }
//  }while(ptr1 != NULL || ptr2 != NULL);
//  if(ptr1 == NULL)
//  {
//   while(ptr2 != NULL)
//   {
//   start4 = add_node(start4, ptr2 -> num, ptr2 -> coeff);
//   ptr2 = ptr2 -> next;
//   }
//  }
//  if(ptr2 == NULL)
//  {
//   while(ptr1 != NULL)
//   {
//   start4 = add_node(start4, ptr1 -> num, ptr1 -> coeff);
//   ptr1 = ptr1 -> next;
//   }
//  }
//  return start4;
//  }
//  struct node *add_node(struct node *start, int n, int c)
//  {
//  struct node *ptr, *new_node;
//  if(start == NULL)
//  {
//   new_node = (struct node *)malloc(sizeof(struct node));
//   new_node -> num = n;
//   new_node -> coeff = c;
//   new_node -> next = NULL;
//   start = new_node;
//  }
//  else
//  {
//   ptr = start;
//   while(ptr -> next != NULL)
//   ptr = ptr -> next;
//   new_node = (struct node *)malloc(sizeof(struct node));
//   new_node -> num = n;
//   new_node -> coeff = c;
//   new_node -> next = NULL;
//   ptr -> next = new_node;
//  }
//  return start;
//  }
//
// programming Exercise
// 1.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node
//{
//    int num;
//    struct node *next;
//};
//
//void create(struct node **);
//void dup_delete(struct node **);
//void release(struct node **);
//void display(struct node *);
//
//int main()
//{
//    struct node *p = NULL;
//    struct node_occur *head = NULL;
//    int n;
//
//    printf("Enter data into the list\n");
//    create(&p);
//    printf("Displaying the nodes in the list:\n");
//    display(p);
//    printf("Deleting duplicate elements in the list...\n");
//    dup_delete(&p);
//    printf("Displaying non-deleted nodes in the list:\n");
//    display(p);
//    release(&p);
//
//    return 0;
//}
//
//void dup_delete(struct node **head)
//{
//    struct node *p, *q, *prev, *temp;
//
//    p = q = prev = *head;
//    q = q->next;
//    while (p != NULL)
//    {
//        while (q != NULL && q->num != p->num)
//        {
//            prev = q;
//            q = q->next;
//        }
//        if (q == NULL)
//        {
//            p = p->next;
//            if (p != NULL)
//            {
//                q = p->next;
//            }
//        }
//        else if (q->num == p->num)
//        {
//            prev->next = q->next;
//            temp = q;
//            q = q->next;
//            free(temp);
//        }
//    }
//}
//
//void create(struct node **head)
//{
//    int c, ch;
//    struct node *temp, *rear;
//
//    do
//    {
//        printf("Enter number: ");
//        scanf("%d", &c);
//        temp = (struct node *)malloc(sizeof(struct node));
//        temp->num = c;
//        temp->next = NULL;
//        if (*head == NULL)
//        {
//            *head = temp;
//        }
//        else
//        {
//            rear->next = temp;
//        }
//        rear = temp;
//        printf("Do you wish to continue [1/0]: ");
//        scanf("%d", &ch);
//    } while (ch != 0);
//    printf("\n");
//}
//
//void display(struct node *p)
//{
//    while (p != NULL)
//    {
//        printf("%d\t", p->num);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//void release(struct node **head)
//{
//    struct node *temp = *head;
//    *head = (*head)->next;
//    while ((*head) != NULL)
//    {
//        free(temp);
//        temp = *head;
//        (*head) = (*head)->next;
//    }
//}
//2.
//#include <stdio.h>
//#include <stdlib.h>
//
///* Link list node */
//struct Node {
//    int data;
//    struct Node* next;
//};
//
///* Given a reference (pointer to pointer) to the head
//  of a list and an int, push a new node on the front
//  of the list. */
//void push(struct Node** head_ref, int new_data)
//{
//    /* allocate node */
//    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//
//    /* put in the data  */
//    new_node->data = new_data;
//
//    /* link the old list off the new node */
//    new_node->next = (*head_ref);
//
//    /* move the head to point to the new node */
//    (*head_ref) = new_node;
//}
//
///* Counts the no. of occurrences of a node
//   (search_for) in a linked list (head)*/
//int count(struct Node* head, int search_for)
//{
//    struct Node* current = head;
//    int count = 0;
//    while (current != NULL) {
//        if (current->data == search_for)
//            count++;
//        current = current->next;
//    }
//    return count;
//}
//
///* Driver program to test count function*/
//int main()
//{
//    /* Start with the empty list */
//    struct Node* head = NULL;
//
//    /* Use push() to construct below list
//     1->2->1->3->1  */
//    push(&head, 1);
//    push(&head, 3);
//    push(&head, 1);
//    push(&head, 2);
//    push(&head, 1);
//
//    /* Check the count function */
//    printf("count of 1 is %d", count(head, 1));
//    return 0;
//}
// 3.
//#include<stdio.h>
//#include<stdlib.h>
//
//// Linked list node
//struct node
//{
//    int data;
//    struct node* next;
//};
//
//// Function to create a new node
//// with given data
//struct node *newNode(int data)
//{
//    struct node *new_node = (struct node *) malloc(sizeof(struct node));
//    new_node->data = data;
//    new_node->next = NULL;
//    return new_node;
//}
//
//// Function to insert a node at the
//// beginning of the Linked List
//void push(struct node** head_ref, int new_data)
//{
//    // allocate node
//    struct node* new_node = newNode(new_data);
//
//    // link the old list off the new node
//    new_node->next = (*head_ref);
//
//    // move the head to point to the new node
//    (*head_ref) = new_node;
//}
//
//// Multiply contents of two linked lists
//long multiplyTwoLists (struct node* first, struct node* second)
//{
//    int num1 = 0, num2 = 0;
//
//    // Generate numbers from linked lists
//    while (first || second)
//    {
//        if (first)
//        {
//            num1 = num1*10 + first->data;
//            first = first->next;
//        }
//        if (second)
//        {
//            num2 = num2*10 + second->data;
//            second = second->next;
//        }
//    }
//
//    // Return multiplication of
//    // two numbers
//    return num1*num2;
//}
//
//// A utility function to print a linked list
//void printList(struct node *node)
//{
//    while(node != NULL)
//    {
//        printf("%d", node->data);
//        if(node->next)
//            printf("->");
//        node = node->next;
//    }
//    printf("\n");
//}
//
//// Driver program to test above function
//int main(void)
//{
//    struct node* first = NULL;
//    struct node* second = NULL;
//
//    // create first list 9->4->6
//    push(&first, 6);
//    push(&first, 4);
//    push(&first, 9);
//    printf("First List is: ");
//    printList(first);
//
//    // create second list 8->4
//    push(&second, 4);
//    push(&second, 8);
//    printf("Second List is: ");
//    printList(second);
//
//    // Multiply the two lists and see result
//    printf("Result is: ");
//    printf("%ld", multiplyTwoLists(first, second));
//
//    return 0;
//}
// 4.
//#include<stdio.h>
//struct node
//{
//int data;
//struct node *link;
//}*start;
//    void create(int);
//void disp(void);
//void count(void);
//int main()
//{
//int ch,n,i,m,a,pos;
//start=NULL;
//do
//{
//    printf("\n\nMENU\n\n");
//    printf("\n1.CREATE\n");
//    printf("\n2.DISPLAY\n");
//    printf("\n3.COUNT\n");
//    printf("\n4.EXIT\n");
//    printf("\nENTER UR CHOICE\n");
//    scanf("%d",&ch);
//    switch(ch)
//{
//case 1:
//printf("\n\nHOW MANY NODES U WANT TO CREATE\n");
//scanf("%d",&n);
//for(i=0;i<n;i++)
//{
//printf("\nENTER THE DATA");
//scanf("%d",&m);
//create(m);
//}
//break;
//case 2:
//count();
//break;
//case 3:
//disp();
//break;
//}
//}
//while(ch!=4);
//}
//void count()
//{
//struct node *q;
//int nonz=0,eno=0,ono=0;
//q=start;
//while(q!=NULL)
//{
//if(q->data>0)
//{
//nonz++;
//}
//if(q->data%2==0)
//{
//eno++;
//}
//else
//{
//ono++;
//}
//
//q=q->link;
//}
//printf("\n\nPOSITVE NO ARE %d EVEN NO ARE %d ODD NO ARE %d",nonz,eno,ono);
//}
//
//void create(int data)
//{
//struct node *q,*tmp;
//tmp=(struct node *)malloc(sizeof(struct node));
//tmp->data=data;
//tmp->link=NULL;
//if(start==NULL)
//{
//start=tmp;
//}
//else
//{
//q=start;
//while(q->link!=NULL)
//q=q->link;
//q->link=tmp;
//}
//}
//void disp()
//{
//struct node *q;
//if(start==NULL)
//{
//printf("\n\nLIST IS EMPTY");
//}
//else
//{
//q=start;
//while(q!=NULL)
//{
//printf("%d->",q->data);
//q=q->link;
//}
//printf("NULL");
//}
//}
// 5.
// 6.
//#include<stdio.h>
//#include<stdlib.h>
//
///* structure for a node */
//struct Node
//{
//    int data;
//    struct Node *next;
//};
//
///* Function to insert a node at the beginning of a Circular
//   linked list */
//void push(struct Node **head_ref, int data)
//{
//    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
//    struct Node *temp = *head_ref;
//    ptr1->data = data;
//    ptr1->next = *head_ref;
//
//    /* If linked list is not NULL then set the next of last node */
//    if (*head_ref != NULL)
//    {
//        while (temp->next != *head_ref)
//            temp = temp->next;
//        temp->next = ptr1;
//    }
//    else
//        ptr1->next = ptr1; /*For the first node */
//
//    *head_ref = ptr1;
//}
//
///* Function to print nodes in a given Circular linked list */
//void printList(struct Node *head)
//{
//    struct Node *temp = head;
//    if (head != NULL)
//    {
//        do
//        {
//            printf("%d ", temp->data);
//            temp = temp->next;
//        }
//        while (temp != head);
//    }
//}
//
///* Driver program to test above functions */
//int main()
//{
//    /* Initialize lists as empty */
//    struct Node *head = NULL;
//
//    /* Created linked list will be 11->2->56->12 */
//    push(&head, 12);
//    push(&head, 56);
//    push(&head, 2);
//    push(&head, 11);
//
//    printf("Contents of Circular Linked List\n ");
//    printList(head);
//
//    return 0;
//}
// 7.
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
///* Link list node */
//struct Node
//{
//    int data;
//    struct Node* next;
//};
//
///* pull off the front node of the source and put it in dest */
//void MoveNode(struct Node** destRef, struct Node** sourceRef);
//
///* Takes two lists sorted in increasing order, and splices
//   their nodes together to make one big sorted list which
//   is returned.  */
//struct Node* SortedMerge(struct Node* a, struct Node* b)
//{
//    /* a dummy first node to hang the result on */
//    struct Node dummy;
//
//    /* tail points to the last result node  */
//    struct Node* tail = &dummy;
//
//    /* so tail->next is the place to add new nodes
//      to the result. */
//    dummy.next = NULL;
//    while (1)
//    {
//        if (a == NULL)
//        {
//            /* if either list runs out, use the
//               other list */
//            tail->next = b;
//            break;
//        }
//        else if (b == NULL)
//        {
//            tail->next = a;
//            break;
//        }
//        if (a->data <= b->data)
//            MoveNode(&(tail->next), &a);
//        else
//            MoveNode(&(tail->next), &b);
//
//        tail = tail->next;
//    }
//    return(dummy.next);
//}
//
///* UTILITY FUNCTIONS */
///* MoveNode() function takes the node from the front of the
//   source, and move it to the front of the dest.
//   It is an error to call this with the source list empty.
//
//   Before calling MoveNode():
//   source == {1, 2, 3}
//   dest == {1, 2, 3}
//
//   Affter calling MoveNode():
//   source == {2, 3}
//   dest == {1, 1, 2, 3} */
//void MoveNode(struct Node** destRef, struct Node** sourceRef)
//{
//    /* the front source node  */
//    struct Node* newNode = *sourceRef;
//    assert(newNode != NULL);
//
//    /* Advance the source pointer */
//    *sourceRef = newNode->next;
//
//    /* Link the old dest off the new node */
//    newNode->next = *destRef;
//
//    /* Move dest to point to the new node */
//    *destRef = newNode;
//}
//
//
///* Function to insert a node at the beginging of the
//   linked list */
//void push(struct Node** head_ref, int new_data)
//{
//    /* allocate node */
//    struct Node* new_node =
//        (struct Node*) malloc(sizeof(struct Node));
//
//    /* put in the data  */
//    new_node->data  = new_data;
//
//    /* link the old list off the new node */
//    new_node->next = (*head_ref);
//
//    /* move the head to point to the new node */
//    (*head_ref)    = new_node;
//}
//
///* Function to print nodes in a given linked list */
//void printList(struct Node *node)
//{
//    while (node!=NULL)
//    {
//        printf("%d ", node->data);
//        node = node->next;
//    }
//}
//
///* Drier program to test above functions*/
//int main()
//{
//    /* Start with the empty list */
//    struct Node* res = NULL;
//    struct Node* a = NULL;
//    struct Node* b = NULL;
//
//    /* Let us create two sorted linked lists to test
//      the functions
//       Created lists, a: 5->10->15,  b: 2->3->20 */
//    push(&a, 15);
//    push(&a, 10);
//    push(&a, 5);
//
//    push(&b, 20);
//    push(&b, 3);
//    push(&b, 2);
//
//    /* Remove duplicates from linked list */
//    res = SortedMerge(a, b);
//
//    printf("Merged Linked List is: \n");
//    printList(res);
//
//    return 0;
//}
// 8.
//#include <stdio.h>
//
////Represent a node of the doubly linked list
//
//struct node{
//    int data;
//    struct node *previous;
//    struct node *next;
//};
//
////Represent the head and tail of the doubly linked list
//struct node *head, *tail = NULL;
//
////addNode() will add a node to the list
//void addNode(int data) {
//    //Create a new node
//    struct node *newNode = (struct node*)malloc(sizeof(struct node));
//    newNode->data = data;
//
//    //If list is empty
//    if(head == NULL) {
//        //Both head and tail will point to newNode
//        head = tail = newNode;
//        //head's previous will point to NULL
//        head->previous = NULL;
//        //tail's next will point to NULL, as it is the last node of the list
//        tail->next = NULL;
//    }
//    else {
//        //newNode will be added after tail such that tail's next will point to newNode
//        tail->next = newNode;
//        //newNode's previous will point to tail
//        newNode->previous = tail;
//        //newNode will become new tail
//        tail = newNode;
//        //As it is last node, tail's next will point to NULL
//        tail->next = NULL;
//    }
//}
//
////sortList() will sort the given list in ascending order
//void sortList() {
//    struct node *current = NULL, *index = NULL;
//    int temp;
//    //Check whether list is empty
//    if(head == NULL) {
//        return;
//    }
//    else {
//        //Current will point to head
//        for(current = head; current->next != NULL; current = current->next) {
//            //Index will point to node next to current
//            for(index = current->next; index != NULL; index = index->next) {
//                //If current's data is greater than index's data, swap the data of current and index
//                if(current->data > index->data) {
//                    temp = current->data;
//                    current->data = index->data;
//                    index->data = temp;
//                }
//            }
//        }
//    }
//}
//
////display() will print out the nodes of the list
//void display() {
//    //Node current will point to head
//    struct node *current = head;
//    if(head == NULL) {
//        printf("List is empty\n");
//        return;
//    }
//    while(current != NULL) {
//        //Prints each node by incrementing pointer.
//        printf("%d ",current->data);
//        current = current->next;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    //Add nodes to the list
//    addNode(7);
//    addNode(1);
//    addNode(4);
//    addNode(5);
//    addNode(2);
//
//    //Displaying original list
//    printf("Original list: \n");
//    display();
//
//    //Sorting list
//    sortList();
//
//    //Displaying sorted list
//    printf("Sorted list: \n");
//    display();
//
//    return 0;
//}
// 9.
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
///* Link list node */
//struct Node
//{
//    int data;
//    struct Node* next;
//};
//
///* pull off the front node of the source and put it in dest */
//void MoveNode(struct Node** destRef, struct Node** sourceRef);
//
///* Takes two lists sorted in increasing order, and splices
//   their nodes together to make one big sorted list which
//   is returned.  */
//struct Node* SortedMerge(struct Node* a, struct Node* b)
//{
//    /* a dummy first node to hang the result on */
//    struct Node dummy;
//
//    /* tail points to the last result node  */
//    struct Node* tail = &dummy;
//
//    /* so tail->next is the place to add new nodes
//      to the result. */
//    dummy.next = NULL;
//    while (1)
//    {
//        if (a == NULL)
//        {
//            /* if either list runs out, use the
//               other list */
//            tail->next = b;
//            break;
//        }
//        else if (b == NULL)
//        {
//            tail->next = a;
//            break;
//        }
//        if (a->data <= b->data)
//            MoveNode(&(tail->next), &a);
//        else
//            MoveNode(&(tail->next), &b);
//
//        tail = tail->next;
//    }
//    return(dummy.next);
//}
//
///* UTILITY FUNCTIONS */
///* MoveNode() function takes the node from the front of the
//   source, and move it to the front of the dest.
//   It is an error to call this with the source list empty.
//
//   Before calling MoveNode():
//   source == {1, 2, 3}
//   dest == {1, 2, 3}
//
//   Affter calling MoveNode():
//   source == {2, 3}
//   dest == {1, 1, 2, 3} */
//void MoveNode(struct Node** destRef, struct Node** sourceRef)
//{
//    /* the front source node  */
//    struct Node* newNode = *sourceRef;
//    assert(newNode != NULL);
//
//    /* Advance the source pointer */
//    *sourceRef = newNode->next;
//
//    /* Link the old dest off the new node */
//    newNode->next = *destRef;
//
//    /* Move dest to point to the new node */
//    *destRef = newNode;
//}
//
//
///* Function to insert a node at the beginging of the
//   linked list */
//void push(struct Node** head_ref, int new_data)
//{
//    /* allocate node */
//    struct Node* new_node =
//        (struct Node*) malloc(sizeof(struct Node));
//
//    /* put in the data  */
//    new_node->data  = new_data;
//
//    /* link the old list off the new node */
//    new_node->next = (*head_ref);
//
//    /* move the head to point to the new node */
//    (*head_ref)    = new_node;
//}
//
///* Function to print nodes in a given linked list */
//void printList(struct Node *node)
//{
//    while (node!=NULL)
//    {
//        printf("%d ", node->data);
//        node = node->next;
//    }
//}
//
///* Drier program to test above functions*/
//int main()
//{
//    /* Start with the empty list */
//    struct Node* res = NULL;
//    struct Node* a = NULL;
//    struct Node* b = NULL;
//
//    /* Let us create two sorted linked lists to test
//      the functions
//       Created lists, a: 5->10->15,  b: 2->3->20 */
//    push(&a, 15);
//    push(&a, 10);
//    push(&a, 5);
//
//    push(&b, 20);
//    push(&b, 3);
//    push(&b, 2);
//
//    /* Remove duplicates from linked list */
//    res = SortedMerge(a, b);
//
//    printf("Merged Linked List is: \n");
//    printList(res);
//
//    return 0;
//}
// 10.
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
///* Link list node */
//struct Node
//{
//    int data;
//    struct Node* next;
//};
//
///* Function to delete the entire linked list */
//void deleteList(struct Node** head_ref)
//{
//   /* deref head_ref to get the real head */
//   struct Node* current = *head_ref;
//   struct Node* next;
//
//   while (current != NULL)
//   {
//       next = current->next;
//       free(current);
//       current = next;
//   }
//
//   /* deref head_ref to affect the real head back
//      in the caller. */
//   *head_ref = NULL;
//}
//
///* Given a reference (pointer to pointer) to the head
//  of a list and an int, push a new node on the front
//  of the list. */
//void push(struct Node** head_ref, int new_data)
//{
//    /* allocate node */
//    struct Node* new_node =
//            (struct Node*) malloc(sizeof(struct Node));
//
//    /* put in the data  */
//    new_node->data  = new_data;
//
//    /* link the old list off the new node */
//    new_node->next = (*head_ref);
//
//    /* move the head to point to the new node */
//    (*head_ref)    = new_node;
//}
//
///* Driver program to test count function*/
//int main()
//{
//    /* Start with the empty list */
//    struct Node* head = NULL;
//
//    /* Use push() to construct below list
//     1->12->1->4->1  */
//    push(&head, 1);
//    push(&head, 4);
//    push(&head, 1);
//    push(&head, 12);
//    push(&head, 1);
//
//    printf("\n Deleting linked list");
//    deleteList(&head);
//
//    printf("\n Linked list deleted");
//}
// 11.
//#include <stdio.h>
//#include <stdlib.h>
//
///* Link list node */
//struct Node {
//    int data;
//    struct Node* next;
//};
//
///* Function to get the alternate
//   nodes of the linked list */
//void printAlternateNode(struct Node* head)
//{
//    int count = 0;
//
//    while (head != NULL) {
//
//        // when count is even print the nodes
//        if (count % 2 == 0)
//            printf(" %d ", head->data);
//
//        // count the nodes
//        count++;
//
//        // move on the next node.
//        head = head->next;
//    }
//}
//
//// Function to push node at head
//void push(struct Node** head_ref, int new_data)
//{
//    struct Node* new_node =
//          (struct Node*)malloc(sizeof(struct Node));
//    new_node->data = new_data;
//    new_node->next = (*head_ref);
//    (*head_ref) = new_node;
//}
//
//// Driver code
//int main()
//{
//    /* Start with the empty list */
//    struct Node* head = NULL;
//
//    /* Use push() function to construct
//       the below list 8 -> 23 -> 11 -> 29 -> 12 */
//    push(&head, 12);
//    push(&head, 29);
//    push(&head, 11);
//    push(&head, 23);
//    push(&head, 8);
//
//    printAlternateNode(head);
//
//    return 0;
//}
// 12.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//   int data;
//   struct node *prev;
//   struct node *next;
//};
//
//struct node *list = NULL;
//struct node *list_last = NULL;
//
//struct node *even = NULL;
//struct node *even_last = NULL;
//
//struct node *odd = NULL;
//struct node *odd_last = NULL;
//
//struct node *current = NULL;
//
////Create Linked List
//void insert(int data) {
//   // Allocate memory for new node;
//   struct node *link = (struct node*) malloc(sizeof(struct node));
//
//   link->data = data;
//   link->prev = NULL;
//   link->next = NULL;
//
//   // If head is empty, create new list
//   if(data%2 == 0) {
//      if(even == NULL) {
//         even = link;
//         return;
//      } else {
//         current = even;
//
//         while(current->next != NULL)
//            current = current->next;
//
//         // Insert link at the end of the list
//         current->next = link;
//         even_last = link;
//         link->prev = current;
//      }
//   } else {
//      if(odd == NULL) {
//         odd = link;
//         return;
//      } else {
//         current = odd;
//
//         while(current->next!=NULL)
//            current = current->next;
//
//         // Insert link at the end of the list
//         current->next = link;
//         odd_last = link;
//         link->prev = current;
//      }
//   }
//}
//
////display the list
//void print_backward(struct node *head) {
//   struct node *ptr = head;
//
//   printf("\n[last] <=>");
//   //start from the beginning
//   while(ptr != NULL) {
//      printf(" %d <=>",ptr->data);
//      ptr = ptr->prev;
//   }
//
//   printf(" [head]\n");
//}
//
////display the list
//void printList(struct node *head) {
//   struct node *ptr = head;
//
//   printf("\n[head] <=>");
//   //start from the beginning
//   while(ptr != NULL) {
//      printf(" %d <=>",ptr->data);
//      ptr = ptr->next;
//   }
//
//   printf(" [last]\n");
//}
//
//void combine() {
//   struct node *link;
//
//   list = even;
//   link = list;
//
//   while(link->next!= NULL) {
//      link = link->next;
//   }
//
//   link->next = odd;
//   odd->prev = link;
//
//   // assign link_last to last node of new list
//
//   while(link->next!= NULL) {
//      link = link->next;
//   }
//
//   list_last = link;
//}
//
//int main() {
//   int i;
//
//   for(i = 1; i <= 10; i++)
//      insert(i);
//
//   printf("Even : ");
//   printList(even);
//
//   printf("Even (R): ");
//   print_backward(even_last);
//
//   printf("Odd  : ");
//   printList(odd);
//
//   printf("Odd (R) : ");
//   print_backward(odd_last);
//
//   combine();
//
//   printf("Combined List :\n");
//   printList(list);
//
//   printf("Combined List (R):\n");
//   print_backward(list_last);
//
//   return 0;
//}
// 13.
//#include <stdio.h>
//#include <stdlib.h>
//
///* a node of the doubly linked list */
//struct Node {
//    int data;
//    struct Node* next;
//    struct Node* prev;
//};
//
///* Function to delete a node in a Doubly Linked List.
//   head_ref --> pointer to head node pointer.
//   del  -->  pointer to node to be deleted. */
//void deleteNode(struct Node** head_ref, struct Node* del)
//{
//    /* base case */
//    if (*head_ref == NULL || del == NULL)
//        return;
//
//    /* If node to be deleted is head node */
//    if (*head_ref == del)
//        *head_ref = del->next;
//
//    /* Change next only if node to be deleted is NOT the last node */
//    if (del->next != NULL)
//        del->next->prev = del->prev;
//
//    /* Change prev only if node to be deleted is NOT the first node */
//    if (del->prev != NULL)
//        del->prev->next = del->next;
//
//    /* Finally, free the memory occupied by del*/
//    free(del);
//    return;
//}
//
///* UTILITY FUNCTIONS */
///* Function to insert a node at the beginning of the Doubly Linked List */
//void push(struct Node** head_ref, int new_data)
//{
//    /* allocate node */
//    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//
//    /* put in the data  */
//    new_node->data = new_data;
//
//    /* since we are adding at the beginning,
//    prev is always NULL */
//    new_node->prev = NULL;
//
//    /* link the old list off the new node */
//    new_node->next = (*head_ref);
//
//    /* change prev of head node to new node */
//    if ((*head_ref) != NULL)
//        (*head_ref)->prev = new_node;
//
//    /* move the head to point to the new node */
//    (*head_ref) = new_node;
//}
//
///* Function to print nodes in a given doubly linked list
//   This function is same as printList() of singly linked list */
//void printList(struct Node* node)
//{
//    while (node != NULL) {
//        printf("%d ", node->data);
//        node = node->next;
//    }
//}
//
///* Driver program to test above functions*/
//int main()
//{
//    /* Start with the empty list */
//    struct Node* head = NULL;
//
//    /* Let us create the doubly linked list 10<->8<->4<->2 */
//    push(&head, 2);
//    push(&head, 4);
//    push(&head, 8);
//    push(&head, 10);
//
//    printf("\n Original Linked list ");
//    printList(head);
//
//    /* delete nodes from the doubly linked list */
//    deleteNode(&head, head); /*delete first node*/
//    deleteNode(&head, head->next); /*delete middle node*/
//    deleteNode(&head, head->next); /*delete last node*/
//
//    /* Modified linked list will be NULL<-8->NULL */
//    printf("\n Modified Linked list ");
//    printList(head);
//
//    getchar();
//}
// 14.
// 15.
//#include <stdio.h>
//#include <stdlib.h>
//
///* Link list node */
//struct Node {
//    int data;
//    struct Node* next;
//};
//
///* Function to reverse the linked list */
//static void reverse(struct Node** head_ref)
//{
//    struct Node* prev = NULL;
//    struct Node* current = *head_ref;
//    struct Node* next = NULL;
//    while (current != NULL) {
//        // Store next
//        next = current->next;
//
//        // Reverse current node's pointer
//        current->next = prev;
//
//        // Move pointers one position ahead.
//        prev = current;
//        current = next;
//    }
//    *head_ref = prev;
//}
//
///* Function to push a node */
//void push(struct Node** head_ref, int new_data)
//{
//    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//    new_node->data = new_data;
//    new_node->next = (*head_ref);
//    (*head_ref) = new_node;
//}
//
///* Function to print linked list */
//void printList(struct Node* head)
//{
//    struct Node* temp = head;
//    while (temp != NULL) {
//        printf("%d  ", temp->data);
//        temp = temp->next;
//    }
//}
//
///* Driver program to test above function*/
//int main()
//{
//    /* Start with the empty list */
//    struct Node* head = NULL;
//
//    push(&head, 20);
//    push(&head, 4);
//    push(&head, 15);
//    push(&head, 85);
//
//    printf("Given linked list\n");
//    printList(head);
//    reverse(&head);
//    printf("\nReversed Linked list \n");
//    printList(head);
//    getchar();
//}
