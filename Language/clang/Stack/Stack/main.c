//
//  main.c
//  Stack
//
//  Created by 조민호 on 2020/04/30.
//  Copyright © 2020 조민호. All rights reserved.
//

// programming example
// 1.
//#include <stdio.h>
//#include <stdlib.h>
//#define MAX 3 // Altering this value changes size of stack created
//int st[MAX], top=-1;
//void push(int st[], int val);
//int pop(int st[]);
//int peek(int st[]);
//void display(int st[]);
//int main(int argc, char *argv[]) {
//    int val, option;
//    do
//    {
//        printf("\n *****MAIN MENU*****");
//        printf("\n 1. PUSH");
//        printf("\n 2. POP");
//        printf("\n 3. PEEK");
//        printf("\n 4. DISPLAY");
//        printf("\n 5. EXIT");
//        printf("\n Enter your option: ");
//        scanf("%d", &option);
//        switch(option)
//        {
//            case 1:
//                printf("\n Enter the number to be pushed on stack: ");
//                scanf("%d", &val);
//                push(st, val);
//                break;
//            case 2:
//                val = pop(st);
//                if(val != -1)
//                printf("\n The value deleted from stack is: %d", val);
//                break;
//            case 3:
//                val = peek(st);
//                if(val != -1)
//                printf("\n The value stored at top of stack is: %d", val);
//                break;
//            case 4:
//                display(st);
//                break;
//         }
//    }while(option != 5);
//    return 0;
//}
//void push(int st[], int val)
//{
//    if(top == MAX-1)
//    {
//        printf("\n STACK OVERFLOW");
//    }
//    else
//    {
//        top++;
//        st[top] = val;
//    }
//    }
//int pop(int st[])
//    {
//        int val;
//        if(top == -1)
//    {
//        printf("\n STACK UNDERFLOW");
//        return -1;
//    }
//    else
//    {
//        val = st[top];
//        top--;
//        return val;
//    }
//    }
//void display(int st[])
//{
//    int i;
//    if(top == -1)
//    printf("\n STACK IS EMPTY");
//    else
//{
//    for(i=top;i>=0;i--)
//    printf("\n %d",st[i]);
//    printf("\n"); // Added for formatting purposes
//}
//}
//int peek(int st[])
//{
//    if(top == -1)
//    {
//        printf("\n STACK IS EMPTY");
//        return -1;
//    }
//    else
//return (st[top]);
//}
//
// 2.
//#include <stdio.h>
//#include <stdlib.h>
//struct stack
//{
//    int data;
//    struct stack *next;
//};
//struct stack *top = NULL;
//struct stack *push(struct stack *, int);
//struct stack *display(struct stack *);
//struct stack *pop(struct stack *);
//int peek(struct stack *);
//int main(int argc, char *argv[]) {
//int val, option;
//do
//{
//     printf("\n *****MAIN MENU*****");
//     printf("\n 1. PUSH");
//     printf("\n 2. POP");
//     printf("\n 3. PEEK");
//     printf("\n 4. DISPLAY");
//     printf("\n 5. EXIT");
//     printf("\n Enter your option: ");
//     scanf("%d", &option);
//     switch(option)
// {
//     case 1:
//         printf("\n Enter the number to be pushed on stack: ");
//         scanf("%d", &val);
//         top = push(top, val);
//         break;
//     case 2:
//         top = pop(top);
//         break;
//     case 3:
//         val = peek(top);
//         if (val != -1)
//             printf("\n The value at the top of stack is: %d", val);
//         else
//             printf("\n STACK IS EMPTY");
//         break;
//     case 4:
//         top = display(top);
//         break;
// }
//} while(option != 5);
//    return 0;
//    }
//        struct stack *push(struct stack *top, int val)
//    {
//    struct stack *ptr;
//    ptr = (struct stack*)malloc(sizeof(struct stack));
//    ptr -> data = val;
//if(top == NULL)
//{
//     ptr -> next = NULL;
//     top = ptr;
//}
//    else
//{
//     ptr -> next = top;
//     top = ptr;
//}
//return top;
//}
//struct stack *display(struct stack *top)
//{
//struct stack *ptr;
//ptr = top;
//if(top == NULL)
//    printf("\n STACK IS EMPTY");
//    else
//{
//while(ptr != NULL)
// {
//     printf("\n %d", ptr -> data);
//     ptr = ptr -> next;
// }
//}
//return top;
//}
//struct stack *pop(struct stack *top)
//{
//struct stack *ptr;
//ptr = top;
//if(top == NULL)
//    printf("\n STACK UNDERFLOW");
//    else
//{
//     top = top -> next;
//     printf("\n The value being deleted is: %d", ptr -> data);
//     free(ptr);
//}
//return top;
//}
//int peek(struct stack *top)
//{
//if(top==NULL)
//    return -1;
//else
//    return top ->data;
//}
// 3.
//#include <stdio.h>
//#define MAX 10
//int stack[MAX],topA=-1,topB=MAX;
//void pushA(int val)
//    {
//    if(topA==topB-1)
//        printf("\n OVERFLOW");
//    else
//    {
//         topA+= 1;
//         stack[topA] = val;
//    }
//}
//int popA()
//{
//    int val;
//    if(topA==-1)
//    {
//         printf("\n UNDERFLOW");
//         val = -999;
//    }
//    else
//    {
//         val = stack[topA];
//         topA--;
//    }
//    return val;
//}
//void display_stackA()
//{
//    int i;
//    if(topA==-1)
//     printf("\n Stack A is Empty");
//    else
//{
//    for(i=topA;i>=0;i--)
//        printf("\t %d",stack[i]);
//}
//}
//void pushB(int val)
//{
//    if(topB-1==topA)
//        printf("\n OVERFLOW");
//    else
//{
//     topB -= 1;
//     stack[topB] = val;
//}
//}
//int popB()
//{
//        int val;
//        if(topB==MAX)
//    {
//         printf("\n UNDERFLOW");
//         val = -999;
//    }
//    else
//    {
//         val = stack[topB];
//         topB++;
//    }
//    return 0;
//}
//
//
//void display_stackB()
//{
//    int i;
//    if(topB==MAX)
//        printf("\n Stack B is Empty");
//    else
//    {
//         for(i=topB;i<MAX;i++)
//             printf("\t %d",stack[i]);
//    }
//}
//int main()
//{
//int option, val;
//do
//    {
//         printf("\n *****MENU*****");
//         printf("\n 1. PUSH IN STACK A");
//         printf("\n 2. PUSH IN STACK B");
//         printf("\n 3. POP FROM STACK A");
//         printf("\n 4. POP FROM STACK B");
//         printf("\n 5. DISPLAY STACK A");
//         printf("\n 6. DISPLAY STACK B");
//         printf("\n 7. EXIT");
//         printf("\n Enter your choice");
//         scanf("%d",&option);
//     switch(option)
//     {
//     case 1: printf("\n Enter the value to push on Stack A : ");
//         scanf("%d",&val);
//        pushA(val);
//        break;
//     case 2: printf("\n Enter the value to push on Stack B : ");
//         scanf("%d",&val);
//        pushB(val);
//        break;
//     case 3: val=popA();
//         if(val!=-999)
//         printf("\n The value popped from Stack A = %d",val);
//         break;
//    case 4: val=popB();
//         if(val!=-999)
//         printf("\n The value popped from Stack B = %d",val);
//         break;
//     case 5: printf("\n The contents of Stack A are : \n");
//         display_stackA();
//        break;
//     case 6: printf("\n The contents of Stack B are : \n");
//         display_stackB();
//        break;
//     }
//    }while(option!=7);
//}
//4.
//#include <stdio.h>
//int stk[10];
//int top=-1;
//int pop();
//void push(int);
//int main()
//{
//    int val, n, i,
//    arr[10];
//    printf("\n Enter the number of elements in the array : ");
//    scanf("%d", &n);
//    printf("\n Enter the elements of the array : ");
//    for(i=0;i<n;i++)
//         scanf("%d", &arr[i]);
//            for(i=0;i<n;i++)
//                 push(arr[i]);
//                for(i=0;i<n;i++)
//    {
//     val = pop();
//     arr[i] = val;
//    }
//    printf("\n The reversed array is : ");
//        for(i=0;i<n;i++)
//            printf("\n %d", arr[i]);
//    return 0;
//}
//void push(int val)
//{
//        stk[++top] = val;
//}
//int pop()
//{
//    return(stk[top--]);
//}
// 5.
//#include <stdio.h>
//#include <string.h>
//#define MAX 10
//int top = -1;
//int stk[MAX];
//void push(char);
//char pop(void);
//int main()
//{
//    char exp[MAX],temp;
//    int i, flag=1;
//    printf("Enter an expression : ");
//    gets(exp);
//    for(i=0;i<strlen(exp);i++)
//{
//     if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
//     push(exp[i]);
//     if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
//     if(top == -1)
//    flag=0;
//     else
//    {
//         temp=pop();
//         if(exp[i]==')' && (temp=='{' || temp=='['))
//        flag=0;
//         if(exp[i]=='}' && (temp=='(' || temp=='['))
//        flag=0;
//         if(exp[i]==']' && (temp=='(' || temp=='{'))
//        flag=0;
//     }
//    }
//    if(top>=0)
//    flag=0;
//    if(flag==1)
//     printf("\n Valid expression");
//    else
//     printf("\n Invalid expression");
//}
//void push(char c)
//{
//    if(top == (MAX-1))
//    printf("Stack Overflow\n");
//    else
//{
//     top=top+1;
//     stk[top] = c;
//}
//}
//char pop()
//{
//        if(top == -1)
//           printf("\n Stack Underflow");
//        else
//           return(stk[top--]);
//}
// 6.
//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//#define MAX 100
//char st[MAX];
//int top=-1;
//void push(char st[], char);
//char pop(char st[]);
//void InfixtoPostfix(char source[], char target[]);
//int getPriority(char);
//int main()
//{
//    char infix[100], postfix[100];
//    printf("\n Enter any infix expression : ");
//    gets(infix);
//    strcpy(postfix, "");
//    InfixtoPostfix(infix, postfix);
//    printf("\n The corresponding postfix expression is : ");
//    puts(postfix);
//    return 0;
//}
//void InfixtoPostfix(char source[], char target[])
//{
//    int i=0, j=0;
//    char temp;
//    strcpy(target, "");
//    while(source[i]!='\0')
//        {
//         if(source[i]=='(')
//         {
//             push(st, source[i]);
//             i++;
//         }
//            else if(source[i] == ')')
//         {
//         while((top!=-1) && (st[top]!='('))
//         {
//            target[j] = pop(st);
//            j++;
//         }
//         if(top==-1)
//         {
//             printf("\n INCORRECT EXPRESSION");
//             exit(1);
//         }
//             temp = pop(st);//remove left parenthesis
//             i++;
//         }
//            else if(isdigit(source[i]) || isalpha(source[i]))
//         {
//                target[j] = source[i];
//                j++;
//                i++;
//         }
//             else if (source[i] == '+' || source[i] == '-' || source[i] == '*' ||
//            source[i] == '/' || source[i] == '%')
//         {
//     while( (top!=-1) && (st[top]!= '(') && (getPriority(st[top]) > getPriority(source[i])))
//     {
//        target[j] = pop(st);
//        j++;
//     }
//         push(st, source[i]);
//         i++;
//     }
//         else
//         printf("\n INCORRECT ELEMENT IN EXPRESSION");
//         exit(1);
//    {
//    }
//    while ((top!=-1) && (st[top]!='('))
//    {
//        target[j] = pop(st);
//        j++;
//    }
//        target[j]='\0';
//    }
//int getPriority(char op)
//{
//    if(op=='/' || op == '*' || op=='%')
//     return 1;
//    else if(op=='+' || op=='-')
//    return 0;
//}
//void push(char st[], char val)
//{
//    if(top==MAX-1)
//     printf("\n STACK OVERFLOW");
//    else
//    {
//         top++;
//         st[top]=val;
//    }
//}
//    char pop(char st[])
//    {
//        char val=' ';
//        if(top==-1)
//         printf("\n STACK UNDERFLOW");
//    else
//    {
//         val=st[top];
//         top--;
//    }
//return val;
//}
//}
// 7.
//#include <stdio.h>
//#include <ctype.h>
//
//#define MAXSTACK 100
//#define POSTFIXSIZE 100
//
//int stack[MAXSTACK];
//int top = -1;
//
//void push(int item)
//{
//
//    if (top >= MAXSTACK - 1) {
//        printf("stack over flow");
//        return;
//    }
//    else {
//        top = top + 1;
//        stack[top] = item;
//    }
//}
//
//int pop()
//{
//    int item = 0;
//    if (top < 0) {
//        printf("stack under flow");
//    }
//    else {
//        item = stack[top];
//        top = top - 1;
//        return item;
//    }
//    return item;
//}
//
//void EvalPostfix(char postfix[])
//{
//
//    int i;
//    char ch;
//    int val;
//    int A, B;
//
//    for (i = 0; postfix[i] != ')'; i++) {
//        ch = postfix[i];
//        if (isdigit(ch)) {
//            push(ch - '0');
//        }
//        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//
//            A = pop();
//            B = pop();
//
//            switch (ch)
//            {
//            case '*':
//                val = B * A;
//                break;
//
//            case '/':
//                val = B / A;
//                break;
//
//            case '+':
//                val = B + A;
//                break;
//
//            case '-':
//                val = B - A;
//                break;
//            }
//
//            push(val);
//        }
//    }
//    printf(" \n Result of expression evaluation : %d \n", pop());
//}
//
//int main()
//{
//
//    int i;
//
//    char postfix[POSTFIXSIZE];
//    printf("ASSUMPTION: There are only four operators(*, /, +, -) in an expression and operand is single digit only.\n");
//    printf(" \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");
//
//
//    for (i = 0; i <= POSTFIXSIZE - 1; i++) {
//        scanf("%c", &postfix[i]);
//
//        if (postfix[i] == ')')
//        {
//            break;
//        }
//    }
//
//    EvalPostfix(postfix);
//
//    return 0;
//}
// 8.
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include <stdlib.h>
//#define MAX 20
//void push(int);
//char pop(void);
//void infix_to_prefix(void);
//int precedence (char);
//char stack[20],infix[20],prefix[20];
//int top = -1;
//
//int main()
//{
//    printf("\nINPUT THE INFIX EXPRESSION : ");
//    scanf("%s",infix);
//    infix_to_prefix();
//    return 0;
//}
//void push(int pos)
//{
//    if(top == MAX-1)
//    {
//        printf("\nSTACK OVERFLOW\n");
//    }
//    else {
//        top++;
//        stack[top] = infix[pos];
//    }}
//
//char pop()
//{
//    char ch;
//    if(top < 0)
//    {
//        printf("\nSTACK UNDERFLOW\n");
//        exit(0);
//    }
//    else
//    {
//        ch = stack[top];
//        stack[top] = '\0';
//        top--;
//        return(ch);
//    }
//    return 0;
//}
//
//
//void infix_to_prefix()
//{
//    int i = 0,j = 0;
//    while(infix[i] != '\0')
//    {
//        if(infix[i] >= 'a' && infix[i] <= 'z')
//        {
//            prefix[j] = infix[i];
//            j++;
//            i++;
//        }
//        else if(infix[i] == ')' || infix[i] == '}' || infix[i] == ']')
//        {
//            push(i);
//            i++;
//        }
//        else if(infix[i] == '(' || infix[i] == '{' || infix[i] == '[')
//        {
//            if(infix[i] == '(')
//            {
//                while(stack[top] != ')')
//                {
//                    prefix[j] = pop();
//                    j++;
//                }
//                pop();
//                i++;
//            }
//            else if(infix[i] == '[')
//            {
//                while(stack[top] != ']')
//                {
//                    prefix[j] = pop();
//                    j++;
//                }
//                pop();
//                i++;
//            }
//            else if(infix[i] == '{')
//            {
//                while(stack[top] != '}')
//                {
//                    prefix[j] = pop();
//                    j++;
//                }
//                pop();
//                i++;
//            }}
//        else
//        {
//
//            if(top == -1)
//            {
//                push(i);
//                i++;
//            }
//            else if( precedence(infix[i]) < precedence(stack[top]))
//            {
//                prefix[j] = pop();
//                j++;
//                while(precedence(stack[top]) > precedence(infix[i])){
//                    prefix[j] = pop();
//                    j++;
//                    if(top < 0) {
//                        break;
//                    }}
//                push(i);
//                i++;
//            }
//            else if(precedence(infix[i]) >= precedence(stack[top]))
//            {
//                push(i);
//                i++;
//            }}}
//    while(top != -1)
//    {
//        prefix[j] = pop();
//        j++;
//    }
//    prefix[j] = '\0';
//    printf("EQUIVALENT PREFIX NOTATION : %s ",prefix);
//}
//
//int precedence(char alpha)
//{
//    if(alpha == '+' || alpha =='-')
//    {
//        return(1);
//    }
//    if(alpha == '*' || alpha =='/')
//    {
//        return(2);
//    }
//    return 0;
//}
// 10.
//#include <stdio.h>
//int Fact(int);
//int main()
//{
//    int num, val;
//    printf("\n Enter the number: ");
//    scanf("%d", &num);
//    val = Fact(num);
//    printf("\n Factorial of %d = %d", num, val);
//    return 0;
//}
//int Fact(int n)
//{
//    if(n==1)
//        return 1;
//    else
//        return (n * Fact(n-1));
//}
// 11.
//#include <stdio.h>
//int GCD(int, int);
//int main()
//{
//    int num1, num2, res;
//    printf("\n Enter the two numbers: ");
//    scanf("%d %d", &num1, &num2);
//    res = GCD(num1, num2);
//    printf("\n GCD of %d and %d = %d", num1, num2, res);
//    return 0;
//}
//int GCD(int x, int y)
//{
//    int rem;
//    rem = x%y;
//    if(rem==0)
//        return y;
//    else
//        return (GCD(y, rem));
//}
// 12.
//#include <stdio.h>
//int exp_rec(int, int);
//int main()
//{
//    int num1, num2, res;
//    printf("\n Enter the two numbers: ");
//    scanf("%d %d", &num1, &num2);
//    res = exp_rec(num1, num2);
//    printf ("\n RESULT = %d", res);
//    return 0;
//}
//int exp_rec(int x, int y)
//{
//    if(y==0)
//        return 1;
//    else
//        return (x * exp_rec(x, y-1));
//}
// 13.
//#include <stdio.h>
//int Fibonacci(int);
//int main()
//{
//    int n, i = 0, res;
//    printf("Enter the number of terms\n");
//    scanf("%d",&n);
//    printf("Fibonacci series\n");
//    for(i = 0; i < n; i++ )
//    {
//        res = Fibonacci(i);
//            printf("%d\t",res);
//    }
//        return 0;
//    }
//    int Fibonacci(int n)
//    {
//        if ( n == 0 )
//            return 0;
//        else if ( n == 1 )
//            return 1;
//        else
//            return ( Fibonacci(n-1) + Fibonacci(n-2) );
//    }






//// Exercise 1.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node
//{
//    int info;
//    struct node *ptr;
//}*top,*top1,*temp;
//
//int topelement();
//void push(int data);
//void pop();
//void empty();
//void display();
//void destroy();
//void stack_count();
//void create();
//
//int count = 0;
//
//void main()
//{
//    int no, ch, e;
//
//    printf("\n 1 - Push");
//    printf("\n 2 - Pop");
//    printf("\n 3 - Top");
//    printf("\n 4 - Empty");
//    printf("\n 5 - Exit");
//    printf("\n 6 - Dipslay");
//    printf("\n 7 - Stack Count");
//    printf("\n 8 - Destroy stack");
//
//    create();
//
//    while (1)
//    {
//        printf("\n Enter choice : ");
//        scanf("%d", &ch);
//
//        switch (ch)
//        {
//        case 1:
//            printf("Enter data : ");
//            scanf("%d", &no);
//            push(no);
//            break;
//        case 2:
//            pop();
//            break;
//        case 3:
//            if (top == NULL)
//                printf("No elements in stack");
//            else
//            {
//                e = topelement();
//                printf("\n Top element : %d", e);
//            }
//            break;
//        case 4:
//            empty();
//            break;
//        case 5:
//            exit(0);
//        case 6:
//            display();
//            break;
//        case 7:
//            stack_count();
//            break;
//        case 8:
//            destroy();
//            break;
//        default :
//            printf(" Wrong choice, Please enter correct choice  ");
//            break;
//        }
//    }
//}
//
//void create()
//{
//    top = NULL;
//}
//
//void stack_count()
//{
//    printf("\n No. of elements in stack : %d", count);
//}
//
//void push(int data)
//{
//    if (top == NULL)
//    {
//        top =(struct node *)malloc(1*sizeof(struct node));
//        top->ptr = NULL;
//        top->info = data;
//    }
//    else
//    {
//        temp =(struct node *)malloc(1*sizeof(struct node));
//        temp->ptr = top;
//        temp->info = data;
//        top = temp;
//    }
//    count++;
//}
//
//void display()
//{
//    top1 = top;
//
//    if (top1 == NULL)
//    {
//        printf("Stack is empty");
//        return;
//    }
//
//    while (top1 != NULL)
//    {
//        printf("%d ", top1->info);
//        top1 = top1->ptr;
//    }
// }
//
//void pop()
//{
//    top1 = top;
//
//    if (top1 == NULL)
//    {
//        printf("\n Error : Trying to pop from empty stack");
//        return;
//    }
//    else
//        top1 = top1->ptr;
//    printf("\n Popped value : %d", top->info);
//    free(top);
//    top = top1;
//    count--;
//}
//
//int topelement()
//{
//    return(top->info);
//}
//
//void empty()
//{
//    if (top == NULL)
//        printf("\n Stack is empty");
//    else
//        printf("\n Stack is not empty with %d elements", count);
//}
//
//void destroy()
//{
//    top1 = top;
//
//    while (top1 != NULL)
//    {
//        top1 = top->ptr;
//        free(top);
//        top = top1;
//        top1 = top1->ptr;
//    }
//    free(top1);
//    top = NULL;
//
//    printf("\n All stack elements destroyed");
//    count = 0;
//}
//
// 2.
//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<string.h>
//
//#define SIZE 100
//
//
//char stack[SIZE];
//int top = -1;
//
//
//void push(char item)
//{
//    if(top >= SIZE-1)
//    {
//        printf("\nStack Overflow.");
//    }
//    else
//    {
//        top = top+1;
//        stack[top] = item;
//    }
//}
//
//char pop()
//{
//    char item ;
//
//    if(top <0)
//    {
//        printf("stack under flow: invalid infix expression");
//        getchar();
//        exit(1);
//    }
//    else
//    {
//        item = stack[top];
//        top = top-1;
//        return(item);
//    }
//}
//
//int is_operator(char symbol)
//{
//    if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
//    {
//        return 1;
//    }
//    else
//    {
//    return 0;
//    }
//}
//
//int precedence(char symbol)
//{
//    if(symbol == '^')
//    {
//        return(3);
//    }
//    else if(symbol == '*' || symbol == '/')
//    {
//        return(2);
//    }
//    else if(symbol == '+' || symbol == '-')
//    {
//        return(1);
//    }
//    else
//    {
//        return(0);
//    }
//}
//
//void InfixToPostfix(char infix_exp[], char postfix_exp[])
//{
//    int i, j;
//    char item;
//    char x;
//
//    push('(');
//    strcat(infix_exp,")");
//
//    i=0;
//    j=0;
//    item=infix_exp[i];
//
//    while(item != '\0')
//    {
//        if(item == '(')
//        {
//            push(item);
//        }
//        else if( isdigit(item) || isalpha(item))
//        {
//            postfix_exp[j] = item;
//            j++;
//        }
//        else if(is_operator(item) == 1)
//        {
//            x=pop();
//            while(is_operator(x) == 1 && precedence(x)>= precedence(item))
//            {
//                postfix_exp[j] = x;
//                j++;
//                x = pop();
//            }
//            push(x);
//            push(item);
//        }
//        else if(item == ')')
//        {
//            x = pop();
//            while(x != '(')
//            {
//                postfix_exp[j] = x;
//                j++;
//                x = pop();
//            }
//        }
//        else
//        {
//            printf("\nInvalid infix Expression.\n");
//            getchar();
//            exit(1);
//        }
//        i++;
//
//
//        item = infix_exp[i];
//    }
//    if(top>0)
//    {
//        printf("\nInvalid infix Expression.\n");
//        getchar();
//        exit(1);
//    }
//    if(top>0)
//    {
//        printf("\nInvalid infix Expression.\n");
//        getchar();
//        exit(1);
//    }
//
//
//    postfix_exp[j] = '\0';
//
//}
//
//int main()
//{
//    char infix[SIZE], postfix[SIZE];
//
//    printf("ASSUMPTION: The infix expression contains single letter variables and single digit constants only.\n");
//    printf("\nEnter Infix expression : ");
//    gets(infix);
//
//    InfixToPostfix(infix,postfix);
//    printf("Postfix Expression: ");
//    puts(postfix);
//
//    return 0;
//}
//
// 3.
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//#include <stdlib.h>
//#define MAX 20
//void push(int);
//char pop(void);
//void infix_to_prefix(void);
//int precedence (char);
//char stack[20],infix[20],prefix[20];
//int top = -1;
//
//int main()
//{
//    printf("\nINPUT THE INFIX EXPRESSION : ");
//    scanf("%s",infix);
//    infix_to_prefix();
//    return 0;
//}
//void push(int pos)
//{
//    if(top == MAX-1)
//    {
//        printf("\nSTACK OVERFLOW\n");
//    }
//    else {
//        top++;
//        stack[top] = infix[pos];
//    }}
//
//char pop()
//{
//    char ch;
//    if(top < 0)
//    {
//        printf("\nSTACK UNDERFLOW\n");
//        exit(0);
//    }
//    else
//    {
//        ch = stack[top];
//        stack[top] = '\0';
//        top--;
//        return(ch);
//    }
//    return 0;
//}
//
//
//void infix_to_prefix()
//{
//    int i = 0,j = 0;
//    while(infix[i] != '\0')
//    {
//        if(infix[i] >= 'a' && infix[i] <= 'z')
//        {
//            prefix[j] = infix[i];
//            j++;
//            i++;
//        }
//        else if(infix[i] == ')' || infix[i] == '}' || infix[i] == ']')
//        {
//            push(i);
//            i++;
//        }
//        else if(infix[i] == '(' || infix[i] == '{' || infix[i] == '[')
//        {
//            if(infix[i] == '(')
//            {
//                while(stack[top] != ')')
//                {
//                    prefix[j] = pop();
//                    j++;
//                }
//                pop();
//                i++;
//            }
//            else if(infix[i] == '[')
//            {
//                while(stack[top] != ']')
//                {
//                    prefix[j] = pop();
//                    j++;
//                }
//                pop();
//                i++;
//            }
//            else if(infix[i] == '{')
//            {
//                while(stack[top] != '}')
//                {
//                    prefix[j] = pop();
//                    j++;
//                }
//                pop();
//                i++;
//            }}
//        else
//        {
//
//            if(top == -1)
//            {
//                push(i);
//                i++;
//            }
//
//            else if( precedence(infix[i]) < precedence(stack[top]))
//            {
//                prefix[j] = pop();
//                j++;
//
//                while(precedence(stack[top]) > precedence(infix[i])){
//                    prefix[j] = pop();    // Pop the operator
//                    j++;
//                    if(top < 0) {
//                        break;
//                    }}
//                push(i);
//                i++;
//            }
//            else if(precedence(infix[i]) >= precedence(stack[top]))
//            {
//                push(i);
//                i++;
//            }}}
//    while(top != -1)
//    {
//        prefix[j] = pop();
//        j++;
//    }
//    prefix[j] = '\0';
//    printf("EQUIVALENT PREFIX NOTATION : %s ",prefix);
//}
//
//int precedence(char alpha)
//{
//    if(alpha == '+' || alpha =='-')
//    {
//        return(1);
//    }
//    if(alpha == '*' || alpha =='/')
//    {
//        return(2);
//    }
//    return 0;
//}
//4.
//#include <stdio.h>
//struct student {
//    char firstName[50];
//    int roll;
//    float marks;
//} s[10];
//
//int main() {
//    int i;
//    printf("Enter information of students:\n");
//
//    // storing information
//    for (i = 0; i < 5; ++i) {
//        s[i].roll = i + 1;
//        printf("\nFor roll number%d,\n", s[i].roll);
//        printf("Enter first name: ");
//        scanf("%s", s[i].firstName);
//        printf("Enter marks: ");
//        scanf("%f", &s[i].marks);
//    }
//    printf("Displaying Information:\n\n");
//
//    // displaying information
//    for (i = 0; i < 5; ++i) {
//        printf("\nRoll number: %d\n", i + 1);
//        printf("First name: ");
//        puts(s[i].firstName);
//        printf("Marks: %.1f", s[i].marks);
//        printf("\n");
//    }
//    return 0;
//}
// 5.
#include <stdio.h>
#define SIZE 10


int ar[SIZE];
int top1 = -1;
int top2 = SIZE;

void push_stack1 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[++top1] = data;
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}
void push_stack2 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[--top2] = data;
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}

void pop_stack1 ()
{
  if (top1 >= 0)
  {
    int popped_value = ar[top1--];
    printf ("%d is being popped from Stack 1\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}
void pop_stack2 ()
{
  if (top2 < SIZE)
  {
    int popped_value = ar[top2++];
    printf ("%d is being popped from Stack 2\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}

void print_stack1 ()
{
  int i;
  for (i = top1; i >= 0; --i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
void print_stack2 ()
{
  int i;
  for (i = top2; i < SIZE; ++i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}

int main()
{
  int ar[SIZE];
  int i;
  int num_of_ele;

  printf ("We can push a total of 10 values\n");



  for (i = 1; i <= 6; ++i)
  {
    push_stack1 (i);
    printf ("Value Pushed in Stack 1 is %d\n", i);
  }
  for (i = 1; i <= 4; ++i)
  {
    push_stack2 (i);
    printf ("Value Pushed in Stack 2 is %d\n", i);
  }

  print_stack1 ();
  print_stack2 ();

  printf ("Pushing Value in Stack 1 is %d\n", 11);
  push_stack1 (11);

  num_of_ele = top1 + 1;
  while (num_of_ele)
  {
    pop_stack1 ();
    --num_of_ele;
  }

  pop_stack1 ();

  return 0;
}

