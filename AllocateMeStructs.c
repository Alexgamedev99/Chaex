#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
};
void printPoint(struct point pt);
void readPoint(struct point * ptr);
void printPolygon(struct point *ptr, int vertices);
int main(){
    int num = 0;
    printf("How many vertices?\n");
    scanf("%d",&num);
    struct point * polygon;
    polygon = (struct point *) malloc(num* sizeof(struct point));
    for(int i = 0; i < num; i++){
        readPoint(&polygon[i]);
    }
    printPolygon(polygon,num);
    free(polygon);
    return 0;
}
void readPoint(struct point* ptr){
    printf("Introduce x e y:\n");
    scanf("%d %d",&ptr->x,&ptr->y);
}
void printPoint(struct point pt){
    printf("(%d, %d)\n",pt.x,pt.y);
}
void printPolygon(struct point *ptr, int vertices){
   for(int i = 0; i < vertices; i++){
    printPoint(ptr[i]);
   }
}