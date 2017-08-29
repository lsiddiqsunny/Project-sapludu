# include "iGraphics.h"
#include<stdlib.h>
int x=0,y=120,a=70,b=60,j=5,k=255;
int flag=0;
int d=0,e=0;
int count=-1;
int p1=0,p2=0;
int i=0;
int count1=-1;



void chokka()
{
    count1*=-1;

}


void iDraw()
{
    iClear();
    iSetColor(255,255,255);
    iFilledRectangle(0,0,720,720);

    iSetColor(j,(j+k)/2,k);
    iFilledRectangle(x,y,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+70,y,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+140,y,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+210,y,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+280,y,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+350,y,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+420,y,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+490,y,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+560,y,a,b);
    iSetColor(104,213,212);
    iFilledRectangle(x+630,y,a,b);


    iSetColor(j+100,(j+k),k-50);
    iFilledRectangle(x,y+60,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+70,y+60,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+140,y+60,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+210,y+60,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+280,y+60,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+350,y+60,a,b);
    iSetColor(104,213,112);
    iFilledRectangle(x+420,y+60,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+490,y+60,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+560,y+60,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+630,y+60,a,b);

    iSetColor(j,(j+k)/2,k);
    iFilledRectangle(x,y+120,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+70,y+120,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+140,y+120,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+210,y+120,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+280,y+120,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+350,y+120,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+420,y+120,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+490,y+120,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+560,y+120,a,b);
    iSetColor(104,213,212);
    iFilledRectangle(x+630,y+120,a,b);



    iSetColor(j+100,(j+k),k-50);
    iFilledRectangle(x,y+180,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+70,y+180,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+140,y+180,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+210,y+180,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+280,y+180,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+350,y+180,a,b);
    iSetColor(104,213,112);
    iFilledRectangle(x+420,y+180,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+490,y+180,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+560,y+180,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+630,y+180,a,b);

    iSetColor(j,(j+k)/2,k);
    iFilledRectangle(x,y+240,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+70,y+240,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+140,y+240,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+210,y+240,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+280,y+240,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+350,y+240,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+420,y+240,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+490,y+240,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+560,y+240,a,b);
    iSetColor(104,213,212);
    iFilledRectangle(x+630,y+240,a,b);



    iSetColor(j+100,(j+k),k-50);
    iFilledRectangle(x,y+300,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+70,y+300,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+140,y+300,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+210,y+300,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+280,y+300,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+350,y+300,a,b);
    iSetColor(104,213,112);
    iFilledRectangle(x+420,y+300,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+490,y+300,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+560,y+300,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+630,y+300,a,b);


    iSetColor(j,(j+k)/2,k);
    iFilledRectangle(x,y+360,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+70,y+360,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+140,y+360,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+210,y+360,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+280,y+360,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+350,y+360,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+420,y+360,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+490,y+360,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+560,y+360,a,b);
    iSetColor(104,213,212);
    iFilledRectangle(x+630,y+360,a,b);


    iSetColor(j+100,(j+k),k-50);
    iFilledRectangle(x,y+420,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+70,y+420,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+140,y+420,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+210,y+420,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+280,y+420,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+350,y+420,a,b);
    iSetColor(104,213,112);
    iFilledRectangle(x+420,y+420,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+490,y+420,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+560,y+420,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+630,y+420,a,b);

    iSetColor(j,(j+k)/2,k);
    iFilledRectangle(x,y+480,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+70,y+480,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+140,y+480,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+210,y+480,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+280,y+480,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+350,y+480,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+420,y+480,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+490,y+480,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+560,y+480,a,b);
    iSetColor(104,213,212);
    iFilledRectangle(x+630,y+480,a,b);



    iSetColor(j+100,(j+k),k-50);
    iFilledRectangle(x,y+540,a,b);
    iSetColor(124,123,112);
    iFilledRectangle(x+70,y+540,a,b);
    iSetColor(224,123,112);
    iFilledRectangle(x+140,y+540,a,b);
    iSetColor(24,223,112);
    iFilledRectangle(x+210,y+540,a,b);
    iSetColor(24,223,212);
    iFilledRectangle(x+280,y+540,a,b);
    iSetColor(24,123,112);
    iFilledRectangle(x+350,y+540,a,b);
    iSetColor(104,213,112);
    iFilledRectangle(x+420,y+540,a,b);
    iSetColor(24,123,212);
    iFilledRectangle(x+490,y+540,a,b);
    iSetColor(j+10,j+k,k-10);
    iFilledRectangle(x+560,y+540,a,b);
    iSetColor(104,123,112);
    iFilledRectangle(x+630,y+540,a,b);

//for box
    iSetColor(0,0,0);
    iFilledEllipse(60, 90, 40,10);
    iSetColor(0,0,0);
    iFilledEllipse(60, 20, 40,10);
    iSetColor(0,0,255);
    iLine(100,20,100,90);
    iLine(20,20,20,90);

    if(count1==1)
    {


        //for the chokka
        iSetColor(0,255,0);
        iFilledRectangle(120,50,20,20);
        double t1[4]= {110,110,120,120};
        double t2[4]= {40,60,70,50}; //uses  for chokka
        iFilledPolygon(t1,t2,4);
        double t3[4]= {110,120,140,130};
        double t4[4]= {40,50,50,40}; //uses  for chokka
        iFilledPolygon(t3,t4,4);
        iSetColor(0,0,0);
        iLine(120,50,140,50);
        iLine(120,50,120,70);
        iLine(120,70,140,70);
        iLine(140,70,140,50);
        iLine(110,40,120,50);
        iLine(110,40,130,40);
        iLine(130,40,140,50);
        iLine(110,40,120,50);
        iLine(110,40,110,60);
        iLine(110,60,120,70);
    }
    else if(count1==-1)
    {
        //for the chokka
        //   count1*=-1;
        iSetColor(0,255,0);
        iFilledRectangle(50,50,20,20);
        double t1[4]= {40,40,50,50};
        double t2[4]= {40,60,70,50}; //uses  for chokka
        iFilledPolygon(t1,t2,4);
        double t3[4]= {40,50,70,60};
        double t4[4]= {40,50,50,40}; //uses  for chokka
        iFilledPolygon(t3,t4,4);



        iSetColor(0,0,0);
        iLine(50,50,70,50);
        iLine(50,50,50,70);
        iLine(50,70,70,70);
        iLine(70,70,70,50);
        iLine(40,40,50,50);
        iLine(40,40,60,40);
        iLine(60,40,70,50);
        iLine(40,40,50,50);
        iLine(40,40,40,60);
        iLine(40,60,50,70);
        count1=-1;


    }
    if(flag==0)
    {
        //for ghuti
        iSetColor(255,0,0);
        iFilledCircle(170,90,15);
        iCircle(170,30,15);
        iSetColor(255,255,0);
        iFilledCircle(170,30,15);
        iCircle(170,90,15);
        iSetColor(0,0,255);
        iText(230,50,"CLICK THE BOX TO START THE GAME!!!",GLUT_BITMAP_HELVETICA_18);
    }
    if(flag==1)
    {
        iSetColor(0,255,0);
        iText(230,80,"GAME IS ON!",GLUT_BITMAP_HELVETICA_18);
        iSetColor(255,0,0);
        if(count1==1)
        {
            if(i==1)
            {
                iFilledCircle(130,60,1);
                iText(350,30,"1",GLUT_BITMAP_HELVETICA_18);

            }
            else if(i==2)
            {
                iFilledCircle(125,60,1);
                iFilledCircle(135,60,1);
                iText(350,30,"2",GLUT_BITMAP_HELVETICA_18);

            }
            else if(i==3)
            {
                iFilledCircle(128,60,1);
                iFilledCircle(135,60,1);
                iFilledCircle(133,55,1);
                iText(350,30,"3",GLUT_BITMAP_HELVETICA_18);

            }
            else if(i==4)
            {
                iFilledCircle(125,60,1);
                iFilledCircle(132,60,1);
                iFilledCircle(132,55,1);
                iFilledCircle(125,55,1);
                iText(350,30,"4",GLUT_BITMAP_HELVETICA_18);


            }
            else if(i==5)
            {
                iFilledCircle(133,60,1);
                iFilledCircle(127,60,1);
                iFilledCircle(133,55,1);
                iFilledCircle(130,58.5,1);
                iFilledCircle(127,55,1);
                iText(350,30,"5",GLUT_BITMAP_HELVETICA_18);

            }
            else
            {
                iFilledCircle(127,60,1);
                iFilledCircle(127,55,1);
                iFilledCircle(130,55,1);
                iFilledCircle(130,60,1);
                iFilledCircle(133,55,1);
                iFilledCircle(133,60,1);
                iText(350,30,"6",GLUT_BITMAP_HELVETICA_18);

            }

        }
        // printf("%d %d\n",p1,p2);

        if(count==1&&count1==1)
        {
            iSetColor(255,0,0);
            iText(230,30,"Player 1 gets",GLUT_BITMAP_HELVETICA_18);
        }
        if(count==-1&&count1==1)
        {
            iSetColor(255,0,0);
            iText(230,30,"Player 2 gets",GLUT_BITMAP_HELVETICA_18);


        }

        if(p1==0)
        {
            iSetColor(255,0,0);
            iFilledCircle(170,90,15);
            iSetColor(255,255,0);
            iCircle(170,90,15);

        }
        if(p1==1)
        {
            iSetColor(255,0,0);
            iFilledCircle(30,150,15);
            iSetColor(255,255,0);
            iCircle(30,150,15);

        }

        if(p1==2)
        {
            iSetColor(255,0,0);
            iFilledCircle(100,150,15);
            iSetColor(255,255,0);
            iCircle(100,150,15);

        }
        if(p1==3)
        {
            iSetColor(255,0,0);
            iFilledCircle(170,150,15);
            iSetColor(255,255,0);
            iCircle(170,150,15);

        }
        if(p1==4)
        {
            iSetColor(255,0,0);
            iFilledCircle(240,150,15);
            iSetColor(255,255,0);
            iCircle(240,150,15);

        }
        if(p1==5)
        {
            p1=21;
        }
        if(p1==6)
        {

            iSetColor(255,0,0);
            iFilledCircle(380,150,15);
            iSetColor(255,255,0);
            iCircle(380,150,15);

        }
        if(p1==7)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,150,15);
            iSetColor(255,255,0);
            iCircle(450,150,15);

        }
        if(p1==8)
        {
            p1=30;


        }
        if(p1==9)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,150,15);
            iSetColor(255,255,0);
            iCircle(590,150,15);

        }
        if(p1==10)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,150,15);
            iSetColor(255,255,0);
            iCircle(660,150,15);

        }
        if(p1==11)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,210,15);
            iSetColor(255,255,0);
            iCircle(660,210,15);

        }
        if(p1==12)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,210,15);
            iSetColor(255,255,0);
            iCircle(590,210,15);

        }
        if(p1==13)
        {

            iSetColor(255,0,0);
            iFilledCircle(520,210,15);
            iSetColor(255,255,0);
            iCircle(520,210,15);

        }
        if(p1==14)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,210,15);
            iSetColor(255,255,0);
            iCircle(450,210,15);

        }
        if(p1==15)
        {

            iSetColor(255,0,0);
            iFilledCircle(380,210,15);
            iSetColor(255,255,0);
            iCircle(380,210,15);

        }
        if(p1==16)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,210,15);
            iSetColor(255,255,0);
            iCircle(310,210,15);

        }
        if(p1==17)
        {
            p1=13;

            iSetColor(255,0,0);
            iFilledCircle(520,210,15);
            iSetColor(255,255,0);
            iCircle(520,210,15);


        }
        if(p1==18)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,210,15);
            iSetColor(255,255,0);
            iCircle(170,210,15);

        }
        if(p1==19)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,210,15);
            iSetColor(255,255,0);
            iCircle(100,210,15);

        }
        if(p1==20)
        {

            iSetColor(255,0,0);
            iFilledCircle(30,210,15);
            iSetColor(255,255,0);
            iCircle(30,210,15);

        }
        if(p1==21)
        {

            iSetColor(255,0,0);
            iFilledCircle(30,270,15);
            iSetColor(255,255,0);
            iCircle(30,270,15);

        }
        if(p1==22)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,270,15);
            iSetColor(255,255,0);
            iCircle(100,270,15);

        }
        if(p1==23)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,270,15);
            iSetColor(255,255,0);
            iCircle(170,270,15);

        }
        if(p1==24)
        {

            iSetColor(255,0,0);
            iFilledCircle(240,270,15);
            iSetColor(255,255,0);
            iCircle(240,270,15);

        }
        if(p1==25)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,270,15);
            iSetColor(255,255,0);
            iCircle(310,270,15);

        }
        if(p1==26)
        {

            iSetColor(255,0,0);
            iFilledCircle(380,270,15);
            iSetColor(255,255,0);
            iCircle(380,270,15);

        }
        if(p1==27)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,270,15);
            iSetColor(255,255,0);
            iCircle(450,270,15);

        }
        if(p1==28)
        {
            p1=84;
        }
        if(p1==29)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,270,15);
            iSetColor(255,255,0);
            iCircle(590,270,15);

        }
        if(p1==30)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,270,15);
            iSetColor(255,255,0);
            iCircle(660,270,15);

        }
        if(p1==31)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,330,15);
            iSetColor(255,255,0);
            iCircle(660,330,15);
        }
        if(p1==32)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,330,15);
            iSetColor(255,255,0);
            iCircle(590,330,15);
        }
        if(p1==33)
        {

            iSetColor(255,0,0);
            iFilledCircle(520,330,15);
            iSetColor(255,255,0);
            iCircle(520,330,15);
        }
        if(p1==34)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,330,15);
            iSetColor(255,255,0);
            iCircle(450,330,15);
        }
        if(p1==35)
        {

            iSetColor(255,0,0);
            iFilledCircle(380,330,15);
            iSetColor(255,255,0);
            iCircle(380,330,15);
        }
        if(p1==36)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,330,15);
            iSetColor(255,255,0);
            iCircle(310,330,15);
        }
        if(p1==37)
        {

            iSetColor(255,0,0);
            iFilledCircle(240,330,15);
            iSetColor(255,255,0);
            iCircle(240,330,15);
        }
        if(p1==38)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,330,15);
            iSetColor(255,255,0);
            iCircle(170,330,15);
        }
        if(p1==39)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,330,15);
            iSetColor(255,255,0);
            iCircle(100,330,15);
        }
        if(p1==40)
        {

            iSetColor(255,0,0);
            iFilledCircle(30,330,15);
            iSetColor(255,255,0);
            iCircle(30,330,15);
        }
        if(p1==41)
        {

            iSetColor(255,0,0);
            iFilledCircle(30,390,15);
            iSetColor(255,255,0);
            iCircle(30,390,15);
        }
        if(p1==42)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,390,15);
            iSetColor(255,255,0);
            iCircle(100,390,15);
        }
        if(p1==43)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,390,15);
            iSetColor(255,255,0);
            iCircle(170,390,15);
        }
        if(p1==44)
        {

            iSetColor(255,0,0);
            iFilledCircle(240,390,15);
            iSetColor(255,255,0);
            iCircle(240,390,15);
        }
        if(p1==45)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,390,15);
            iSetColor(255,255,0);
            iCircle(310,390,15);
        }
        if(p1==46)
        {

            iSetColor(255,0,0);
            iFilledCircle(380,390,15);
            iSetColor(255,255,0);
            iCircle(380,390,15);
        }
        if(p1==47)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,390,15);
            iSetColor(255,255,0);
            iCircle(450,390,15);
        }
        if(p1==48)
        {

            iSetColor(255,0,0);
            iFilledCircle(520,390,15);
            iSetColor(255,255,0);
            iCircle(520,390,15);
        }
        if(p1==49)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,390,15);
            iSetColor(255,255,0);
            iCircle(590,390,15);
        }
        if(p1==50)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,390,15);
            iSetColor(255,255,0);
            iCircle(660,390,15);
        }
        if(p1==51)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,390,15);
            iSetColor(255,255,0);
            iCircle(660,390,15);

        }
        if(p1==52)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,450,15);
            iSetColor(255,255,0);
            iCircle(590,450,15);
        }
        if(p1==53)
        {
            p1=29;
            iSetColor(255,0,0);
            iFilledCircle(590,270,15);
            iSetColor(255,255,0);
            iCircle(590,270,15);

        }
        if(p1==54)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,450,15);
            iSetColor(255,255,0);
            iCircle(450,450,15);
        }
        if(p1==55)
        {

            iSetColor(255,0,0);
            iFilledCircle(380,450,15);
            iSetColor(255,255,0);
            iCircle(380,450,15);
        }
        if(p1==56)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,450,15);
            iSetColor(255,255,0);
            iCircle(310,450,15);
        }
        if(p1==57)
        {

            p1=40;

            iSetColor(255,0,0);
            iFilledCircle(30,330,15);
            iSetColor(255,255,0);
            iCircle(30,330,15);

        }
        if(p1==58)
        {
            p1=78;

        }
        if(p1==59)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,450,15);
            iSetColor(255,255,0);
            iCircle(100,450,15);
        }
        if(p1==60)
        {

            iSetColor(255,0,0);
            iFilledCircle(30,450,15);
            iSetColor(255,255,0);
            iCircle(30,450,15);
        }
        if(p1==61)
        {

            iSetColor(255,0,0);
            iFilledCircle(30,510,15);
            iSetColor(255,255,0);
            iCircle(30,510,15);
        }
        if(p1==62)
        {
            p1=22;
            iSetColor(255,0,0);
            iFilledCircle(100,270,15);
            iSetColor(255,255,0);
            iCircle(100,270,15);

        }
        if(p1==63)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,510,15);
            iSetColor(255,255,0);
            iCircle(170,510,15);
        }
        if(p1==64)
        {

            iSetColor(255,0,0);
            iFilledCircle(240,510,15);
            iSetColor(255,255,0);
            iCircle(240,510,15);
        }
        if(p1==65)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,510,15);
            iSetColor(255,255,0);
            iCircle(310,510,15);
        }
        if(p1==66)
        {

            iSetColor(255,0,0);
            iFilledCircle(380,510,15);
            iSetColor(255,255,0);
            iCircle(380,510,15);
        }
        if(p1==67)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,510,15);
            iSetColor(255,255,0);
            iCircle(450,510,15);
        }
        if(p1==68)
        {

            iSetColor(255,0,0);
            iFilledCircle(520,510,15);
            iSetColor(255,255,0);
            iCircle(520,510,15);
        }
        if(p1==69)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,510,15);
            iSetColor(255,255,0);
            iCircle(590,510,15);
        }
        if(p1==70)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,510,15);
            iSetColor(255,255,0);
            iCircle(660,510,15);
        }
        if(p1==71)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,570,15);
            iSetColor(255,255,0);
            iCircle(660,570,15);
        }
        if(p1==72)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,570,15);
            iSetColor(255,255,0);
            iCircle(590,570,15);
        }
        if(p1==73)
        {

            iSetColor(255,0,0);
            iFilledCircle(520,570,15);
            iSetColor(255,255,0);
            iCircle(520,570,15);
        }
        if(p1==74)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,570,15);
            iSetColor(255,255,0);
            iCircle(450,570,15);
        }
        if(p1==75)
        {

            p1=86;
        }
        if(p1==76)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,570,15);
            iSetColor(255,255,0);
            iCircle(310,570,15);
        }
        if(p1==77)
        {

            iSetColor(255,0,0);
            iFilledCircle(240,570,15);
            iSetColor(255,255,0);
            iCircle(240,570,15);
        }
        if(p1==78)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,570,15);
            iSetColor(255,255,0);
            iCircle(170,570,15);
        }
        if(p1==79)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,570,15);
            iSetColor(255,255,0);
            iCircle(100,570,15);
        }
        if(p1==80)
        {
            p1=100;
        }
        if(p1==81)
        {

            iSetColor(255,0,0);
            iFilledCircle(30,630,15);
            iSetColor(255,255,0);
            iCircle(30,630,15);
        }
        if(p1==82)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,630,15);
            iSetColor(255,255,0);
            iCircle(100,630,15);
        }
        if(p1==83)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,630,15);
            iSetColor(255,255,0);
            iCircle(170,630,15);
        }
        if(p1==84)
        {

            iSetColor(255,0,0);
            iFilledCircle(240,630,15);
            iSetColor(255,255,0);
            iCircle(240,630,15);
        }
        if(p1==85)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,630,15);
            iSetColor(255,255,0);
            iCircle(310,630,15);
        }
        if(p1==86)
        {

            iSetColor(255,0,0);
            iFilledCircle(390,630,15);
            iSetColor(255,255,0);
            iCircle(390,630,15);
        }
        if(p1==87)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,630,15);
            iSetColor(255,255,0);
            iCircle(450,630,15);
        }
        if(p1==88)
        {
            p1=51;


            iSetColor(255,0,0);
            iFilledCircle(660,390,15);
            iSetColor(255,255,0);
            iCircle(660,390,15);

        }
        if(p1==89)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,630,15);
            iSetColor(255,255,0);
            iCircle(590,630,15);
        }
        if(p1==90)
        {
            p1=91;

        }
        if(p1==91)
        {

            iSetColor(255,0,0);
            iFilledCircle(660,690,15);
            iSetColor(255,255,0);
            iCircle(660,690,15);
        }
        if(p1==92)
        {

            iSetColor(255,0,0);
            iFilledCircle(590,690,15);
            iSetColor(255,255,0);
            iCircle(590,690,15);
        }
        if(p1==93)
        {

            iSetColor(255,0,0);
            iFilledCircle(520,690,15);
            iSetColor(255,255,0);
            iCircle(520,690,15);
        }
        if(p1==94)
        {

            iSetColor(255,0,0);
            iFilledCircle(450,690,15);
            iSetColor(255,255,0);
            iCircle(450,690,15);
        }
        if(p1==95)
        {
            p1=51;

            iSetColor(255,0,0);
            iFilledCircle(660,390,15);
            iSetColor(255,255,0);
            iCircle(660,390,15);
        }
        if(p1==96)
        {

            iSetColor(255,0,0);
            iFilledCircle(310,690,15);
            iSetColor(255,255,0);
            iCircle(310,690,15);
        }
        if(p1==97)
        {
            p1=79;

            iSetColor(255,0,0);
            iFilledCircle(100,570,15);
            iSetColor(255,255,0);
            iCircle(100,570,15);


        }
        if(p1==98)
        {

            iSetColor(255,0,0);
            iFilledCircle(170,690,15);
            iSetColor(255,255,0);
            iCircle(170,690,15);
        }
        if(p1==99)
        {

            iSetColor(255,0,0);
            iFilledCircle(100,690,15);
            iSetColor(255,255,0);
            iCircle(100,690,15);
        }
        if(p1==100)
        {
            flag=2;

            iSetColor(255,0,0);
            iFilledCircle(310,690,15);
            iSetColor(255,255,0);
            iCircle(310,690,15);
        }



        if(p2==0)
        {
            iSetColor(255,255,0);
            iFilledCircle(170,90,15);
            iSetColor(255,0,0);
            iCircle(170,90,15);

        }
        if(p2==1)
        {
            iSetColor(255,255,0);
            iFilledCircle(30,150,15);
            iSetColor(255,0,0);
            iCircle(30,150,15);

        }
        if(p2==2)
        {
            iSetColor(255,255,0);
            iFilledCircle(100,150,15);
            iSetColor(255,0,0);
            iCircle(100,150,15);

        }
        if(p2==3)
        {
            iSetColor(255,255,0);
            iFilledCircle(170,150,15);
            iSetColor(255,0,0);
            iCircle(170,150,15);

        }
        if(p2==4)
        {
            iSetColor(255,255,0);
            iFilledCircle(240,150,15);
            iSetColor(255,0,0);
            iCircle(240,150,15);

        }
        if(p2==5)
        {
            p2=21;
        }
        if(p2==6)
        {

            iSetColor(255,255,0);
            iFilledCircle(380,150,15);
            iSetColor(255,0,0);
            iCircle(380,150,15);

        }
        if(p2==7)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,150,15);
            iSetColor(255,0,0);
            iCircle(450,150,15);

        }
        if(p2==8)
        {
            p2=30;


        }
        if(p2==9)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,150,15);
            iSetColor(255,0,0);
            iCircle(590,150,15);

        }
        if(p2==10)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,150,15);
            iSetColor(255,0,0);
            iCircle(660,150,15);

        }
        if(p2==11)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,210,15);
            iSetColor(255,0,0);
            iCircle(660,210,15);

        }
        if(p2==12)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,210,15);
            iSetColor(255,0,0);
            iCircle(590,210,15);

        }
        if(p2==13)
        {

            iSetColor(255,255,0);
            iFilledCircle(520,210,15);
            iSetColor(255,0,0);
            iCircle(520,210,15);

        }
        if(p2==14)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,210,15);
            iSetColor(255,0,0);
            iCircle(450,210,15);

        }
        if(p2==15)
        {

            iSetColor(255,255,0);
            iFilledCircle(380,210,15);
            iSetColor(255,0,0);
            iCircle(380,210,15);

        }
        if(p2==16)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,210,15);
            iSetColor(255,0,0);
            iCircle(310,210,15);

        }
        if(p2==17)
        {
            p2=13;

            iSetColor(255,255,0);
            iFilledCircle(520,210,15);
            iSetColor(255,0,0);
            iCircle(520,210,15);


        }
        if(p2==18)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,210,15);
            iSetColor(255,0,0);
            iCircle(170,210,15);

        }
        if(p2==19)
        {

            iSetColor(255,255,0);
            iFilledCircle(100,210,15);
            iSetColor(255,0,0);
            iCircle(100,210,15);

        }
        if(p2==20)
        {

            iSetColor(255,255,0);
            iFilledCircle(30,210,15);
            iSetColor(255,0,0);
            iCircle(30,210,15);

        }
        if(p2==21)
        {

            iSetColor(255,255,0);
            iFilledCircle(30,270,15);
            iSetColor(255,0,0);
            iCircle(30,270,15);

        }
        if(p2==22)
        {

            iSetColor(255,255,0);
            iFilledCircle(100,270,15);
            iSetColor(255,0,0);
            iCircle(100,270,15);

        }
        if(p2==23)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,270,15);
            iSetColor(255,0,0);
            iCircle(170,270,15);

        }
        if(p2==24)
        {

            iSetColor(255,255,0);
            iFilledCircle(240,270,15);
            iSetColor(255,0,0);
            iCircle(240,270,15);

        }
        if(p2==25)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,270,15);
            iSetColor(255,0,0);
            iCircle(310,270,15);

        }
        if(p2==26)
        {

            iSetColor(255,255,0);
            iFilledCircle(380,270,15);
            iSetColor(255,0,0);
            iCircle(380,270,15);

        }
        if(p2==27)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,270,15);
            iSetColor(255,0,0);
            iCircle(450,270,15);

        }
        if(p2==28)
        {
            p2=84;
        }
        if(p2==29)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,270,15);
            iSetColor(255,0,0);
            iCircle(590,270,15);

        }
        if(p2==30)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,270,15);
            iSetColor(255,0,0);
            iCircle(660,270,15);

        }
        if(p2==31)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,330,15);
            iSetColor(255,0,0);
            iCircle(660,330,15);
        }
        if(p2==32)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,330,15);
            iSetColor(255,0,0);
            iCircle(590,330,15);
        }
        if(p2==33)
        {

            iSetColor(255,0255,0);
            iFilledCircle(520,330,15);
            iSetColor(255,0,0);
            iCircle(520,330,15);
        }
        if(p2==34)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,330,15);
            iSetColor(255,0,0);
            iCircle(450,330,15);
        }
        if(p2==35)
        {

            iSetColor(255,255,0);
            iFilledCircle(380,330,15);
            iSetColor(255,0,0);
            iCircle(380,330,15);
        }
        if(p2==36)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,330,15);
            iSetColor(255,0,0);
            iCircle(310,330,15);
        }
        if(p2==37)
        {

            iSetColor(255,255,0);
            iFilledCircle(240,330,15);
            iSetColor(255,0,0);
            iCircle(240,330,15);
        }
        if(p2==38)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,330,15);
            iSetColor(255,0,0);
            iCircle(170,330,15);
        }
        if(p2==39)
        {

            iSetColor(255,255,0);
            iFilledCircle(100,330,15);
            iSetColor(255,0,0);
            iCircle(100,330,15);
        }
        if(p2==40)
        {

            iSetColor(255,255,0);
            iFilledCircle(30,330,15);
            iSetColor(255,0,0);
            iCircle(30,330,15);
        }
        if(p2==41)
        {

            iSetColor(255,255,0);
            iFilledCircle(30,390,15);
            iSetColor(255,0,0);
            iCircle(30,390,15);
        }
        if(p2==42)
        {

            iSetColor(255,0255,0);
            iFilledCircle(100,390,15);
            iSetColor(255,0,0);
            iCircle(100,390,15);
        }
        if(p2==43)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,390,15);
            iSetColor(255,0,0);
            iCircle(170,390,15);
        }
        if(p2==44)
        {

            iSetColor(255,255,0);
            iFilledCircle(240,390,15);
            iSetColor(255,0,0);
            iCircle(240,390,15);
        }
        if(p2==45)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,390,15);
            iSetColor(255,0,0);
            iCircle(310,390,15);
        }
        if(p2==46)
        {

            iSetColor(255,255,0);
            iFilledCircle(380,390,15);
            iSetColor(255,0,0);
            iCircle(380,390,15);
        }
        if(p2==47)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,390,15);
            iSetColor(255,0,0);
            iCircle(450,390,15);
        }
        if(p2==48)
        {

            iSetColor(255,255,0);
            iFilledCircle(520,390,15);
            iSetColor(255,0,0);
            iCircle(520,390,15);
        }
        if(p2==49)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,390,15);
            iSetColor(255,0,0);
            iCircle(590,390,15);
        }
        if(p2==50)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,390,15);
            iSetColor(255,0,0);
            iCircle(660,390,15);
        }
        if(p2==51)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,390,15);
            iSetColor(255,0,0);
            iCircle(660,390,15);

        }
        if(p2==52)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,450,15);
            iSetColor(255,0,0);
            iCircle(590,450,15);
        }
        if(p2==53)
        {
            p2=29;
            iSetColor(255,255,0);
            iFilledCircle(590,270,15);
            iSetColor(255,0,0);
            iCircle(590,270,15);

        }
        if(p2==54)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,450,15);
            iSetColor(255,0,0);
            iCircle(450,450,15);
        }
        if(p2==55)
        {

            iSetColor(255,255,0);
            iFilledCircle(380,450,15);
            iSetColor(255,0,0);
            iCircle(380,450,15);
        }
        if(p2==56)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,450,15);
            iSetColor(255,0,0);
            iCircle(310,450,15);
        }
        if(p2==57)
        {

            p2=40;

            iSetColor(255,255,0);
            iFilledCircle(30,330,15);
            iSetColor(255,0,0);
            iCircle(30,330,15);

        }
        if(p2==58)
        {
            p2=78;

        }
        if(p2==59)
        {

            iSetColor(255,255,0);
            iFilledCircle(100,450,15);
            iSetColor(255,0,0);
            iCircle(100,450,15);
        }
        if(p2==60)
        {

            iSetColor(255,255,0);
            iFilledCircle(30,450,15);
            iSetColor(255,0,0);
            iCircle(30,450,15);
        }
        if(p2==61)
        {

            iSetColor(255,255,0);
            iFilledCircle(30,510,15);
            iSetColor(255,0,0);
            iCircle(30,510,15);
        }
        if(p2==62)
        {
            p2=22;
            iSetColor(255,255,0);
            iFilledCircle(100,270,15);
            iSetColor(255,0,0);
            iCircle(100,270,15);

        }
        if(p2==63)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,510,15);
            iSetColor(255,0,0);
            iCircle(170,510,15);
        }
        if(p2==64)
        {

            iSetColor(255,255,0);
            iFilledCircle(240,510,15);
            iSetColor(255,0,0);
            iCircle(240,510,15);
        }
        if(p2==65)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,510,15);
            iSetColor(255,0,0);
            iCircle(310,510,15);
        }
        if(p2==66)
        {

            iSetColor(255,255,0);
            iFilledCircle(380,510,15);
            iSetColor(255,0,0);
            iCircle(380,510,15);
        }
        if(p2==67)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,510,15);
            iSetColor(255,0,0);
            iCircle(450,510,15);
        }
        if(p2==68)
        {

            iSetColor(255,255,0);
            iFilledCircle(520,510,15);
            iSetColor(255,0,0);
            iCircle(520,510,15);
        }
        if(p2==69)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,510,15);
            iSetColor(255,0,0);
            iCircle(590,510,15);
        }
        if(p2==70)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,510,15);
            iSetColor(255,0,0);
            iCircle(660,510,15);
        }
        if(p2==71)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,570,15);
            iSetColor(255,0,0);
            iCircle(660,570,15);
        }
        if(p2==72)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,570,15);
            iSetColor(255,0,0);
            iCircle(590,570,15);
        }
        if(p2==73)
        {

            iSetColor(255,255,0);
            iFilledCircle(520,570,15);
            iSetColor(255,0,0);
            iCircle(520,570,15);
        }
        if(p2==74)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,570,15);
            iSetColor(255,0,0);
            iCircle(450,570,15);
        }
        if(p2==75)
        {

            p2=86;
        }
        if(p2==76)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,570,15);
            iSetColor(255,0,0);
            iCircle(310,570,15);
        }
        if(p2==77)
        {

            iSetColor(255,255,0);
            iFilledCircle(240,570,15);
            iSetColor(255,0,0);
            iCircle(240,570,15);
        }
        if(p2==78)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,570,15);
            iSetColor(255,0,0);
            iCircle(170,570,15);
        }
        if(p2==79)
        {

            iSetColor(255,255,0);
            iFilledCircle(100,570,15);
            iSetColor(255,0,0);
            iCircle(100,570,15);
        }
        if(p2==80)
        {
            p2=100;
        }
        if(p2==81)
        {

            iSetColor(255,255,0);
            iFilledCircle(30,630,15);
            iSetColor(255,0,0);
            iCircle(30,630,15);
        }
        if(p2==82)
        {

            iSetColor(255,255,0);
            iFilledCircle(100,630,15);
            iSetColor(255,0,0);
            iCircle(100,630,15);
        }
        if(p2==83)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,630,15);
            iSetColor(255,0,0);
            iCircle(170,630,15);
        }
        if(p2==84)
        {

            iSetColor(255,255,0);
            iFilledCircle(240,630,15);
            iSetColor(255,0,0);
            iCircle(240,630,15);
        }
        if(p2==85)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,630,15);
            iSetColor(255,0,0);
            iCircle(310,630,15);
        }
        if(p2==86)
        {

            iSetColor(255,255,0);
            iFilledCircle(390,630,15);
            iSetColor(255,0,0);
            iCircle(390,630,15);
        }
        if(p2==87)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,630,15);
            iSetColor(255,0,0);
            iCircle(450,630,15);
        }
        if(p2==88)
        {
            p2=51;


            iSetColor(255,255,0);
            iFilledCircle(660,390,15);
            iSetColor(255,0,0);
            iCircle(660,390,15);

        }
        if(p2==89)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,630,15);
            iSetColor(255,0,0);
            iCircle(590,630,15);
        }
        if(p2==90)
        {
            p2=91;

        }
        if(p2==91)
        {

            iSetColor(255,255,0);
            iFilledCircle(660,690,15);
            iSetColor(255,0,0);
            iCircle(660,690,15);
        }
        if(p2==92)
        {

            iSetColor(255,255,0);
            iFilledCircle(590,690,15);
            iSetColor(255,0,0);
            iCircle(590,690,15);
        }
        if(p2==93)
        {

            iSetColor(255,255,0);
            iFilledCircle(520,690,15);
            iSetColor(255,0,0);
            iCircle(520,690,15);
        }
        if(p2==94)
        {

            iSetColor(255,255,0);
            iFilledCircle(450,690,15);
            iSetColor(255,0,0);
            iCircle(450,690,15);
        }
        if(p2==95)
        {
            p2=51;

            iSetColor(255,255,0);
            iFilledCircle(660,390,15);
            iSetColor(255,0,0);
            iCircle(660,390,15);
        }
        if(p2==96)
        {

            iSetColor(255,255,0);
            iFilledCircle(310,690,15);
            iSetColor(255,0,0);
            iCircle(310,690,15);
        }
        if(p2==97)
        {
            p2=79;

            iSetColor(255,255,0);
            iFilledCircle(100,570,15);
            iSetColor(255,0,0);
            iCircle(100,570,15);


        }
        if(p2==98)
        {

            iSetColor(255,255,0);
            iFilledCircle(170,690,15);
            iSetColor(255,0,0);
            iCircle(170,690,15);
        }
        if(p2==99)
        {

            iSetColor(255,255,0);
            iFilledCircle(100,690,15);
            iSetColor(255,0,0);
            iCircle(100,690,15);
        }
        if(p2==100)
        {


            iSetColor(255,255,0);
            iFilledCircle(310,690,15);
            iSetColor(255,0,0);
            iCircle(310,690,15);
            flag=2;
        }


    }
    if(flag==2)
    {
        iSetColor(255,0,0);
        iText(270,80,"GAME OVER!",GLUT_BITMAP_HELVETICA_18);
        iText(250,60,"WINNER:",GLUT_BITMAP_HELVETICA_18);
        if(p1>p2)
            iText(340,60,"PLAYER 1",GLUT_BITMAP_HELVETICA_18);
        else
            iText(340,60,"PLAYER 2",GLUT_BITMAP_HELVETICA_18);

    }

    //for 'moi
    iSetColor(100,100,100);
    iLine(520,120,680,260);
    iLine(520,160,680,300);
    iLine(600,190,600,230);
    iLine(660,240,660,280);
    iLine(540,138,540,178);
    iSetColor(255,0,0);
    iLine(660,640,640,680);
    iLine(680,640,660,680);
    iLine(656,650,674,650);
    iLine(646,670,664,670);

    iSetColor(255,255,0);
    iLine(150,460,170,560);
    iLine(180,460,200,560);
    iLine(158,500,188,500);
    iLine(166,540,196,540);

    iSetColor(250,155,150);
    iLine(360,580,380,620);
    iLine(390,580,410,620);
    iLine(364,590,394,590);
    iLine(376,610,404,610);

    iSetColor(155,155,0);
    iLine(10,580,30,680);
    iLine(40,580,60,680);
    iLine(14,600,44,600);
    iLine(18,630,48,630);
    iLine(26,660,56,660);

    iSetColor(255,155,250);
    iLine(30,248,320,120);
    iLine(40,280,320,160);
    iLine(50,239,50,276);
    iLine(100,216,100,254);
    iLine(150,194,150,232);
    iLine(190,177,190,216);
    iLine(230,160,230,200);
    iLine(270,140,270,180);
    iLine(300,130,300,170);


    iSetColor(120,10,120);
    iLine(220,620,500,280);
    iLine(260,620,540,280);
    iLine(238,600,278,600);
    iLine(270,560,310,560);
    iLine(300,520,340,520);
    iLine(352,460,392,460);
    iLine(400,400,440,400);
    iLine(450,340,490,340);
    iLine(492,290,532,290);
    //for  snake
    iSetColor(0,0,0);
    iFilledEllipse(260,220,12,10);
    iFilledEllipse(520,200,12,10);

    iFilledEllipse(550,430,12,10);
    iFilledEllipse(610,290,12,10);

    iFilledEllipse(408,672,13,14);
    iFilledEllipse(652,468,13,14);

    iFilledEllipse(510,630,12,10);
    iFilledEllipse(190,230,12,10);

    iFilledEllipse(50,350,12,10);
    iFilledEllipse(230,430,12,10);

    iFilledEllipse(90,290,12,10);
    iFilledEllipse(130,490,12,10);

    iFilledEllipse(110,590,12,10);
    iFilledEllipse(230,670,12,10);

    iSetColor(0,0,0);
    iLine(260,210,520,190);
    iLine(260,230,525,210);

    iSetColor(00,0,0);
    iLine(601,282,540,425);
    iLine(623,290,560,435);

    iSetColor(00,0,0);
    iLine(640,460,400,660);
    iLine(660,480,420,680);

    iSetColor(0,0,0);
    iLine(515,620,201,225);
    iLine(503,638,176,230);


    iSetColor(0,0,0);
    iLine(243,425,55,340);
    iLine(225,440,45,360);

    iSetColor(0,0,0);
    iLine(140,482,102,288);
    iLine(118,492,78,290);

    iSetColor(0,0,0);
    iLine(238,662,116,580);
    iLine(223,678,103,598);

    iText(20,140,"1",GLUT_BITMAP_HELVETICA_18);
    iText(90,140,"2",GLUT_BITMAP_HELVETICA_18);
    iText(160,140,"3",GLUT_BITMAP_HELVETICA_18);
    iText(230,140,"4",GLUT_BITMAP_HELVETICA_18);
    iText(310,140,"5",GLUT_BITMAP_HELVETICA_18);
    iText(370,140,"6",GLUT_BITMAP_HELVETICA_18);
    iText(440,140,"7",GLUT_BITMAP_HELVETICA_18);
    iText(510,140,"8",GLUT_BITMAP_HELVETICA_18);
    iText(580,140,"9",GLUT_BITMAP_HELVETICA_18);
    iText(650,140,"10",GLUT_BITMAP_HELVETICA_18);

    iText(20,200,"20",GLUT_BITMAP_HELVETICA_18);
    iText(90,200,"19",GLUT_BITMAP_HELVETICA_18);
    iText(160,200,"18",GLUT_BITMAP_HELVETICA_18);
    iText(230,200,"17",GLUT_BITMAP_HELVETICA_18);
    iText(310,200,"16",GLUT_BITMAP_HELVETICA_18);
    iText(370,200,"15",GLUT_BITMAP_HELVETICA_18);
    iText(440,200,"14",GLUT_BITMAP_HELVETICA_18);
    iText(510,220,"13",GLUT_BITMAP_HELVETICA_18);
    iText(580,200,"12",GLUT_BITMAP_HELVETICA_18);
    iText(650,200,"11",GLUT_BITMAP_HELVETICA_18);

    iText(20,260,"21",GLUT_BITMAP_HELVETICA_18);
    iText(90,260,"22",GLUT_BITMAP_HELVETICA_18);
    iText(160,260,"23",GLUT_BITMAP_HELVETICA_18);
    iText(230,260,"24",GLUT_BITMAP_HELVETICA_18);
    iText(310,260,"25",GLUT_BITMAP_HELVETICA_18);
    iText(370,260,"26",GLUT_BITMAP_HELVETICA_18);
    iText(440,260,"27",GLUT_BITMAP_HELVETICA_18);
    iText(510,260,"28",GLUT_BITMAP_HELVETICA_18);
    iText(580,260,"29",GLUT_BITMAP_HELVETICA_18);
    iText(650,260,"30",GLUT_BITMAP_HELVETICA_18);

    iText(20,320,"40",GLUT_BITMAP_HELVETICA_18);
    iText(90,320,"39",GLUT_BITMAP_HELVETICA_18);
    iText(160,320,"38",GLUT_BITMAP_HELVETICA_18);
    iText(230,320,"37",GLUT_BITMAP_HELVETICA_18);
    iText(310,320,"36",GLUT_BITMAP_HELVETICA_18);
    iText(370,320,"35",GLUT_BITMAP_HELVETICA_18);
    iText(440,320,"34",GLUT_BITMAP_HELVETICA_18);
    iText(510,320,"33",GLUT_BITMAP_HELVETICA_18);
    iText(580,320,"32",GLUT_BITMAP_HELVETICA_18);
    iText(650,320,"31",GLUT_BITMAP_HELVETICA_18);

    iText(20,380,"41",GLUT_BITMAP_HELVETICA_18);
    iText(90,380,"42",GLUT_BITMAP_HELVETICA_18);
    iText(160,380,"43",GLUT_BITMAP_HELVETICA_18);
    iText(230,380,"44",GLUT_BITMAP_HELVETICA_18);
    iText(310,380,"45",GLUT_BITMAP_HELVETICA_18);
    iText(370,380,"46",GLUT_BITMAP_HELVETICA_18);
    iText(440,380,"47",GLUT_BITMAP_HELVETICA_18);
    iText(510,380,"48",GLUT_BITMAP_HELVETICA_18);
    iText(580,380,"49",GLUT_BITMAP_HELVETICA_18);
    iText(650,380,"50",GLUT_BITMAP_HELVETICA_18);

    iText(20,440,"60",GLUT_BITMAP_HELVETICA_18);
    iText(90,440,"59",GLUT_BITMAP_HELVETICA_18);
    iText(160,440,"58",GLUT_BITMAP_HELVETICA_18);
    iText(230,440,"57",GLUT_BITMAP_HELVETICA_18);
    iText(310,440,"56",GLUT_BITMAP_HELVETICA_18);
    iText(370,440,"55",GLUT_BITMAP_HELVETICA_18);
    iText(440,440,"54",GLUT_BITMAP_HELVETICA_18);
    iText(510,440,"53",GLUT_BITMAP_HELVETICA_18);
    iText(580,440,"52",GLUT_BITMAP_HELVETICA_18);
    iText(650,440,"51",GLUT_BITMAP_HELVETICA_18);

    iText(20,500,"61",GLUT_BITMAP_HELVETICA_18);
    iText(90,500,"62",GLUT_BITMAP_HELVETICA_18);
    iText(160,500,"63",GLUT_BITMAP_HELVETICA_18);
    iText(230,500,"64",GLUT_BITMAP_HELVETICA_18);
    iText(310,500,"65",GLUT_BITMAP_HELVETICA_18);
    iText(370,500,"66",GLUT_BITMAP_HELVETICA_18);
    iText(440,500,"67",GLUT_BITMAP_HELVETICA_18);
    iText(510,500,"68",GLUT_BITMAP_HELVETICA_18);
    iText(580,500,"69",GLUT_BITMAP_HELVETICA_18);
    iText(650,500,"70",GLUT_BITMAP_HELVETICA_18);

    iText(20,560,"80",GLUT_BITMAP_HELVETICA_18);
    iText(90,560,"79",GLUT_BITMAP_HELVETICA_18);
    iText(160,560,"78",GLUT_BITMAP_HELVETICA_18);
    iText(230,560,"77",GLUT_BITMAP_HELVETICA_18);
    iText(310,560,"76",GLUT_BITMAP_HELVETICA_18);
    iText(370,560,"75",GLUT_BITMAP_HELVETICA_18);
    iText(440,560,"74",GLUT_BITMAP_HELVETICA_18);
    iText(510,560,"73",GLUT_BITMAP_HELVETICA_18);
    iText(580,560,"72",GLUT_BITMAP_HELVETICA_18);
    iText(650,560,"71",GLUT_BITMAP_HELVETICA_18);

    iText(20,620,"81",GLUT_BITMAP_HELVETICA_18);
    iText(90,620,"82",GLUT_BITMAP_HELVETICA_18);
    iText(160,620,"83",GLUT_BITMAP_HELVETICA_18);
    iText(230,620,"84",GLUT_BITMAP_HELVETICA_18);
    iText(310,620,"85",GLUT_BITMAP_HELVETICA_18);
    iText(370,620,"86",GLUT_BITMAP_HELVETICA_18);
    iText(440,620,"87",GLUT_BITMAP_HELVETICA_18);
    iText(530,620,"88",GLUT_BITMAP_HELVETICA_18);
    iText(580,620,"89",GLUT_BITMAP_HELVETICA_18);
    iText(650,620,"90",GLUT_BITMAP_HELVETICA_18);

    iText(20,680,"100",GLUT_BITMAP_HELVETICA_18);
    iText(90,680,"99",GLUT_BITMAP_HELVETICA_18);
    iText(160,680,"98",GLUT_BITMAP_HELVETICA_18);
    iText(230,680,"97",GLUT_BITMAP_HELVETICA_18);
    iText(310,680,"96",GLUT_BITMAP_HELVETICA_18);
    iText(370,680,"95",GLUT_BITMAP_HELVETICA_18);
    iText(440,680,"94",GLUT_BITMAP_HELVETICA_18);
    iText(510,680,"93",GLUT_BITMAP_HELVETICA_18);
    iText(580,680,"92",GLUT_BITMAP_HELVETICA_18);
    iText(650,680,"91",GLUT_BITMAP_HELVETICA_18);
}
int random()
{

    i=rand();
    if(i<0)
        i=-i;
    i=i%6+1;
    return i;


}
void random_calling()
{
    rand();
}

void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);

}

void iMouse(int button, int state, int mx, int my)
{


    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN&&mx<=90&&mx>=30&&my>=30&&my<=90&&(flag==0||flag==1)&&count1==-1)
    {

        count=count*(-1);
        count1=1;
        if(count==1)
        {
            d=random();
            p1+=d;
            if(p1>100)
                p1=p1-d;
        }
        else
        {
            e=random();
            p2+=e;
            if(p2>100)
                p2=p2-e;
        }

        flag=1;

    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN&&mx<=90&&mx>=30&&my>=30&&my<=90&&(flag==0||flag==1)&&count1==1)
    {
        count1=-1;
    }

}

void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }

}


void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }

}


int main()
{
iSetTimer(1,random_calling);

    iInitialize(700, 720, "sapludu");
    return 0;
}
