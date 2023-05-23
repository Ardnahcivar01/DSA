#include<stdio.h>
#include<stdlib.h>

struct node{
    int desti;
    struct node* next;
};

struct adjlist{
    struct node* head;
};

struct Graph{
    int vertex;
    struct adjlist* array;
};

struct node* adjnode(int desi){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->desti = desi;
    newnode->next = NULL;
    return newnode;
}

struct Graph* createGraph(int ver){
    struct Graph* graph ;
    graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertex = ver;
    graph->array = (struct adjlist* )malloc(ver * sizeof(struct adjlist));
    
    for(int i=0;i<ver;i++)
      graph->array[i].head = NULL;
      return graph;
}

// function to addedges in the graph
void addEdge(struct Graph* graph,int src,int det){
    struct node* check = NULL;
    struct node* newnode = adjnode(det);
    // Move from source to destination 
    if(graph->array[src].head == NULL){
        newnode->next = graph->array[src].head;
        graph->array[src].head = newnode;
    }
    else {
        check = graph->array[src].head ;
        while(check->next!=NULL){
            check = check->next;
        }
        check->next = newnode;
    }
    
    // Move from destination to source
    newnode = adjnode(src);
    if(graph->array[det].head == NULL){
        newnode->next = graph->array[det].head;
        graph->array[det].head = newnode;
    }
    else{
        check = graph->array[det].head;
        while(check->next != NULL){
            check = check->next;
        }
        check->next = newnode;
    }
}

void print(struct Graph* graph){
    int i;
    for(i=0;i<graph->vertex;i++){
        struct node* ptr = graph->array[i].head;
        printf("\n The adjacency list of vertex %d is :\n head",i);
        while(ptr){
            printf("->%d",ptr->desti);
            ptr = ptr->next;
        }
        printf("\n");
        }
}

int main()  
{  
  
  int v = 4;
  struct Graph* graph = createGraph(v);
    addEdge(graph, 0, 1);  
    addEdge(graph, 0, 3);  
    addEdge(graph, 1, 2);  
    addEdge(graph, 1, 3);  
    addEdge(graph, 2, 4);  
    addEdge(graph, 2, 3);  
    addEdge(graph, 3, 4); 
    print(graph);
    return 0;  
} 