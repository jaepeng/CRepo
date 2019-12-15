#include "ljb.h"
#include "ljjz.h"
void degree(AdjList G); 
int main()
{
	AdjList g;
	creat(&g,6,6);
	degree(g);
return 1;
}
void degree(AdjList G){
	ArcNode *p;
	int i;
	for(i=0;i<G.numV;i++)
    {
    	int count=0;
        p=G.Vertex[i].firstarc;
        while(p)
        {
			count++;
			 p=p->nextarc;
        }
        printf("%c节点的度为:%d",G.Vertex[i].data,count);
     	printf("\n");
	}
	
}
