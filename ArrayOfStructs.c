#include <stdio.h>
struct point{
    int x;
    int y;
};
void printPoint(struct point pt);
void readPoint(struct point * ptr);
void printTriangle(struct point *ptr);
int main(){
    struct point triangle[3];
    for(int i = 0; i < 3; i++){
        readPoint(&triangle[i]);
    }
   printTriangle(triangle);
    return 0;
}
void readPoint(struct point* ptr){
    printf("Introduce x e y:\n");
    scanf("%d %d",&ptr->x,&ptr->y);
}
void printPoint(struct point pt){
    printf("(%d, %d)\n",pt.x,pt.y);
}
void printTriangle(struct point *ptr){
   for(int i = 0; i < 3; i++){
    printPoint(ptr[i]);
   }
}