#ifndef __THRD_BIN_TREE_H__
#define __THRD_BIN_TREE_H__

//오른쪽 자식 노드에 중위 후속자(inorder successor)를 넣음
typedef struct threadNode{
    int data;
    struct threadNode *left, *right;
    int is_thread;//넣었냐~안넣었냐
}thrNode;

thrNode* find_succeessor(thrNode* root);
void inorder_thread(thrNode* root);

#endif