#include "ljjz.h"
void dijkstra(AdjMatrix G,int v);
int main()
{
	AdjMatrix G;
	int n,e,v;
	printf("�����붥�������ͱߵ�������(�Կո����)");
	scanf("%d%d",&n,&e);
	getchar();
	creat(&G, n, e);
	printf("�������������·���Ķ���(v��ֵΪ�����������е��±�):");
	scanf("%d",&v);
	dijkstra(G,v);
}
                         

void dijkstra(AdjMatrix G,int v)
{
	int dist[M];
	int s[M], path[M]; 
 	int i,j,u,w,min;
   for(int i=0;i<G.numV;i++)          //��ʼ��
   {  dist[i]=G.Edge[v][i]; s[i]=0;
      if(i!=v && dist[i]<Max)  path[i]=v;
      else path[i]=-1; 
	}
  		 s[v]=1; dist[v]=0;           //�ȱ���v
	for(i=1;i<G.numV;i++)
   		{   
   		min=Max;
       for(j=1;j<G.numV;j++)       /*ѡ�����·��dist[k]*/
          if(s[j]!=1 && dist[j]<min)
          {  min=dist[j];  u=j;
		   }    //u��������ͨ��������ĵ�
       s[u]=1;    
       for(w=0;w<G.numV;w++)             /*�޸�dist����*/
          if(s[w]==0)
	           if(dist[w]>dist[u]+G.Edge[u][w])
            {   dist[w]=dist[u]+G.Edge[u][w]; path[w]=u; }
	  }
	  for(i=0;i<G.numV;i++){
	  	printf("\n��%d����̾��룺dist��ֵ��%d",i,dist[i]);
	  }
}


