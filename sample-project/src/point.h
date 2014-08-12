#ifndef point_H
#define point_H

struct point {
    int x;
    int y;
};

struct point MakePoint(int, int);

void DrawPoint(struct point);

#endif // point_H
