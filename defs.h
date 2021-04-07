#define NI(X) X = {0, 0}
#define LI(X) X = {0, 0, 0}

struct node
{
    int val;
    struct node * next;
}node;

struct llist
{
    int len;
    struct node * first;
    struct node * last;
}llist;
