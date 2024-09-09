#include <stdio.h>
struct point{
    int x;
    int y;
};
void readPoint(struct point * z);
void printPoint(struct point pt);
int main(){
    struct point z;
    readPoint(z);
    return 0;
}
readPoint(struct point * ptr){
    scanf("%d %d", &ptr->x, &ptr->y);
}
void printPoint(struct point pt){
     printf("%d %d", pt.x, pt.y);
}