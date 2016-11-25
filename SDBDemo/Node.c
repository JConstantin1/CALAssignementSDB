#include "Node.h"
#include "Student.h"
#include <stdio.h>
#include <stdlib.h>


int StudentAddNode(void *item, Node *linkedList)
{
	Node *n = (Node *)malloc(sizeof(Node));
	if(n==0)
	return -1;
	n -> element = item;
	n -> next = linkedList;
	linkedList = n;
	return 0;
}

Node* SelectStudent(int a, Node *linkedList)
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

Node* StudentSelectNode(int a, Node *linkedList)
{
	Node *n;
	n = linkedList;
	for(int i = 0; i < a; i++)
	{
		n = n->next;
	}
	return n;
}

int StudentDeleteNode(int a, Node *linkedList)
{
	Node *n = StudentSelectNode(a-1, linkedList);
	Node *m = StudentSelectNode(a+1, linkedList);
	Node *d = StudentSelectNode(a, linkedList);
	n->next = m;
	free(d);
	return 0;
}

int StudentCount( Node *linkedList)
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

int TeacherAddNode(void *item, Node *linkedList)
{
	Node *n = (Node *)malloc(sizeof(Node));
	if(n==0)
	return -1;
	n -> element = item;
	n -> next = linkedList;
	linkedList = n;
	return 0;
}

Node* SelectTeacher(int a, Node *linkedList)
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

Node* TeacherSelectNode(int a, Node *linkedList)
{
	Node *n;
	n = linkedList;
	for(int i = 0; i < a; i++)
	{
		n = n->next;
	}
	return n;
}

int TeacherDeleteNode(int a, Node *linkedList)
{
	Node *n = TeacherSelectNode(a-1, linkedList);
	Node *m = TeacherSelectNode(a+1, linkedList);
	Node *d = TeacherSelectNode(a, linkedList);
	n->next = m;
	free(d);
	return 0;
}

int TeacherCount(Node *linkedList)
{
    printf("\nStarting Teacher Count()");
    Node *n;

    if(linkedList != 0)
    n = linkedList;
    else
    return 1;
    
    int i = 1;
    printf("\nStarting Loop");
        
    while(n->next != 0)
    {
            i++;
            n = n->next;
    }
    printf("\n There are %d nodes in the Teacher LinkedList",i);
    return 0;
}


int AssignmentAddNode(void *item, Node *linkedList)
{
	Node *n = (Node *)malloc(sizeof(Node));
	if(n==0)
	return -1;
	n -> element = item;
	n -> next = linkedList;
	linkedList = n;
	return 0;
}

Node* SelectAssignment(int a, Node *linkedList)
{
/*
	Node *n;
	n = assignmentLinkedList;
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

Node* AssignmentSelectNode(int a, Node *linkedList)
{
	Node *n;
	n = linkedList;
	for(int i = 0; i < a; i++)
	{
		n = n->next;
	}
	return n;
}

int AssignmentDeleteNode(int a, Node *linkedList)
{
	Node *n = AssignmentSelectNode(a-1, linkedList);
	Node *m = AssignmentSelectNode(a+1, linkedList);
	Node *d = AssignmentSelectNode(a, linkedList);
	n->next = m;
	free(d);
	return 0;
}

int AssignmentCount(Node *linkedList)
{
    printf("\nStarting Assignment Count()");
    Node *n;

    if(linkedList != 0)
    n = linkedList;
    else
    return 1;
    
    int i = 1;
    printf("\nStarting Loop");
        
    while(n->next != 0)
    {
            i++;
            n = n->next;
    }
    printf("\n There are %d nodes in the Assignment LinkedList",i);
    return 0;
}



int ClassAddNode(void *item, Node *linkedList)
{
	Node *n = (Node *)malloc(sizeof(Node));
	if(n==0)
	return -1;
	n -> element = item;
	n -> next = linkedList;
	linkedList = n;
	return 0;
}

Node* SelectClass(int a, Node *linkedList)
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

Node* ClassSelectNode(int a, Node *linkedList)
{
	Node *n;
	n = linkedList;
	for(int i = 0; i < a; i++)
	{
		n = n->next;
	}
	return n;
}

int ClassDeleteNode(int a, Node *linkedList)
{
	Node *n = ClassSelectNode(a-1, linkedList);
	Node *m = ClassSelectNode(a+1, linkedList);
	Node *d = ClassSelectNode(a, linkedList);
	n->next = m;
	free(d);
	return 0;
}

int ClassCount(Node *linkedList)
{
    printf("\nStarting Class Count()");
    Node *n;

    if(linkedList != 0)
    n = linkedList;
    else
    return 1;
    
    int i = 1;
    printf("\nStarting Loop");
        
    while(n->next != 0)
    {
            i++;
            n = n->next;
    }
    printf("\n There are %d nodes in the Class LinkedList",i);
    return 0;
}



int EnrolmentAddNode(void *item, Node *linkedList)
{
	Node *n = (Node *)malloc(sizeof(Node));
	if(n==0)
	return -1;
	n -> element = item;
	n -> next = linkedList;
	linkedList = n;
	return 0;
}

Node* SelectEnrolment(int a, Node *linkedList)
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

Node* EnrolmentSelectNode(int a, Node *linkedList)
{
	Node *n;
	n = linkedList;
	for(int i = 0; i < a; i++)
	{
		n = n->next;
	}
	return n;
}

int EnrolmentDeleteNode(int a, Node *linkedList)
{
	Node *n = EnrolmentSelectNode(a-1, linkedList);
	Node *m = EnrolmentSelectNode(a+1, linkedList);
	Node *d = EnrolmentSelectNode(a, linkedList);
	n->next = m;
	free(d);
	return 0;
}

int EnrolmentCount(Node *linkedList)
{
    printf("\nStarting Enrolment Count()");
    Node *n;

    if(linkedList != 0)
    n = linkedList;
    else
    return 1;
    
    int i = 1;
    while(n->next != 0)
    {
            i++;
            n = n->next;
    }
    printf("\n There are %d nodes in the Enrolment LinkedList",i);
    return 0;
}
