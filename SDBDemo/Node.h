typedef struct node{
	void * element;
	struct node *next;
}Node;

int AddNode(void *item);
Node* SelectNode(int a);
int DeleteNode(int a);
int Count();
