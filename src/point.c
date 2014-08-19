#include "point.h"

struct point MakePoint(int x, int y)
{
    struct point pt;
    pt.x = x;
    pt.y = y;
}

void DrawPoint(struct point pt)
{
    Draw_Int(pt.x);
    Draw_Int(pt.y);
}
