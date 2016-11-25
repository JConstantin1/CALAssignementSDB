typedef struct node{
	void * element;
	struct node *next;
}Node;

int StudentAddNode(void *item, Node *linkedList);
Node* StudentSelectNode(int a, Node *linkedList);
int StudentDeleteNode(int a, Node *linkedList);
int StudentCount(Node *linkedList);

int TeacherAddNode(void *item, Node *linkedList);
Node* TeacherSelectNode(int a, Node *linkedList);
int TeacherDeleteNode(int a, Node *linkedList);
int TeacherCount(Node *linkedList);



int AssignmentAddNode(void *item, Node *linkedList);
Node* AssignmentSelectNode(int a, Node *linkedList);
int AssignmentDeleteNode(int a, Node *linkedList);
int AssignmentCount(Node *linkedList);

int ClassAddNode(void *item, Node *linkedList);
Node* ClassSelectNode(int a, Node *linkedList);
int ClassDeleteNode(int a, Node *linkedList);
int ClassCount(Node *linkedList);

int EnrolmentAddNode(void *item, Node *linkedList);
Node* EnrolmentSelectNode(int a, Node *linkedList);
int EnrolmentDeleteNode(int a, Node *linkedList);
int EnrolmentCount(Node *linkedList);
