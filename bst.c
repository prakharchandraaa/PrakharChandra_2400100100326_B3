#include<stdlib.h>
#include<stdio.h>
struct BST
{
    int info;
    struct BST *left,*right;
}*root=NULL,*par=NULL;
void insert_BST(struct BST *,int);
struct BST * searching_BST(struct BST *,int);
void traversal(struct BST *);
void deletion(struct BST *,int);
void caseA(struct BST *,struct BST *, int);
void caseB(struct BST *,struct BST *, int);
int main()
{
    int choice, ch,key;
    do
    {
        printf("\n1. Searching\n2. Insertion\n3. Traversal\n4. Deletion\nEnter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\nEnter key:");
                    scanf("%d",&key);
                    struct BST * loc=searching_BST(root,key);
                    if(loc==NULL)
                        printf("\nElement not found");
                    else
                        printf("\nElement found");
                    break;
            case 2: printf("\nEnter key:");
                    scanf("%d",&key);
                    insert_BST(root,key);
                    break;
            case 3: traversal(root);
                    break;
            case 4: printf("\nEnter key to be deleted:");
                    scanf("%d",&key);
                    deletion(root,key);
                    break;
        }
        printf("\nTo continue press 1:");
        scanf("%d",&ch);
    } while (ch);
    return 0;
}
struct BST * searching_BST(struct BST *root,int key)
{
    par=NULL;
    while(root!=NULL && root->info!=key)
    {
        par=root;
        if(root->info>key)
          root=root->left;
        else
          root=root->right;
    }
    return root;
}

void insert_BST(struct BST *ptr,int key)
{
    struct BST *loc,*newnode;
    newnode=(struct BST *)malloc(sizeof(struct BST));
    newnode->info=key;
    newnode->left=NULL;
    newnode->right=NULL;
    loc=searching_BST(ptr,key);

    if(loc!=NULL)
        printf("\nElement already present");
    else
    {
        if(par==NULL)
        {
            root=newnode;
        }
        else
        {
            if(key>par->info)
                par->right=newnode;
            else
                par->left=newnode;
        }
    }
}

void traversal(struct BST *root)
{
    if(root==NULL)
        return;
    traversal(root->left);
    printf("%d\t",root->info);
    traversal(root->right);
}

void deletion(struct BST *root, int key)
{
    struct BST * loc=searching_BST(root, key);
    if(loc==NULL)
        return;
    else
    {
        if(loc->left!=NULL && loc->right!=NULL)
            caseB(par,loc,key);
        else
            caseA(par,loc,key);
    }
    printf("\nDeleted Node=%d",loc->info);
    free(loc);
}

void caseA(struct BST * par,struct BST *loc, int key)
{
    struct BST * child;
    if(loc->left==NULL && loc->right==NULL)
        child=NULL;
    else if(loc->left!=NULL)
        child=loc->left;
    else
        child=loc->right;
    if(par!=NULL)
    {
        if(loc==par->left)
            par->left=child;
        else
            par->right=child;
    }
    else
        root=child;
}

void caseB(struct BST * par,struct BST *loc, int key)
{
    struct BST *suc=loc->right, *parsuc=loc;
    while(suc->left!=NULL)
    {
        parsuc=suc;
        suc=suc->left;
    }
    caseA(parsuc,suc,key);
    if(par!=NULL)
    {
        if(loc==par->left)
            par->left=suc;
        else
            par->right=suc;
    }
    else
        root=suc;
    suc->left=loc->left;
    suc->right=loc->right;
}