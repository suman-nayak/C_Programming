#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* root = NULL;

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* node, int data) {
    if (node == NULL)
	    return createNode(data);
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    return node;
}

struct Node* findMin(struct Node* node) {
    while (node && node->left != NULL)
        node = node->left;
    return node;
}

struct Node* deleteNode(struct Node* node, int data) {
    if (node == NULL)
	   return node;
    if (data < node->data)
        node->left = deleteNode(node->left, data);
    else if (data > node->data)
        node->right = deleteNode(node->right, data);
    else {
        if (node->left == NULL) {
            struct Node* temp = node->right;
            free(node);
            return temp;
        }
	else if (node->right == NULL) {
            struct Node* temp = node->left;
            free(node);
            return temp;
        }
        struct Node* temp = findMin(node->right);
        node->data = temp->data;
        node->right = deleteNode(node->right, temp->data);
    }
    return node;
}
int search(struct Node* node, int data) {
    if (node == NULL)
	    return 0;
    if (node->data == data)
	    return 1;
    if (data < node->data)
        return search(node->left, data);
    return search(node->right, data);
}
int findMinValue() {
    struct Node* minNode = findMin(root);
    return minNode ? minNode->data : -1;
}

int findMaxValue() {
    struct Node* maxNode = root;
    while (maxNode && maxNode->right != NULL)
        maxNode = maxNode->right;
    return maxNode ? maxNode->data : -1;
}

void inorder(struct Node* node) {
    if (node != NULL) {
        inorder(node->left);
        printf("%d ", node->data);
        inorder(node->right);
    }
}

void preorder(struct Node* node) {
    if (node != NULL) {
        printf("%d ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}

void postorder(struct Node* node) {
    if (node != NULL) {
        postorder(node->left);
        postorder(node->right);
        printf("%d ", node->data);
    }
}

int main() {
    int choice, data;

    while (1) {
        printf("\n-=-=-=- BST Menu-=-=-=-\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Find Min\n");
        printf("5. Find Max\n");
        printf("6. Pre-order Traversal\n");
        printf("7. In-order Traversal\n");
        printf("8. Post-order Traversal\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                root = insert(root, data);
                printf("Inserted %d.\n", data);
                break;
            case 2:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                if (search(root, data)) {
                    root = deleteNode(root, data);
                    printf("Deleted %d.\n", data);
                } else {
                    printf("%d not found.\n", data);
                }
                break;
            case 3:
                printf("Enter data to search: ");
                scanf("%d", &data);
                printf("%s\n", search(root, data) ? "Found" : "Not found");
                break;
            case 4:
                data = findMinValue();
                printf("Min: %d\n", data != -1 ? data : printf("Tree empty\n"));
                break;
            case 5:
                data = findMaxValue();
                printf("Max: %d\n", data != -1 ? data : printf("Tree empty\n"));
                break;
            case 6:
                printf("Pre-order: ");
                preorder(root);
                printf("\n");
                break;
            case 7:
                printf("In-order: ");
                inorder(root);
                printf("\n");
                break;
            case 8:
                printf("Post-order: ");
                postorder(root);
                printf("\n");
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
