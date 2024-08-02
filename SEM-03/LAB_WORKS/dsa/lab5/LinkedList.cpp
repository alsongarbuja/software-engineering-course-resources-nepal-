#include<iostream>
struct Node
{
	int data;
	struct Node* Next;
};

class LinkedList
{
	struct Node *start;
	public:
	LinkedList(){
		start = NULL;
	}
	struct Node* createNode()
	{
		struct Node *newNode = new struct Node();
		newNode->Next = NULL;
		return newNode;
	}
	bool insert_at_first(int data)
	{
		struct Node *newNode = createNode();
		if(!newNode)
		{
			return false;
		}
		newNode->data = data;
		newNode->Next = start;
		start = newNode;
		return true;
	}
    bool insert_at_end(int data)
    
    {
    	struct Node *newNode = createNode();
		if(!newNode)
		{
			return false;
		}
    	newNode->data= data;
    	struct Node* temp = start;
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}
		temp->Next = newNode;
		return true;      	
	}
	int del_atfirst ()
	{
		if (start==NULL)
		{
			std::cout<<"The Linkedlist is empty";	
			return -1;
		}
    struct Node *temp = start->Next;
    int data=start->data;
    delete start;
    start = temp;
    return data;
   	}
   	
   int delete_after_node()
   {
   	std:: cout<<"ENter the node after you want to delete"<<std:: endl;
	int input_data;
	std:: cin>>input_data;
	
		struct Node* temp = start;
		while(temp->data!=input_data)
		{
			temp=temp->Next;
		}
	
	if(temp==NULL)

	{
		std:: cout<<"The data is not found"<<std::endl;
		return -1;
	}
	
		struct Node* targetNode= temp->Next;
		if(targetNode==NULL)
		{
			std:: cout<<"The data is not empty"<<std::endl;
			return -1;
		}
		temp->Next = targetNode->Next;
		int deleted_data=targetNode->data;
		delete targetNode;
		return deleted_data;
	}	
	int delete_atlast()
	{
		if (start==NULL)
		{
			std::cout<<"The Linkedlist is empty";	
			return -1;
		}
		
		struct Node* temp = start;
		struct Node* parent =start;
		
		while(temp->Next!=NULL)
		{
			parent=temp;
			temp=temp->Next;
		}
	    int data=temp ->data;
		delete temp;
		parent -> Next=NULL;
		return data;
		
}
bool insert_before_node(int dataInNode, int dataToInsert){
	struct Node * temp = start ;
	struct Node * parent = start ;
	while(temp->data != dataInNode){
		parent = temp ;
		temp = temp->Next ;
	}
	if(!temp)
	{
		std::cout<<"The data is not found";
	}
	struct Node * newNode = createNode() ;
	newNode->data = dataToInsert ;
	newNode->Next = temp->Next ;
	parent->Next = newNode ;
	return true;
}

int delete_before_node()
{
	if(!start)
	{
		std::cout<<"The list is empty"<<std::endl;
		return -1;
	}
	std:: cout<<"ENter the node before which you want to delete"<<std:: endl;
	int dataInNode;
	std:: cin>>dataInNode;
	if(start->data == dataInNode)
	{
		std::cout<<"Invalid data. There is no node before it."<<std::endl;
		return -1;
	}
	struct Node * temp = start->Next;
	struct Node * target = start;
	if(!temp)
	{
		std::cout<<"Invalid data. Node is not found."<<std::endl;
		return -1;
	}
	if(temp->data == dataInNode)
	{
		int data_deleted = target->data;
		delete target;
		start = temp;
		return data_deleted;
	}
	target = temp->Next;
	struct Node * target_parent = start ;
	temp= temp->Next;
	while(temp->data != dataInNode){
		target_parent = target;
		target = temp ;
		temp = temp->Next ;
	}
	if(!temp)
	{
		std::cout<<"The data is not found";
		return -1;
	}
	int data_deleted = target->data;
	target_parent->Next = target->Next;
	delete target;
	return data_deleted;	
}

bool insert_after_node (int data)
{
	std:: cout<<"ENter the node after you want to instert"<<std:: endl;
	int input_data;
	std:: cin>>input_data;
	
		struct Node* temp = start;
		
		while(temp->data!=input_data)
		{
		
			temp=temp->Next;
		}
	
	if(temp==NULL)

	{
		std:: cout<<"The data is not found"<<std::endl;
		return false;
	}
	
	struct Node *newNode = createNode();
		if(!newNode)
		{
			return false;
		}
		newNode->data = data;
		newNode->Next = temp->Next;
		temp->Next = newNode;
		return true;
	
}


	void Display()
	{
		struct Node* temp = start;
		while(temp!=NULL)
		{
			std::cout<<temp->data<<std::endl;
			temp=temp->Next;
		}
	}
	~LinkedList()
	{
		struct Node *temp = start;
		while(temp!=NULL)
		{
			temp = temp->Next;
			delete start;
			start = temp;			
		}
	}
	
	
};
int main()
{
	int choice = 1, data = 0, nodeData = 0;
	LinkedList *lst = new LinkedList();
	
		while(choice != 0)
		{
			std::cout << "Enter a choice: " << std::endl;
			std::cout << "1,Insert_at_first\n2,Insert_at_last\n3,Delete_at_first\n4,Delete_at_last\n";
			std::cout << "5,Insert_after_node\n6,Insert_before_node\n7,Delete_after_node\n8,Delete_before_node\n";
			std::cout << "9,Display_list\n0,Exit\n";
			std::cin >> choice;
			
				switch(choice)
				{
					case 1:
						std::cout << "Enter a data you want to add: ";
						std::cin >> data;
						lst->insert_at_first(data);
						break;
					case 2:
						std::cout << "Enter a data you want to add: ";
						std::cin >> data;
						lst->insert_at_end(data);
						break;
					case 3:
						lst->del_atfirst();
						break;
					case 4:
						lst->delete_atlast();
						break;
					case 5:
						std::cout << "Enter a data you want to add: ";
						std::cin >> data;
						lst->insert_after_node(data);
						break;
					case 6:
						std::cout << "Enter the node you want to add before: ";
						std::cin >> nodeData;
						std::cout << "Enter a data you want to add: ";
						std::cin >> data;						
						lst->insert_before_node(nodeData, data);
						break;
					case 7:
						lst->delete_after_node();
						break;
					case 8:
						lst->delete_before_node();
						break;
					case 9:
						lst->Display();
						break;
				}
				
				if(choice < 0 || choice > 9)
				{
					std::cout << "Enter a valid option" << std::endl;
				}
		}
	
	delete lst;
	return 0;
}
