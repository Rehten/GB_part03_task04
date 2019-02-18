#include <stdio.h>
#include <math.h>

// КОМАНДА ДЛЯ КОМПИЛЯЦИИ: gcc -o main main.c -lm - для поддержки math.h
// после сборки запуститьт объектный код: ./main

struct point {
    int x;
    int y;
};

typedef struct point Point;

struct line {
    Point start;
    Point end;
    double length;
};

typedef struct line Line;

int main() {
    Point start, end;
    Line line = {.start = {.x = 0, .y = 0}, .end = {.x = 0, .y = 0}, .length = 0.00};

    printf("Добро пожаловать в мою программу для подсчета длины вектора\n");

    printf("Введите координаты начала. \n");

    printf("x: ");
    scanf("%d", &start.x);

    printf("y: ");
    scanf("%d", &start.y);

    printf("Введите координаты конца. \n");

    printf("x: ");
    scanf("%d", &end.x);

    printf("y: ");
    scanf("%d", &end.y);

    line.start = start;
    line.end = end;

    printf("Подсчитываем длину вектора...\n");

    line.length = sqrt(((double)line.end.x - (double)line.start.x) * ((double)line.end.x - (double)line.start.x) + ((double)line.end.y - (double)line.start.y) * ((double)line.end.y - (double)line.start.y));

    printf("Длина линии - %7.2f\n", line.length);

    return 0;
}