#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
 int vertex;
 struct Node* next;
};
struct Graph
{
 int numVertices;
 struct Node** adjLists;
 int *visted;
};
struct Node* createNode(int v)
{
 struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
 newNode->vertex=v;
 newNode->next=NULL;
 return newNode;
}
struct Graph* createGraph(int vertices)
{
 struct Graph* graph=(struct Graph*)malloc(sizeof(struct Graph));
 int i;
 graph->numVertices=vertices;
 graph->adjLists=(struct Node**)malloc(vertices* sizeof(struct Node*));
 graph->visted=(int*)malloc(vertices* sizeof(int));
 for(i=0;i<vertices;i++)
 {
  graph->adjLists[i]=NULL;
  graph->visted[i]=0;
 }
 return graph;
}
void addEdge(struct Graph* graph,int src,int des)
{
 struct Node* newNode=createNode(des);
 newNode->next=graph->adjLists[src];
 graph->adjLists[src]=newNode;
 newNode=createNode(src);
 newNode->next=graph->adjLists[des];
 graph->adjLists[des]=newNode;
}
void dfs(struct Graph* graph,int vertex)
{
 struct Node* temp;
 graph->visted[vertex]=1;
 printf("%d ",vertex);
 temp=graph->adjLists[vertex];
 while(temp!=NULL)
 {
  int adjVertex=temp->vertex;
  if(graph->visted[adjVertex]==0)
  {
   dfs(graph,adjVertex);
  }
  temp=temp->next;
 }
}
void main()
{
 int vertices=5;
 struct Graph* graph=createGraph(vertices);
 clrscr();
 addEdge(graph,0,1);
 addEdge(graph,0,2);
 addEdge(graph,1,3);
 addEdge(graph,1,4);
 printf("DFS Traversal");
 dfs(graph,0);
 getch();
}

