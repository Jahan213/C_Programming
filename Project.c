Paranoid()
{
    union REGS ii,oo;
    int ballax, bally, paddlex, paddley, dx = 1, dy = -1, oldx, oldy;
    int gd = 9,level,gm = 1;
    int i, flag = 0, speed = 10, welldone = No, score = 0, chance = 4,area;
    int layer[5]={10, 20, 30, 40, 50},limit =50,currentlayer = 4;
    char *p1, *p2;

    intgraph(&gd, &gm, "c:\\tc\\bgi");
    maxx = getmaxx();
    maxy = getmaxy();

    midx = maxx/2;
    midy = maxy/2;

    level = mainscreen();

    switch(level)
    {
    case 1:
        speed = 12;
        break;

    case 2:
        speed = 8;
        break;
    case 3:
        speed = 4;
    }

    setcolor(12);
    ractangle(0,0,maxx,maxy);
    bricks();

    setcolor(9);
    rectangle(midx-25, maxy-7-12, midx+25, maxy-15);
    setfillstyle(i,10);
    floodfill(midx, midy-1-15,9);

    setcolor(14);
    circle(midx, midy-13-12, 7);
    floodfaill(midx, midy-13-12, 14);
    area = imagesize(midx-12, maxy-18, midx+12, maxy-8);
    p1 = malloc(area);

    if(p1==NULL || p2 == Null)
    {
        puts("Insufficient memory space!");
        exit(1);
    }

    getimage(midx-12, maxy-7-12-12+1, midx+12, maxy-8-12, p1);
    getimage(midx-25,maxy-7-12,midx+25,maxy-1-12, p2);

    paddlex = midx-25;
    paddley = maxy-7-12;

    ballx = midx-12;
    bally = maxy-7-12+1-12;

    setcolor(10);
    outtextxy(midx+15, midy+165, "Balls Remaining: ");
    for(i=0;i<3;i++)
    {
        setcolor(14);
            circle(515+i*35,maxy-5, 7);
            floodfaill(515+i*35, maxy-5, 14);

    }
    setcolor(10);
    outtestxy(midx-295,midy+165,"Your Score : ");
    settestjustify(CENTE_TEXT, CENTER_TEXT);
    settextstyle(5, HORIZ_DIR, 5);
}
