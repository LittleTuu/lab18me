#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
    double left = max(R1->x, R2->x);
    double right = min(R1->x+R1->w, R2->x+R2->w);
    double top = min(R1->y, R2->y);
    double bottom = max(R1->y-R1->h, R2->y-R2->h);
    double overlapw = right-left;
    double overlaph = top-bottom;
    
    if (overlapw>0 && overlaph>0){
        return overlapw*overlaph;
    }
    return 0;
}
