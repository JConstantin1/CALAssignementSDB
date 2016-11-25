#include "DatabaseHandler.h"
#include "Node.h"
#include "Student.h"
#include "Teacher.h"

#define BUFFER 1024



char selectDatabase(char* type, char* id)
{
    FILE *db;    
    char *line[BUFFER];
    int mychar = type[0];    
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char *nodeData;
    
    db = fopen("database.txt", "r");
    
    printf("\nAccessing Database");
    if(db == NULL)
    {
        perror("Error in accessing Database");
        return(-1);
    }
    printf("\nDatabase Query  %d \n", mychar);   
    
    if(id == NULL)
    {
        while ((read = getline(&line2, &len, db)) != -1) {  
            if(mychar == line2[0])
            printf("%s", line2);
        }
    }
    else
    {
        while ((read = getline(&line2, &len, db)) != -1) {  
            if(mychar == line2[0] && strstr(line2, id) != NULL)
            printf("%s", line2);
        }
    }
       
    fclose(db);
    return 0;
}

int loadStudentDatabase(char* type)
{
    
    FILE *db;    
    char *line[BUFFER];
    int mychar = type[0];    
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char *nodeData;
    char dat[100];
    
    db = fopen("database.txt", "r");
    
    printf("\nAccessing Database");
    while ((read = getline(&line2, &len, db)) != -1) {  
        if(mychar == line2[0])
        {
            printf("\n%s", line2);
            sscanf (line2, "S %d %s", &nodeId, dat);
            
            //StudentAddNode(AddStudent(11, nodeId, dat ));
            printf("no error");
        }
    }
    return 0;
}


int loadTeacherDatabase(char* type)
{
    
    FILE *db;    
    int mychar = type[0];    
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char dat[100];
    
    db = fopen("database.txt", "r");
    
    printf("\nAccessing Database");
    while ((read = getline(&line2, &len, db)) != -1) {  
        if(mychar == line2[0])
        {
            printf("\n%s", line2);
            sscanf (line2, "T %d %s", &nodeId, dat);            
           // TeacherAddNode(addTeacher(nodeId, dat ));
        }
    }
    return 0;
}


int loadAssignmentDatabase(char* type)
{
    
    FILE *db;    
    int mychar = type[0];    
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char dat[100];
    
    db = fopen("database.txt", "r");
    
    printf("\nAccessing Database");
    while ((read = getline(&line2, &len, db)) != -1) {  
        if(mychar == line2[0])
        {
            printf("\n%s", line2);
            sscanf (line2, "A %d %s", &nodeId, dat);            
          //  AssignmentAddNode(createAssignment(nodeId, dat ));
        }
    }
    return 0;
}

int loadClassDatabase(char* type)
{
    
    FILE *db;    
    int mychar = type[0];    
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char dat[100];
    
    db = fopen("database.txt", "r");
    
    printf("\nAccessing Database");
    while ((read = getline(&line2, &len, db)) != -1) {  
        if(mychar == line2[0])
        {
            printf("\n%s", line2);
            sscanf (line2, "C %d %s", &nodeId, dat);            
           // ClassAddNode(AddClass(nodeId, dat ));
        }
    }
    return 0;
}

int loadEnrolmentDatabase(char* type)
{
    
    FILE *db;    
    int mychar = type[0];    
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char dat[100];
    
    db = fopen("database.txt", "r");
    
    printf("\nAccessing Database");
    while ((read = getline(&line2, &len, db)) != -1) {  
        if(mychar == line2[0])
        {
            printf("\n%s", line2);
            sscanf (line2, "E %d %s", &nodeId, dat);            
           // EnrolmentAddNode(createEnrolment(nodeId, dat ));
        }
    }
    return 0;
}


int enterDatabase(char* a)
{
    FILE *db;
    
    db = fopen("database.txt", "a"); // a = appends, w = delete previous content
    fprintf("Entering Data %s\n", a);
    fputs(a, db);
    fclose(db);
    return 0;
}