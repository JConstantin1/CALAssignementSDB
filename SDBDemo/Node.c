#include "Node.h"

struct Node *root = 0;

int AddNode(void *item)
{
	Node *n = (Node *)malloc(sizeof(Node));
	if(n==0)
	return -1;
	n -> element = item;
	n -> next = root;
	root = n;
	return 0;
}

Node* SelectStudent(int a)
{
	Node *n;
	n = root;
	for(int i = 0; i < Count(); i++)
	{
            
		n = n->next;
		if(((Student *)n.element) -> student_nr == a)
                {
                    return n;
                }                
	}
        return 2;
}

Node* SelectNode(int a)
{
	Node *n;
	n = root;
	for(int i = 0; i < a; i++)
	{
		n = n->next;
	}
	return n;
}

int DeleteNode(int a)
{
	Node *n = SelectNode(a-1);
	Node *m = SelectNode(a+1);
	Node *d = SelectNode(a);
	n->next = m;
	free(d);
	return 0;
}

int Count()
{
	Node *n;

	if(root != 0)
	n = root;
	else
	return 1;

	int i = 1;

	while(n->next != 0)
	{
		i++;
		n = n->next;
	}
	printf("\n There are %d nodes in the LinkedList",i);
	return 0;
}
