/*Project Video Game*/
/*Breaks Breaker Video Game*/

#include<stdio.h>
#include<conio.h>

#include<process.h>
#include<dos.h> // graphics ar jonno use korbo.
#include<stdlib.h>
#include<graphics.h>//auto detection graphics mode

#define NULL 0
#define Yes 1
#define No 0

int maxx, maxy, midx, midy;
int bri[5][20]; // 2 Dimensional (5 row, 20 col) for

int main(void)
{
    int gdriver = 9, gmode = 1;
    int i, maxx, maxy;
    /*Graphics Initialization*/
    initgraphics(&gdriver, &gmode, "c:\\tc\\bgi");

    maxx = getmaxx();
    maxy = getmaxy();

    setcolor(getmaxcolor());
    /*drawing color*/
    setfillstyle(SOLID_FILL, getmaxcolor());
    /*fill color*/
    /*Draw a border around the screen*/
    setcolor(10);
    for(i=0, i<=10; i++)
    {
        rectangle(i, i, maxx-i, maxy-i);
    }
    setcolor(9);
    rectangle(0, 0, maxx, maxy);
    setcolor(10);
    outtextxy(midx + 230, midy + 40, "__WLECOME TO THE NEW GAME__");
    outtextxy(midx + 230, midy + 55, "Press any key to continue....");

    setcolor(9);
    for(i=0; i<=130; i++)
    {
        circle(maxx/2, maxy/2, i);
        setfillstyle(1,0);
        delay(20);
    }

    setcolor(12);
    ottextxy(midx + 300, midy + 170,"UNIC");
    /*Wait for a key*/
    getch();

    /*fill in bounded region*/
    floodfill(i, i, getmaxcolor());

    closegrpah();

    paranoid();
    return;
}


Paranoid()
{
    union REGS ii,oo;
    int ballax, bally, paddlex, paddley, dx=1, dy=-1, oldx, oldy;
    int gd=9, level, gm=1;
    int i, flag=0, speed=10, welldone=No, score=0, chance=4, area;
    int layer[5]={10, 20, 30, 40, 50}, limit=50, currentlayer=4;
    char *p1, *p2;

    /*initializing graphics system*/
    initgraph(&gd, &gm, "c:\\tc\\bgi");

    maxx = getmaxx();
    /* maximum x screen coordinates*/
    maxy = getmaxy();
    /* maximum y screen coordinates*/

    midx = maxx/2;
    midy = maxy/2;

    /*calculate center of screen*/
    /* display opening screen and receive player's level*/
    level = mainscreen();

    /* set speed of ball as per the level chosen */
    switch(level)
    {
    case '1':
        speed = 12;
        break;

    case '2':
        speed = 8;
        break;

    case '3':
        speed = 4;
    }

    /* draw the bricks, paddle and ball*/
    setcolor(12);
    rectangle(0, 0, maxx, maxy);
    bricks();
    setcolor(9);
    rectangle(midx-25, maxy-7-12, midx+25, maxy-15);
    setfillstyle(i, 10);
    floodfill(midx, maxy-1-15, 9);

    setcolor(14);
    circle(midx, maxy-13-12, 7);
    floodfaill(midx, midy-13-12, 14);

    /*allocate memory for storing the image of the paddle */
    area = imagesize(midx-12, maxy-18, midx+12, maxy-8);
    p1 = malloc(area);

    /*allocate memory for storing the image of the ball */
    area = imagesize(midx-25, maxy-7,midx+25, maxy-i);
    p2 = malloc(area);

    /*if memory allocation unsuccessful*/
    if(p1==NULL || p2 == NUll)
    {
        puts("Insufficient memory spaces!");
        exit(1);
    }

    /*store the image of the paddle and the ball into allocated memory*/
    getimage(midx-12, maxy-7-12-12+1, midx+12, maxy-8-12, p1);
    getimage(midx-25, maxy-7-12, midx+25, maxy-1-12, p2);

    /*store current position of the paddle and ball*/
    paddlex = midx-25;
    paddley = maxy-7-12;

    ballx = midx-12;
    bally = maxy-7-12+1-12;

    /*display balls in hand (initially 3)*/
    setcolor(10);
    outtextxy(midx+15, midy+165, "Balls Remaining: ");
    for(i=0;i<3;i++)
    {
        setcolor(14);
            circle(515+i*35, maxy-5, 7);
            floodfaill(515+i*35, maxy-5, 14);
    }

    /*display initial score*/
    setcolor(10);
    outtextxy(midx-295, midy+165, "Your Score : ");

    /*set front and alignment for displaying text*/
    settextjustify(CENTE_TEXT, CENTER_TEXT);
    settextstyle(5, HORIZ_DIR, 5);
}

