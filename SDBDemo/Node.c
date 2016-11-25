#include "Node.h"
#include "Student.h"
#include <stdio.h>
#include <stdlib.h>


int AddNode(void *item, Node *linkedList)
{
	Node *n = (Node *)malloc(sizeof(Node));
	if(n==0)
	return -1;
	n -> element = item;
	n -> next = linkedList;
	linkedList = n;
	return 0;
}

Node* SelectNode(int a, Node *linkedList)
{
/*
	Node *n;
	n = studentLinkedList;
	for(int i = 0; i < StudentCount(); i++)
	{            
            n = n->next;
            if(((Student*)n.element)->student_nr == a)
            {
                return n;
            }
	}
*/
}

Node* SelectNode(int a, Node *linkedList)
{
	Node *n;
	n = linkedList;
	for(int i = 0; i < a; i++)
	{
		n = n->next;
	}
	return n;
}

int DeleteNode(int a, Node *linkedList)
{
	Node *n = StudentSelectNode(a-1, linkedList);
	Node *m = StudentSelectNode(a+1, linkedList);
	Node *d = StudentSelectNode(a, linkedList);
	n->next = m;
	free(d);
	return 0;
}

int Count( Node *linkedList)
{
    printf("\nStarting Student Count()");
    Node *n;

    if(linkedList != 0)
    n = linkedList;
    else
    return 1;
    
    int i = 1;
    printf("\nStarting Loop");
    if(n-> next == 0)
        printf("next is 0");
    else
        printf("next is not 0");
        
    while(n->next != 0)
    {
            i++;
            n = n->next;
    }
    printf("\n There are %d nodes in the LinkedList",i);
    return 0;
}
