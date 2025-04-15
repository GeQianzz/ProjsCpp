#include <stdio.h>
#include <stdlib.h>

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d%d%d%d%d%d%d%d", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    printf("%d",abs((x2-x1)*(y4-y1)-(y2-y1)*(x4-x1)));

    return 0;
}