#include <stdio.h>

int main()
{
    int list[] = {6,-2,5,12,7,3,8,18,-10,1};
    int n = 10, item = 0, found = 0;
    scanf("%d", &item);
    int i = 0;
    while(!found && i < n){
       if(item == list[i]){
           found = 1;
       } 
       else{
           i++;
        }
    }
    if(!found) printf("item not member of the list\n");
    else printf("item %d found at %d in the list\n",item,i);
    return 0;
}