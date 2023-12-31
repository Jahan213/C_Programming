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

    while(1)
    {
        flag = 0;
        /* save the x and y coordinates of the ball*/
        oldx =ballx;
        oldy =bally;

        ballx =ballx+ dx;
        bally =bally+ dy;

        if(bally>40)
        {
            limit=50;
            currentlayer=4;
        }
        else{
            if(bally>30)
                {
                limit=40;
                currentlayer=3;
            }
            else{
                if(ball>20)
                {
                    limit=30;
                    currentlayer=2;
                }
                else{
                    if(ball>10){
                        limit=20;
                        currentlayer=1;
                    }
                    else{
                        limit=10;
                        currentlayer=0;
                    }
                }
            }
        }

        /*if the ball hots the left boundary, deflect it to the right*/
        if(ballx<1)
        {

            music(5);
            ballx=1;
            dx=-dx;
        }
        /* if the ball hits the right boundary, deflect it to the left*/
        if(ballx>(maxx-24-1))
        {
            music(5);
            ballx=maxx-24-1;
            dx=-dx;
        }
        /*if the ball hits the top boundary, deflect it down*/
        if(bally<1)
        {
            music(5);
            bally=1;
            dy=-dy
        }
        /* if the ball is in the occupied by the bricks*/
        if(bally<limit)
            /*if there is no brick present exactly at the top of the ball*/
            if(bri[currentlayer][(ballx+)/32]==1)
        {
            /*determine if the boundary of the ball touches a brick*/
            for(i=1;i<=6;i++)
            {
                /*check whether there id a brick to the right of the ball*/
                if(bri[currentlayer][(ballx+i+10)/32]==0)
                {
                    /*if there is a brick*/
                    ballx=ballx+i;
                    flag=1;
                    break;
                }
                /*check whether there is a brick to the left of the ball*/
                if(bri[currentlayer][(ballx-i+10)/32]==0)
                {
                    ballx=ballx-i;
                    flag=1;
                    break;
                }
            }

            /*if the ball does not touch a brick at the top,left or right*/
            if(!flag)
            {
                /*check if the ball has moved above the current layer*/
                if(bally<layer[currentlayer-1])
                {
                    /*if so change current layer appropriately*/
                    currentlayer--;
                    limit=layer[currentlayer];
                }
                /*put the image of the ball at the old coordinates*/
                putimage(oldx, oldy, p1, OR_PUT);
                /*erase the image at the old coordinates*/
                putimage(oldx, oldy, p1, XOR_PUT);
                /*place the image of the ball at the old coordinates*/
                putimage(ballx, bally, p1, XOR_PUT);

                /*introduce delay*/
                dealy(speed);
                /*carry on with moving the ball*/
                continue;
            }
        }
        /*control comes to this point only if the ball is touching a brick*/
        music(4);  //play music

        /*erase the brick hit by the ball*/
        erasebrick((ballx+10)/32, currentlayer);

                                                                                                       //page-617
        /*if the brick hit happens to be on the extreme right*/
        if((ballx+10)/32==19)
            line(maxx, 0, maxx, 50); //redraw right boundary

        /*if the brick hit happens to be on the extreme left*/
        if((ballx+10)/32==0)
            line(0, 0, 0, 50);   //redraw left boundary

        /*if the brick hit happens to be in the topmost layer*/
        if(currentlayer==0)
            line(0, 0, maxx, 0);   //redraw top boundary

        /*set appropriate array element to 1 to indicate absence of brick*/
        bri[currentlayer][(ballx+10)/32]=1;

        bally=bally+1;   //update the y coordinate
        dy=-dy;    //change the direction of the ball
        score+=5;  //increment score
        gotxy(16,25);
        printf("%d",score);   //print latest score

        /*if the first brick is hit during a throw*/
        if(welldone==NO)
            welldone=YES;
        else{
            /*for the consecutive bricks hit during the same throw*/
            selcolor(10);
            outtextxy(midx, midy, "MAMA!");
            music(4);

        }

    }

    /*clear part of the screen used for displaying well done message*/
    if(bally>50 && welldone==YES)
    {
        setviewport(midx-32*2.5, midy-32/2, midx+32*2.5,midy+32/2,1);
        clearviewport();
        setviewport(0, 0, maxx, mmaxy, 1);
        welldone=NO;

    }
    /*if the ball has reached the bottom*/
    if(bally>330-12)
                                                                                             //page-618
    {
        welldone=NO;
        /*IF THE PADDLE HAS MISSED THE BALL*/
        if(ballx<paddlex-20 || ballx>paddlex+50)
        {
            /*continue the descent of the ball*/
            while(bally<117)
            {
                /*erase the image of the ball at the old coordinates*/
                putimage(oldx, oldy, p1,XOR_PUT);
                /*put the image of the ball at the updated coordinates*/
                putimage(ballx, bally, p1, XOR_PUT);

                /*introduce delay*/
                dealy(speed);
                /*save the current x and y coordinates of the ball*/
                oldx=ballx
                oldy=bally;

                /*update balls and bally to move the ball in appropriate direction*/
                ballx=ball+dx;
                bally=bally+dy;
            }
            chance--;    //decrement the number of chances
            score-=20;   //decrement 20 points for each ball lost
            gotxy(16,25);
            printf("%d",score);   //print latest score
            music(2);

            /*erase one out of the available balls*/
            if(chance)
                putimage(515+(chance-1)*35-12, maxy-10, p1, XOR_PUT);

            /*if the last ball is being played*/
            if(chance==1)
            {
                gotxy(25,20);
                printf("This is the last ball......Please be careful!");
            }
            /*if all the balls are lost*/
            if(!chance)
            {
                cleardevice();
                setcolor(13);
                outtextxy(midx, midy, "Try again");
                outtextxy(midx,midy+40, "Press any key......");
                music(3);
                closegraph();
                restorecrtmode();
                exit(0);
            }
        }
        /*if ball is collected on paddle*/
        music(5);
        bally=330-12;      //restore the y coordinate of ball*/
        dy=-dy;   /*deflect the ball upwards*/
    }
    /*put the image of the ball at the old coordinates*/
    putimage(oldx, oldy, p1, XOR_PUT);
    /*erase the image of the ball at the old coordinates*/
    putimage(oldx, oldy, p1, XOR_PUT);
    /*put the image of the ball at the updated coordinates*/
    putimage(ballx, bally, p1,XOR_PUT);

    /*if all the bricks have been destroyed*/
    if(score==500-((4-chance)*20))
    {
        outtextxy(midx, midy, "You win !!");

        if(score<500)
            outtextxy(midx, midy+30, "Try scoring 500");
        else
            outtextxy(midx, midy+30, "Thank you!");
            music(3);
            closegraph();
            restorecrtmode();
            exit(0);
    }
    /*introduce delay*/
    delay(speed);
    /*if the user has pressed a key to move the paddle*/
    if(kbhit())
    {
        /*issue interrupt to obtain the ascii an scan codes of key hit*/
        ii.h.ah=0;
        int86(22, &ii, &oo);
        /* put the image of the paddle at the old coordinates*/
        putimage(paddlex, paddley, p2, OR_PUT);
        /*erase the image of the paddle at the old coordinates*/
                                                                                                      ///page-620

        putimage(paddlex, paddley, p2,XOR_PUT);
        /*if Esc key has been pressed*/
        if(oo.h.ah==1)
        exit(0);

        /*right arrow key*/
        if(oo.h.ah==75)
            paddlex=paddlex-15;
        /*left arrow key*/
        if(oo.h.ah==77)
            paddlex=paddlex+15;

        /*if paddle goes beyond left boundary*/
        if (paddlex<0)
            paddlex=0;

        /*if paddle goes beyond right boundary*/
        if(paddlex>589)
            paddlex=589;

        /*put the image of the paddle at the proper position*/
        putimage(paddlex, paddley, p2, XOR_PUT);
    }

}
                                                                     ///(})miatake..........mistake///ekta 2nd bracket kom hoise khuje milaiteparsi na deikho
      /*creates opening screen*/
      mainscreen()     //620 page er eikhan theke suru korba

