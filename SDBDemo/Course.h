

typedef struct course{
    int course_num;
    char course_name[30];
    int semester_num;
}Course;

Course* createCourse(int course_num, char *course_name, int semester_num);