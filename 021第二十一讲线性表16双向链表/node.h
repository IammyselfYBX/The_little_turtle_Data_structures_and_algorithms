#define MAXSIZE 1000
#define OK 1
#define ERROR 0
#define TREU 1
#define FALSE 0
typedef int Status;

typedef int ElemType;
typedef struct DualNode{
    ElemType data;
    struct DualNode *poior;
    struct DualNode *next;
}DualNode, *DuLinklist;
