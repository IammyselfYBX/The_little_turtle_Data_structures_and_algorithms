#include "node.h"

Status InitList(StaticLinkList space){
    for(int i = 0; i<MAXSIZE; i++){
        space[i].cur = i+1;
    }
    space[MAXSIZE-1].cur = 0;

    return OK;
}
