#include <stdio.h>
#include <stdlib.h>
struct point{
    int x,y;
    struct point* next;
};
void printPoints(struct point*);
struct point * append(struct point *,struct point *);
struct point * createPoint(int,int);
void addPoints(struct point**,struct point**,struct point**,int num);
void freePoint(struct point*);
int main(){
    struct point * start, * end, * newpt;
    int num = 0,x = 0,y = 0;
    printf("How many points?\n");
    scanf("%d", &num);
    addPoints(&start,&end,&newpt,num);
    printPoints(start);
    freePoint(start);
    return 0;
}
void printPoints(struct point* start){
    struct point * ptr;
    ptr = start;
    while(ptr!=NULL){
        printf("%d %d ", ptr->x,ptr->y);
        ptr = ptr->next;
    }
}
struct point* append(struct point * end,struct point * newPt){
    end->next = newPt;
    return(end->next);
}
struct point * createPoint(int x,int y){
   struct point* ptr = (struct point *) malloc(sizeof(struct point));
   ptr->x = x;
   ptr->y = y;
   ptr->next = NULL;
   return(ptr);
}
void addPoints(struct point** start,struct point** end,struct point** newpt, int num){
   printf("Introduce the points(x y)\n");
   int x = 0, y = 0;
    for(int i = 0;i < num;i++){
        scanf("%d %d",&x,&y);
        *newpt = createPoint(x,y);
        if(i == 0){
            *start = *end = *newpt;
        }
        else{
            *end = append(*end, *newpt);
        }
    }
    
}
void freePoint(struct point* start){
    struct point * ptr = start;
    while (ptr != NULL){
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}