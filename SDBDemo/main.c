#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
//#include <ncurses.h>
#include "Student.h"
#include "Node.h"
#include "Teacher.h"
#include "Assignment.h"
#include "Course.h"
#include "Class.h"
#include "Enrolment.h"
#include "DatabaseHandler.h"

struct Node *studentLinkedList = 0;
struct Node *teacherLinkedList = 0;
struct Node *assignmentLinkedList = 0;
struct Node *classLinkedList = 0;
struct Node *enrolmentLinkedList = 0;

int main()
{            
        printf("\n");
        if(StudentCount(studentLinkedList) == 1)
            printf("studentlinkedlist is 0");
        printf("\n");
        printf("\n");        
        printf("Loading\n");
        loadDatabase();
        sleep(1);        
        countList(studentLinkedList);
	return 0;
}

int sleep(int a)
{
    const int delay = 1;
    static int count = 1;
    time_t current_time = time(NULL);
    while (current_time + delay > time(NULL))
        ;
    
    if (count ++ > 10)
    {
        count = 1;
        return 1;
    }
    else
        return 0;   
}


int loadDatabase()
{
    
    FILE *db;        
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char *nodeData;
    char dat[100];
    char extra[100];
    char *type1 = "S";
    char *type2 = "T";
    char *type3 = "E";
    char *type4 = "A";
    char *type5 = "C";
    int mychar1 = type1[0];
    int mychar2 = type2[0];
    int mychar3 = type3[0];
    int mychar4 = type4[0];
    int mychar5 = type5[0];
    
    db = fopen("database.txt", "r");
    
    printf("\nAccessing Database");
    while ((read = getline(&line2, &len, db)) != -1) {  
        if(line2[0] == mychar1)
        {
            printf("\n%s", line2);
            sscanf (line2, "S %d %s", &nodeId, dat);
            
            StudentAddNode(AddStudent(11, nodeId, dat), studentLinkedList);
            printf("added %s", dat);
        }
        if(line2[0] == mychar2)
        {
            printf("\n%s", line2);
            sscanf (line2, "T %d %s", &nodeId, dat);
            
            TeacherAddNode(addTeacher(nodeId, dat), teacherLinkedList);
        }
        if(line2[0] == mychar3)
        {
            printf("\n%s", line2);
            sscanf (line2, "E %d %s", &nodeId, dat);
            
            EnrolmentAddNode(createEnrolment(nodeId, dat), enrolmentLinkedList);
        }
        if(line2[0] == mychar4)
        {
            printf("\n%s", line2);
            sscanf (line2, "A %d %s", &nodeId, dat);
            
            AssignmentAddNode(createAssignment(nodeId, dat), assignmentLinkedList);
        }
        if(line2[0] == mychar5)
        {
            printf("\n%s", line2);
            sscanf (line2, "C %d %s%s", &nodeId, dat, extra);
            
            ClassAddNode(AddClass(nodeId, dat, extra), classLinkedList);
        }
    }
    return 0;
}

void countList()
{
    
    printf("\nStarting  Count()");
    Node *n;

    if(studentLinkedList != 0)
    n = studentLinkedList;
    else
        printf("\nlist is 0");
    
    int i = 1;
    printf("\nStarting Loop");
        
    while(n->next != 0)
    {
            i++;
            n = n->next;
    }
    printf("\n There are %d nodes in this LinkedList",i);
}



/*
	int i = 0;
	while(1)
	{
            printf("\n Node age is %d\n", ((Student *)SelectNode(i)->element)->age);
            printf(" Node name %s\n", ((Student *)SelectNode(i)->element)->name);
            printf(" Node student nr %d\n ",((Student*)(*SelectNode(i)).element)->student_nr);
            printf(" Node next %p \n ", SelectNode(i)->next);
            if(SelectNode(i)->next == 0)
            break;
            i++;
	}
        int index = 0;
*/