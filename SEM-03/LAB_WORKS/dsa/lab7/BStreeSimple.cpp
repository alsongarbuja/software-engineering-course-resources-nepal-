#include<iostream>
using namespace std;

bool c=false;

struct node
{
	int data;
	node* left;
	node* right;
};

struct node* getNode(int data)
{
	node* newNode=new node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void inorder(struct node* root)
{
    if (root != NULL)
     {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(struct node* root)
{
    if (root != NULL)
     {
     	cout<<root->data<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(struct node* root)
{
    if (root != NULL)
     {
        inorder(root->left);
        inorder(root->right);
        cout<<root->data<<" ";
    }
}

node* findMin(node*root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

struct node* Insert(struct node* root, int data)
{
	if (root == NULL)
		return getNode(data);

	if (data < root->data)
		root->left  = Insert(root->left, data);
	else if (data > root->data)
		root->right = Insert(root->right, data);

	return root;
}

bool Search(node*root,int value)
{ 
	if(root==NULL)
		return false;
	else if(root->data == value)
	{
		return true;
	}
	else if(value < root-> data)
		Search(root->left,value);
	else if(value > root->data)
		Search(root->right,value);
}


node* Delete( node* root,int value)
{ 
	c=Search(root,value);
	if(root==NULL)
		return root;
	else if(value< root->data)
	{
		root->left= Delete(root->left,value);
	}
	else if(value> root->data)
	{
		root->right= Delete(root->right,value);
	}
	
	// Node deletion
	else
	{
		//case 1: Leaf Node
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			root=NULL;
			return root;
		}
		//case 2: one child
		else if(root->left==NULL)
		{
			struct node* temp=root;
			root=root->right;
			delete temp;
			return root;
		}
		else if(root->right==NULL)
		{
			struct node* temp=root;
			root=root->left;
			delete temp;
			return root;
		}
		//case 3: 2 child
		else
		{
			struct node*temp=findMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}
	return root;

}


int main()
{
	int choice = 1, data = 0;
	  
	node* root=NULL;

	cout << "Enter a root node to insert: ";
	cin >> data;
	root = Insert(root, data);

		while(1)
		{
			cout<<"-----------------"<<endl;
	        cout<<"Operations on BST"<<endl;
	        cout<<"-----------------"<<endl;
	        cout<<"1.Insert Element "<<endl;
	        cout<<"2.Delete Element "<<endl;
	        cout<<"3.Inorder Traversal"<<endl;
	        cout<<"4.Preorder Traversal"<<endl;
	        cout<<"5.Postorder Traversal"<<endl;
	        cout<<"6.Quit"<<endl;
	        cout<<"Enter your choice : ";
	        cin>>choice;
	        
	        	switch(choice)
	        	{
	        		case 1:
	        			cout << "Enter item to insert: ";
	        			cin >> data;
	        				Insert(root, data);
	        					cout << "Data inserted." << endl;
	        			break;
	        		case 2:
	        			cout << "Enter item to delete: ";
	        			cin >> data;
	        				Delete(root, data);
	        					if(c)
	        						cout << "Node Deleted" << endl;
	        					else
	        						cout << "Node not found" << endl;
	        			break;
	        		case 3:
	        			cout << "Inorder: ";
	        			inorder(root);
	        			cout << endl;
	        			break;
	        		case 4:
	        			cout << "Preorder: ";
	        			preorder(root);
	        			cout << endl;
	        			break;
					case 5:
	        			cout << "Postorder: ";
	        			postorder(root);
	        			cout << endl;
	        			break;
	        		case 6:
	        			exit(1);
	        		default: 
	        			cout << "Invalid option!!" << endl;
				}
		}
	
	return 0;

}
