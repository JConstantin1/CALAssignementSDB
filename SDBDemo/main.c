#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ncurses.h>
#include "Student.h"
#include "Node.h"
#include "DatabaseHandler.h"

int main()
{
    
	AddNode(AddStudent(20,11111,"Peter"));
	AddNode(AddStudent(31,22222,"Sigmundur Johansen"));
	AddNode(AddStudent(21,32333,"Konstantin"));
	AddNode(AddStudent(55,42312,"Ib Havn"));
	DeleteNode(2);
        printf("\n");       
        Count();        
        printf("\n");    
        sleep(1);
	selectDatabase("S",NULL);
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
        
        loadDatabase("T");
        printf("\n");
        Count();
        printf("\n");
        printf("\n");
        
        //loadDatabase("T");
        sleep(1);
	selectDatabase("T","123457");
        
        Count();
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

