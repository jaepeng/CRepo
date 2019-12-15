#include "ljjz.h"
void dijkstra(AdjMatrix G,int v);
int main()
{
	AdjMatrix G;
	int n,e,v;
	printf("请输入顶点数量和边的数量：(以空格隔开)");
	scanf("%d%d",&n,&e);
	getchar();
	creat(&G, n, e);
	printf("请输入想求最短路径的顶点(v的值为顶点在数组中的下标):");
	scanf("%d",&v);
	dijkstra(G,v);
}
                         

void dijkstra(AdjMatrix G,int v)
{
	int dist[M];
	int s[M], path[M]; 
 	int i,j,u,w,min;
   for(int i=0;i<G.numV;i++)          //初始化
   {  dist[i]=G.Edge[v][i]; s[i]=0;
      if(i!=v && dist[i]<Max)  path[i]=v;
      else path[i]=-1; 
	}
  		 s[v]=1; dist[v]=0;           //先遍历v
	for(i=1;i<G.numV;i++)
   		{   
   		min=Max;
       for(j=1;j<G.numV;j++)       /*选择最短路径dist[k]*/
          if(s[j]!=1 && dist[j]<min)
          {  min=dist[j];  u=j;
		   }    //u是离已连通顶点最近的点
       s[u]=1;    
       for(w=0;w<G.numV;w++)             /*修改dist数组*/
          if(s[w]==0)
	           if(dist[w]>dist[u]+G.Edge[u][w])
            {   dist[w]=dist[u]+G.Edge[u][w]; path[w]=u; }
	  }
	  for(i=0;i<G.numV;i++){
	  	printf("\n到%d的最短距离：dist的值：%d",i,dist[i]);
	  }
}


