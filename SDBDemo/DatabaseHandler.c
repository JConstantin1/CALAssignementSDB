#include "DatabaseHandler.h"

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

int loadDatabase(char* type)
{
    
    FILE *db;    
    char *line[BUFFER];
    int mychar = type[0];    
    char * line2 = NULL;
    size_t len = 0;
    ssize_t read;    
    int nodeId;
    char *nodeData;
    
    while ((read = getline(&line2, &len, db)) != -1) {  
        if(mychar == line2[0])
        {
        printf("%s", line2);
        sscanf (line2, "S %d %s", &nodeId, nodeData);
        AddNode(AddStudent(11, nodeId, nodeData));                
        }
    }
    return 0;
}

int enterDatabase(char* a)
{
    FILE *db;
    
    db = fopen("database.txt", "a"); // a = appends, w = delete previous content
    fprintf("Entering Data %s\n",a);
    fputs(a, db);
    fclose(db);
    return 0;
}