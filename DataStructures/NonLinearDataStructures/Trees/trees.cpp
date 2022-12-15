#include<iostream>
using namespace std;


class Trees{
	private:
	struct node{
		int data;
		struct node* left;
		struct node* right;
	};
	
	public:
	Trees();
	struct node * head;
	struct node* getHead();
	void preOrderTraversal(struct node* root);
	void postOrderTraversal(struct node* root);
	void inOrderTraversal(struct node* root);
};


Trees::Trees(){
	head = (struct node*) malloc (sizeof(struct node));
	
	head -> data = 1;
	
	struct node* right_;
	struct node* left_;

	right_ = (struct node*) malloc (sizeof(struct node));
	left_ = (struct node*) malloc (sizeof(struct node));
	
	right_ -> data = 3;
	left_ -> data = 2;
	
	head -> left = left_ ;
	head -> right = right_ ;

	struct node* sbt_right;
	struct node* sbt_left;

	sbt_right = head -> right;
	sbt_left = head -> left;

	right_ = (struct node*) malloc (sizeof(struct node));
	left_ = (struct node*) malloc (sizeof(struct node));
	
	right_ -> data = 5;
	right_ -> right = NULL;
	right_ -> left = NULL;


	left_ -> data = 4;
	left_ -> right = NULL;
	left_ -> left = NULL;


	sbt_right -> right = right_;
	sbt_right -> left = left_ ;

	
	right_ = (struct node*) malloc (sizeof(struct node));
	left_ = (struct node*) malloc (sizeof(struct node));
	
	right_ -> data = 7;
	right_ -> right = NULL;
	right_ -> left = NULL;


	left_ -> data = 6;
	left_ -> right = NULL;
	left_ -> left = NULL;


	sbt_left -> right = right_;
	sbt_left -> left = left_ ;

	
	cout << "Binary Tree Created with 3 level" << endl;	  
}

void Trees::preOrderTraversal(struct node* root){
	if (!root)
		return;
	cout << root -> data << " ";
	preOrderTraversal(root -> left);
	preOrderTraversal(root -> right);
}


void Trees::postOrderTraversal(struct node* root){
	if (!root)
		return;
	preOrderTraversal(root -> left);
	preOrderTraversal(root -> right);
	cout << root -> data << " ";
}

void Trees::inOrderTraversal(struct node* root){
	if (!root)
		return;
	preOrderTraversal(root -> left);
	cout << root -> data << " " ;
	preOrderTraversal(root -> right);
}



int main (){
	Trees t1;

	cout << "PreOrder Traversal" << endl;
	t1.preOrderTraversal(t1.head);

	cout << endl << "InOrder Traversal" << endl;
	t1.inOrderTraversal(t1.head);

	cout << endl << "PostOrder Traversal" << endl;
	t1.postOrderTraversal(t1.head);

	cout << endl ;	
}
