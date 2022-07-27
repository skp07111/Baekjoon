#include <stdio.h>

int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    scanf("%d %d", &ax, &ay);
    scanf("%d %d", &bx, &by);
    scanf("%d %d", &cx, &cy);
    
    if (ax == bx) dx = cx;
    else if(ax == cx) dx = bx;
    else if(bx == cx) dx = ax;
    
    if (ay == by) dy = cy;
    else if(ay == cy) dy = by;
    else if(by == cy) dy = ay;
    
    printf("%d %d", dx, dy);
}