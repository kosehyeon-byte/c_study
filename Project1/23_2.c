/*
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point leftup;
	Point rightdown;
} Rectangle;

void RectArea(Rectangle * prect) {
	int width = prect->rightdown.xpos - prect->leftup.xpos;
	int height = prect->leftup.ypos - prect->rightdown.ypos;
	int area = width * height;
	printf("Area of the rectangle: %d\n", area);
}

void RectPoint(Rectangle * prect) {
	printf("Left Up Point: [%d, %d]\n", prect->leftup.xpos, prect->leftup.ypos);
	printf("Right Up Point: [%d, %d]\n", prect->rightdown.xpos, prect->leftup.ypos);
	printf("Right Down Point: [%d, %d]\n", prect->rightdown.xpos, prect->rightdown.ypos);
	printf("Left Down Point: [%d, %d]\n", prect->leftup.xpos, prect->rightdown.ypos);
}



*/

