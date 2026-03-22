#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node* create(int data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

struct node* insert(struct node* root, int data){
    if(root == NULL) return create(data);
    if(data < root->data)
        root->left = insert(root->left, data);
    else if(data > root->data)
        root->right = insert(root->right, data);
    return root;
}

struct node* findMinNode(struct node* root){
    while(root && root->left != NULL)
        root = root->left;
    return root;
}

struct node* delete(struct node* root, int key){
    if(root == NULL) return root;
    if(key < root->data)
        root->left = delete(root->left, key);
    else if(key > root->data)
        root->right = delete(root->right, key);
    else{
        if(root->left == NULL){
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}

int search(struct node* root, int key){
    if(root == NULL) return 0;
    if(root->data == key) return 1;
    if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int findMax(struct node* root){
    while(root->right != NULL)
        root = root->right;
    return root->data;
}

int findMin(struct node* root){
    while(root->left != NULL)
        root = root->left;
    return root->data;
}

void preorder(struct node* root){
    if(root){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node* root){
    if(root){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node* root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main(){
    struct node* root = NULL;
    int choice, val;

    while(1){
        printf("\n1.Insert\n2.Delete\n3.Search\n4.FindMax\n5.FindMin\n6.Preorder\n7.Inorder\n8.Postorder\n9.Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                scanf("%d", &val);
                root = insert(root, val);
                break;
            case 2:
                scanf("%d", &val);
                root = delete(root, val);
                break;
            case 3:
                scanf("%d", &val);
                if(search(root, val))
                    printf("Found\n");
                else
                    printf("Not Found\n");
                break;
            case 4:
                if(root)
                    printf("%d\n", findMax(root));
                break;
            case 5:
                if(root)
                    printf("%d\n", findMin(root));
                break;
            case 6:
                preorder(root);
                break;
            case 7:
                inorder(root);
                break;
            case 8:
                postorder(root);
                break;
            case 9:
                exit(0);
        }
    }
    return 0;
}