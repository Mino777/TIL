//
//  main.c
//  efficientBinaryTree
//
//  Created by 조민호 on 2020/05/30.
//  Copyright © 2020 조민호. All rights reserved.
//
// Programming Example 1.
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//    int data;
//    struct node *left;
//    struct node *right;
//};
//
//struct node *tree;
//void create_node(struct node *);
//struct node *insertElement(struct node *, int);
//void preorderTraversal(struct node *);
//void inorderTraversal(struct node *);
//void postorderTraversal(struct node *);
//struct node *findSmallestElement(struct node *);
//struct node *findLargestElement(struct node *);
//struct node *deleteElement(struct node *, int);
//struct node *mirrorImage(struct node *);
//int totalNodes(struct node *);
//int totalExternalNodes(struct node *);
//int totalInternalNodes(struct node *);
//int Height(struct node *);
//struct node *deleteTree(struct node *);
//int main()
//{
//    int option, val;
//    struct node *ptr;
//    do
//    {
//        printf("\n ******MAIN MENU******* \n");
//        printf("\n 1. Insert Element");
//        printf("\n 2. Preorder Traversal");
//        printf("\n 3. Inorder Traversal");
//        printf("\n 4. Postorder Traversal");
//        printf("\n 5. Find the smallest element");
//        printf("\n 6. Find the largest element");
//        printf("\n 7. Delete an element");
//        printf("\n 8. Count the total number of nodes");
//        printf("\n 9. Count the total number of external nodes");
//        printf("\n 10. Count the total number of internal nodes");
//        printf("\n 11. Determine the height of the tree");
//        printf("\n 12. Find the mirror image of the tree");
//        printf("\n 13. Delete the tree");
//        printf("\n 14. Exit");
//        printf("\n\n Enter your option : ");
//        scanf("%d", &option);
//        switch(option)
//         {
//            case 1:
//            printf("\n Enter the value of the new node : ");
//            scanf("%d", &val);
//            tree = insertElement(tree, val);
//            break;
//            case 2:
//            printf("\n The elements of the tree are : \n");
//            preorderTraversal(tree);
//            break;
//            case 3:
//            printf("\n The elements of the tree are : \n");
//            inorderTraversal(tree);
//            break;
//            case 4:
//            printf("\n The elements of the tree are : \n");
//            postorderTraversal(tree);
//            break;
//            case 5:
//            ptr = findSmallestElement(tree);
//            printf("\n Smallest element is :%d",ptr->data);
//            break;
//            case 6:
//            ptr = findLargestElement(tree);
//            printf("\n Largest element is : %d", ptr->data);
//            break;
//            case 7:
//            printf("\n Enter the element to be deleted : ");
//            scanf("%d", &val);
//            tree = deleteElement(tree, val);
//            break;
//            case 8:
//            printf("\n Total no. of nodes = %d", totalNodes(tree));
//            break;
//            case 9:
//            printf("\n Total no. of external nodes = %d",
//            totalExternalNodes(tree));
//            break;
//            case 10:
//            printf("\n Total no. of internal nodes = %d",
//            totalInternalNodes(tree));
//            break;
//            case 11:
//            printf("\n The height of the tree = %d",Height(tree));
//            break;
//            case 12:
//            tree = mirrorImage(tree);
//            break;
//            case 13:
//            tree = deleteTree(tree);
//            break;
//         }
//    }   while(option!=14);
//    return 0;
//}
//struct node *insertElement(struct node *tree, int val)
//{
//    struct node *ptr, *nodeptr, *parentptr;
//    ptr = (struct node*)malloc(sizeof(struct node));
//    ptr->data = val;
//    ptr->left = NULL;
//    ptr->right = NULL;
//    if(tree==NULL)
//    {
//        tree=ptr;
//        tree->left=NULL;
//        tree->right=NULL;
//    }
//    else
//    {
//        parentptr=NULL;
//        nodeptr=tree;
//        while(nodeptr!=NULL)
//     {
//         parentptr=nodeptr;
//        if(val<nodeptr->data)
//            nodeptr=nodeptr->left;
//        else
//            nodeptr = nodeptr->right;
//     }
//        if(val<parentptr->data)
//            parentptr->left = ptr;
//        else
//            parentptr->right = ptr;
//    }
//    return tree;
//}
//void preorderTraversal(struct node *tree)
//{
//    if(tree != NULL)
//    {
//    printf("%d\t", tree->data);
//    preorderTraversal(tree->left);
//    preorderTraversal(tree->right);
//    }
//}
//void inorderTraversal(struct node *tree)
//{
//    if(tree != NULL)
//    {
//    inorderTraversal(tree->left);
//    printf("%d\t", tree->data);
//    inorderTraversal(tree->right);
//    }
//}
//void postorderTraversal(struct node *tree)
//{
//    if(tree != NULL)
//    {
//    postorderTraversal(tree->left);
//    postorderTraversal(tree->right);
//    printf("%d\t", tree->data);
//    }
//}
//struct node *findSmallestElement(struct node *tree)
//{
//    if( (tree == NULL) || (tree->left == NULL))
//    return tree;
//    else
//    return findSmallestElement(tree ->left);
//}
//struct node *findLargestElement(struct node *tree)
//{
//    if( (tree == NULL) || (tree->right == NULL))
//    return tree;
//    else
//    return findLargestElement(tree->right);
//}
//struct node *deleteElement(struct node *tree, int val)
//{
//    struct node *cur, *parent, *suc = NULL, *psuc, *ptr;
//    if(tree->left==NULL)
//    {
//        printf("\n The tree is empty ");
//        return(tree);
//        }
//        parent = tree;
//        cur = tree->left;
//        while(cur!=NULL && val!= cur->data)
//        {
//            parent = cur;
//            cur = (val<cur->data)? cur->left:cur->right;
//        }
//        if(cur == NULL)
//        {
//            printf("\n The value to be deleted is not present in the tree");
//            return(tree);
//        }
//        if(cur->left == NULL)
//            ptr = cur->right;
//            else if(cur->right == NULL)
//                ptr = cur->left;
//            else
//            {
//                psuc = cur;
//                cur = cur->left;
//            while(suc->left!=NULL)
//             {
//                 psuc = suc;
//                 suc = suc->left;
//             }
//            if(cur==psuc)
//             {
//                 suc->left = cur->right;
//             }
//            else
//             {
//                 suc->left = cur->left;
//                 psuc->left = suc->right;
//                 suc->right = cur->right;
//             }
//                ptr = suc;
//            }
//            if(parent->left == cur)
//                parent->left=ptr;
//            else
//                parent->right=ptr;
//                free(cur);
//        return tree;
//}
//int totalNodes(struct node *tree)
//{
//    if(tree==NULL)
//    return 0;
//    else
//    return(totalNodes(tree->left) + totalNodes(tree->right) + 1);
//}
//int totalExternalNodes(struct node *tree)
//{
//    if(tree==NULL)
//    return 0;
//    else if((tree->left==NULL) && (tree->right==NULL))
//    return 1;
//    else
//    return (totalExternalNodes(tree->left) +
//    totalExternalNodes(tree->right));
//}
//int totalInternalNodes(struct node *tree)
//{
//    if( (tree==NULL) || ((tree->left==NULL) && (tree->right==NULL)))
//    return 0;
//    else
//    return (totalInternalNodes(tree->left)
//    + totalInternalNodes(tree->right) + 1);
//}
//int Height(struct node *tree)
//{
//    int leftheight, rightheight;
//    if(tree==NULL)
//    return 0;
//    else
//    {
//        leftheight = Height(tree->left);
//        rightheight = Height(tree->right);
//        if(leftheight > rightheight)
//            return (leftheight + 1);
//        else
//            return (rightheight + 1);
//    }
//}
//struct node *mirrorImage(struct node *tree)
//{
//    struct node *ptr;
//    if(tree!=NULL)
//    {
//        mirrorImage(tree->left);
//        mirrorImage(tree->right);
//        ptr=tree->left;
//        ptr->left = ptr->right;
//        tree->right = ptr;
//    }
//    return 0;
//}
//struct node *deleteTree(struct node *tree)
//{
//    if(tree!=NULL)
//    {
//        deleteTree(tree->left);
//        deleteTree(tree->right);
//        free(tree);
//    }
//    return 0;
//}
// Programming Exercise 2.
//#include <stdio.h>
//#include <stdlib.h>
//struct node
//{
//    int info;
//    struct node *left, *right;
//};
//struct node *createnode(int key)
//{
//    struct node *newnode = (struct node*)malloc(sizeof(struct node));
//    newnode->info = key;
//    newnode->left = NULL;
//    newnode->right = NULL;
//    return(newnode);
//}
//static int count = 0;
//int countnodes(struct node *root)
//{
//    if(root != NULL)
//    {
//        countnodes(root->left);
//        count++;
//        countnodes(root->right);
//    }
//    return count;
//}
//
//int main()
//{
//    struct node *newnode = createnode(25);
//    newnode->left = createnode(27);
//    newnode->right = createnode(19);
//    newnode->left->left = createnode(17);
//    newnode->left->right = createnode(91);
//    newnode->right->left = createnode(13);
//    newnode->right->right = createnode(55);
//
//    printf("Number of nodes in tree 1 = %d ",countnodes(newnode));
//    printf("\n");
//    count = 0;
//
//    struct node *node = createnode(1);
//    node->right = createnode(2);
//    node->right->right = createnode(3);
//    node->right->right->right = createnode(4);
//    node->right->right->right->right = createnode(5);
//
//    printf("Number of nodes in tree 2 = %d ",countnodes(node));
//    printf("\n");
//    count = 0;
//
//    struct node *root = createnode(15);
//
//    printf("Number of nodes in tree 3 = %d",countnodes(root));
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct NodeStruct
//{
//    int value;
//    struct NodeStruct* leftChild;
//    struct NodeStruct* rightChild;
//}Node;
//
//Node* root = NULL;
//
//Node* BST_insert(Node* root, int value)
//{
//    if(root == NULL)
//    {
//        root = (Node*)malloc(sizeof(Node));
//        root->leftChild = root->rightChild = NULL;
//        root->value = value;
//        return root;
//    }
//    else
//    {
//        if(root->value > value)
//            root->leftChild = BST_insert(root->leftChild, value);
//        else
//            root->rightChild = BST_insert(root->rightChild, value);
//    }
//    return root;
//}
//Node* findMinNode(Node* root)
//{
//    Node* tmp = root;
//    while(tmp->leftChild != NULL)
//        tmp = tmp->leftChild;
//    return tmp;
//}
//Node* BST_delete(Node* root, int value)
//{
//    Node* tNode = NULL;
//    if(root == NULL)
//        return NULL;
//
//    if(root->value > value)
//        root->leftChild = BST_delete(root->leftChild, value);
//    else if(root->value < value)
//        root->rightChild = BST_delete(root->rightChild, value);
//    else
//    {
//        // 자식 노드가 둘 다 있을 경우
//        if(root->rightChild != NULL && root->leftChild != NULL)
//        {
//            tNode = findMinNode(root->rightChild);
//            root->value = tNode->value;
//            root->rightChild = BST_delete(root->rightChild, tNode->value);
//        }
//        else
//        {
//            tNode = (root->leftChild == NULL) ? root->rightChild : root->leftChild;
//            free(root);
//            return tNode;
//        }
//    }
//
//    return root;
//}
//Node* BST_search(Node* root, int value)
//{
//    if(root == NULL)
//        return NULL;
//
//    if(root->value == value)
//        return root;
//    else if(root->value > value)
//        return BST_search(root->leftChild, value);
//    else
//        return BST_search(root->rightChild, value);
//}
//void BST_print(Node* root)
//{
//    if(root == NULL)
//        return;
//
//    printf("%d ", root->value);
//    BST_print(root->leftChild);
//    BST_print(root->rightChild);
//}
//
//int main()
//{
//    root = BST_insert(root, 98);
//    root = BST_insert(root, 2);
//    root = BST_insert(root, 48);
//    root = BST_insert(root, 12);
//    root = BST_insert(root, 56);
//    root = BST_insert(root, 32);
//    root = BST_insert(root, 4);
//    root = BST_insert(root, 67);
//    root = BST_insert(root, 23);
//    root = BST_insert(root, 87);
//    root = BST_insert(root, 23);
//    root = BST_insert(root, 55);
//    root = BST_insert(root, 46);
//    root = BST_insert(root, 21);
//    root = BST_insert(root, 39);
//    root = BST_insert(root, 45);
//    root = BST_insert(root, 54);
//    root = BST_insert(root, 63);
//
//    root = BST_delete(root, 23);
//    root = BST_delete(root, 56);
//    root = BST_delete(root, 2);
//    root = BST_delete(root, 45);
//
//
//    BST_print(root);
//}
// 98, 2, 48, 12, 56, 32, 4, 67, 23, 87, 23, 55, 46
//(a) Insert 21, 39, 45, 54, and 63 into the tree
//(b) Delete values 23, 56, 2, and 45 from the tree

//#include <stdio.h>
//#include <stdlib.h>
//
///* A binary tree node has data, pointer to left child
//   and a pointer to right child */
//struct node
//{
//     int data;
//     struct node* left;
//     struct node* right;
//};
//
///* Helper function that allocates a new node with the
//   given data and NULL left and right pointers. */
//struct node* newNode(int data)
//{
//     struct node* node = (struct node*)
//                                  malloc(sizeof(struct node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;
//
//     return(node);
//}
//
///* Given a binary tree, print its nodes according to the
//  "bottom-up" postorder traversal. */
//void printPostorder(struct node* node)
//{
//     if (node == NULL)
//        return;
//
//     // first recur on left subtree
//     printPostorder(node->left);
//
//     // then recur on right subtree
//     printPostorder(node->right);
//
//     // now deal with the node
//     printf("%d ", node->data);
//}
//
///* Given a binary tree, print its nodes in inorder*/
//void printInorder(struct node* node)
//{
//     if (node == NULL)
//          return;
//
//     /* first recur on left child */
//     printInorder(node->left);
//
//     /* then print the data of node */
//     printf("%d ", node->data);
//
//     /* now recur on right child */
//     printInorder(node->right);
//}
//
///* Given a binary tree, print its nodes in preorder*/
//void printPreorder(struct node* node)
//{
//     if (node == NULL)
//          return;
//
//     /* first print data of node */
//     printf("%d ", node->data);
//
//     /* then recur on left sutree */
//     printPreorder(node->left);
//
//     /* now recur on right subtree */
//     printPreorder(node->right);
//}
//
///* Driver program to test above functions*/
//int main()
//{
//     struct node *root  = newNode(1);
//     root->left             = newNode(2);
//     root->right           = newNode(3);
//     root->left->left     = newNode(4);
//     root->left->right   = newNode(5);
//
//     printf("\nPreorder traversal of binary tree is \n");
//     printPreorder(root);
//
//     printf("\nInorder traversal of binary tree is \n");
//     printInorder(root);
//
//     printf("\nPostorder traversal of binary tree is \n");
//     printPostorder(root);
//
//     getchar();
//     return 0;
//}
#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
    
   struct node *leftChild;
   struct node *rightChild;
};

struct node *root = NULL;

void insert(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   //if tree is empty
   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent = NULL;

      while(1) {
         parent = current;
         
         //go to left of the tree
         if(data < parent->data) {
            current = current->leftChild;
            
            //insert to the left
            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->rightChild;

            //insert to the right
            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }
   }
}

struct node* search(int data) {
   struct node *current = root;
   printf("Visiting elements: ");

   while(current->data != data) {
      if(current != NULL)
         printf("%d ",current->data);

      //go to left tree
      if(current->data > data) {
         current = current->leftChild;
      }
      //else go to right tree
      else {
         current = current->rightChild;
      }

      //not found
      if(current == NULL) {
         return NULL;
      }
   }
   
   return current;
}

void pre_order_traversal(struct node* root) {
   if(root != NULL) {
      printf("%d ",root->data);
      pre_order_traversal(root->leftChild);
      pre_order_traversal(root->rightChild);
   }
}

void inorder_traversal(struct node* root) {
   if(root != NULL) {
      inorder_traversal(root->leftChild);
      printf("%d ",root->data);
      inorder_traversal(root->rightChild);
   }
}

void post_order_traversal(struct node* root) {
   if(root != NULL) {
      post_order_traversal(root->leftChild);
      post_order_traversal(root->rightChild);
      printf("%d ", root->data);
   }
}
//45
//39 56
//12 54 78
//10 34 67 89
//32 81
int main() {
   int i;
   int array[19] = { 45, 39, 56, 12, 54, 78, 10, 34, 67, 89, 32, 81, 11, 22, 33, 44, 55, 66, 77 };

   for(i = 0; i < 19; i++)
      insert(array[i]);

   i = 31;
   struct node * temp = search(i);

   if(temp != NULL) {
      printf("[%d] Element found.", temp->data);
      printf("\n");
   }else {
      printf("[ x ] Element not found (%d).\n", i);
   }

   i = 15;
   temp = search(i);

   if(temp != NULL) {
      printf("[%d] Element found.", temp->data);
      printf("\n");
   }else {
      printf("[ x ] Element not found (%d).\n", i);
   }

   printf("\nPreorder traversal: ");
   pre_order_traversal(root);

   printf("\nInorder traversal: ");
   inorder_traversal(root);

   printf("\nPost order traversal: ");
   post_order_traversal(root);

   return 0;
}
