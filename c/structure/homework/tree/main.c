#include<stdio.h>
#include<malloc.h>

typedef struct{
  int id;
  char name[10];
  double height;
}person;
typedef person element;

typedef struct TreeNode {
  element data;
  struct TreeNode *left, *right;
} TreeNode;

TreeNode * insert_node(TreeNode *root,element person);
TreeNode *new_node(element person);
void inorder(TreeNode*root);
//TreeNode *delete_node(TreeNode *root, int key);
//TreeNode *search(TreeNode *node, int key);
  

int main(int argc, char *argv[]){

  TreeNode *root=NULL;
  
  FILE *fp;
  fp=fopen(argv[1],"r");
  for(;;){
    person tmp={0,"\0",0};
    fscanf(fp,"%d",&tmp.id);
    if(tmp.id==0) break;
    fscanf(fp,"%s",tmp.name);
    fscanf(fp,"%lf",&tmp.height);

    root=insert_node(root,tmp);
  }
  inorder(root);
}


/*================================================\
| TreeNode *search(TreeNode *node, int key){      |
|   while(node!=NULL){                            |
|     if(node->data.id>key) node=node->right;     |
|     else if(node->data.id<key) node=node->left; |
|     else return node;                           |
|   }                                             |
|   return NULL;                                  |
\================================================*/


TreeNode* insert_node(TreeNode *node, element person){
  TreeNode *p;
  p=(TreeNode*)malloc(sizeof(TreeNode));
  p->data=person;
  p->left=p->right=NULL;


  //try to make this code non-recursive, but I can't.
  /*                                         
     if(root==NULL){                                 
       root=(TreeNode*)malloc(sizeof(TreeNode));     
       root->data=person;                            
     }                                               
     else{                                           
       TreeNode *tnode=root;                         
       while(1){                                     
	 if(tnode->data.id<person.id){               
	   if(tnode->right!=NULL) tnode=tnode->right;
	   else{                                     
	     tnode->right=p;                         
	     break;                                  
	   }                                         
	 }                                           
	 else{                                       
	   if(tnode->left!=NULL) tnode=tnode->left;  
	   else{                                     
	     tnode->left=p;                          
	     break;                                  
	   }                                         
	 }                                           
       }                                             
     }                                               
     free(p);                                        
     return root;                                    
   */

	if (node == NULL) return new_node(person);
	if (person.id < node->data.id)
	  node->left = insert_node(node->left, person);
	else if (person.id > node->data.id)
	  node->right = insert_node(node->right, person);
	return node;
}

TreeNode* new_node(element person){
  TreeNode *tmp= (TreeNode*)malloc(sizeof(TreeNode));
  tmp->data=person;
  tmp->left=tmp->right=NULL;
  return tmp;
}

void inorder(TreeNode *root){ //LVR
  if(root){
    inorder(root->left);
    printf("%s ",root->data.name);
    inorder(root->right);
  }
}
