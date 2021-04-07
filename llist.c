#include "defs.h"
#include <stdio.h>

void append(struct llist lst, int val)
{
    lst.len ++;
    struct node NI(n);
    n.val = val;

    switch (lst.len)
    {
    case 0:
        lst.first = &n;
        lst.last = &n;
        break;
    
    default:
        struct node last = *(lst.last);
        last.next = &n;
        lst.last = &n;
        break;
    }
}

void printl(struct llist lst)
{

}