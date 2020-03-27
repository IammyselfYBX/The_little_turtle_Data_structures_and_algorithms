#include "MGraph.h"

int locateVertex(MGraph *g, VertexType v){
    for(int i=0; i<g->vexnum; i++){
        if(v == g->vex[i]){
            return i;
        }
    }

    return -1;
}