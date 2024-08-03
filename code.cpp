#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int a=-6,b=0,height=46,width=46,i,j;
int rocketx,rockety,fuelx,fuely,stonex,stoney,gameover,flag,score,sbx,sby;
int fx,fy,rx,ry,distance=0,th=0,hu=0,ten=0,unit=0,firex,firey,fire2x,fire2y;
void setup()
{
    gameover = 0;
    score=10;
    rocketx = height / 2;
    rockety = width / 2;
    sbx=6;
    sby=width-20;
    firex=rocketx+3;
    firey=rockety-3;
    fire2x=rocketx+3;
    fire2y=rockety+4;
label1:
    fuelx =a;
    
label2:
    fuely =rand() % 40;
    rand() % 40;
    if (fuely <= 3)
        goto label2;
label7:
    stonex =b;
    
label8:
    stoney =rand() % 40;
    rand() % 40;
    if (stoney <= 3)
        goto label8;
}
  

void draw()
{
    system("cls");
    for (i = 0; i <= height; i++) {
        for (j = 0; j <= width; j++) {
            if (i == 0 || i == width
                || j == 0
                || j == height) {
                printf("#");
            }
            else if(i<=sbx && j>=sby)
            {
            	if(i==sbx||j==sby)
            	{
            		printf("=");
				}
				else
				{
					if(i==4 && j==30)
					{
						printf("S");
					}
					else if(i==4 && j==31)
					{
						printf("C");
					}
					else if(i==4 && j==32)
					{
						printf("O");
					}
					else if(i==4 && j==33)
					{
						printf("R");
					}
					else if(i==4 && j==34)
					{
						printf("E");
					}
					else if(i==4 && j==36)
					{
						printf("=");
					}
					// score
					else if(i==4 && j==38)
					{
						printf("%d",th);
					}
					else if(i==4 && j==39)
					{
						printf("%d",hu);
					}
					else if(i==4 && j==40)
					{
						printf("%d",ten);
					}
					else if(i==4 && j==41)
					{
						printf("%d",unit);
					}
					else if(i==2 && j==30)
					{
						printf("F");
					}
					else if(i==2 && j==31)
					{
						printf("U");
					}
					else if(i==2 && j==32)
					{
						printf("E");
					}
					else if(i==2 && j==33)
					{
						printf("L");
					}
					else if(i==2 && j==36)
					{
						printf("=");
					}
					// fuel score
					else if(i==2 && j==38)
					{
						if(score==10)
						{
						printf("1");
					    }
					    if(score<10)
					    {
					    	printf("0");
						}
					
					}
					else if(i==2 && j==39)
					{
						if(score<10)
						{
							printf("%d",score);
						}
						if(score==10)
						{
							printf("0");
						}
						
					}
					else
					{
						printf(" ");
					}
				}
			}
            else 
			{
				if(i==rocketx && j==rockety)
				{
					printf("/");
				}
				else if(i==rocketx && j==rockety+1)
				{
					printf("\\");
				}
				else if(i==rocketx+1 && j==rockety-1)
				{
					printf("(");
				}
                else if(i==rocketx+1 && j==rockety+2)
				{
					printf(")");
			}
				else if(i==rocketx+1 && j==rockety)
				{
					printf("-");
				}
                else if(i==rocketx+1 && j==rockety+1)
				{
					printf("-");
				}
				else if(i==rocketx+2 && j==rockety-1)
				{
					printf("(");
				}
                else if(i==rocketx+2 && j==rockety+2)
				{
					printf(")");
				}  
				else if(i==rocketx+3 && j==rockety-3)
				{
					printf("|"); 
			}
				else if(i==rocketx+3 && j==rockety-2)
				{
					printf("/");
				}
                else if(i==rocketx+3 && j==rockety-1)
				{
					printf("|");
				}
				else if(i==rocketx+3 && j==rockety)
				{
					printf("/");
				}
                else if(i==rocketx+3 && j==rockety+1)
				{
					printf("\\");
				}
				else if(i==rocketx+3 && j==rockety+2)
				{
					printf("|");
				}
				else if(i==rocketx+3 && j==rockety+3)
				{
					printf("\\");
				}  
				else if(i==rocketx+3 && j==rockety+4)
				{
					printf("|");
				}
				else if(i==rocketx+4 && j==rockety-3)
				{
					printf("/");
				}
                else if(i==rocketx+4 && j==rockety-2)
				{
					printf("_");
				}
                else if(i==rocketx+4 && j==rockety-1)
				{
					printf("|");
				}
				else if(i==rocketx+4 && j==rockety)
				{
					printf("|");
				}
				else if(i==rocketx+4 && j==rockety+1)
				{
					printf("|");
				}
				else if(i==rocketx+4 && j==rockety+2)
				{
					printf("|");
				}
				else if(i==rocketx+4 && j==rockety+3)
				{
					printf("_");
				}
				else if(i==rocketx+4 && j==rockety+4)
				{
					printf("\\");
				}
				else if(i==fuelx+a && j==fuely-1)
				{
					printf("-");
				}
				else if(i==fuelx+a && j==fuely)
				{
					printf("-");
				}
				else if(i==fuelx+a && j==fuely+1)
				{
					printf("-");
				}
				else if(i==fuelx+1+a && j==fuely-1)
				{
					printf("|");
				}
				else if(i==fuelx+1+a && j==fuely)
				{
					printf("=");
				}
				else if(i==fuelx+1+a && j==fuely+1)
				{
					printf("|");
				}
				else if(i==fuelx+2+a && j==fuely-1)
				{
					printf("|");
				}
				else if(i==fuelx+2+a && j==fuely)
				{
					printf("_");
				}
				else if(i==fuelx+2+a && j==fuely+1)
				{
					printf("|");
				}
				else if(i==stonex+b && j==stoney-1)
				{
					printf(".");
				}
				else if(i==stonex+b && j==stoney)
				{
					printf(".");
				}
				else if(i==stonex+b && j==stoney+1)
				{
					printf(".");
				}
				else if(i==stonex+b && j==stoney+2)
				{
					printf(".");
				}
				else if(i==stonex+b+1 && j==stoney-2)
				{
					printf(":");
				}
				else if(i==stonex+b+1 && j==stoney-1)
				{
					printf("!");
				}
				else if(i==stonex+b+1 && j==stoney)
				{
					printf("|");
				}
				else if(i==stonex+b+1 && j==stoney+1)
				{
					printf("|");
				}
				else if(i==stonex+b+1 && j==stoney+2)
				{
					printf("|");
				}
				else if(i==stonex+b+1 && j==stoney+3)
				{
					printf("|");
				}
				else if(i==stonex+b+1 && j==stoney+4)
				{
					printf("!");
				}
				else if(i==stonex+b+1 && j==stoney+5)
				{
					printf(".");
				}
				else if(i==stonex+b+1 && j==stoney+6)
				{
					printf(".");
				}
				else if(i==stonex+b+1 && j==stoney+7)
				{
					printf(".");
				}
				else if(i==stonex+b+1 && j==stoney+8)
				{
					printf(".");
				}
				else if(i==stonex+b+1 && j==stoney+9)
				{
					printf(".");
				}
				else if(i==stonex+b+1 && j==stoney+10)
				{
					printf(".");
				}
				else if(i==stonex+b+2 && j==stoney-3)
				{
					printf(":");
				}
				else if(i==stonex+b+2 && j==stoney-2)
				{
					printf("!");
				}
				else if(i==stonex+b+2 && j==stoney-1)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+1)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+2)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+3)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+4)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+5)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+6)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+7)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+8)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+9)
				{
					printf("|");
				}
				else if(i==stonex+b+2 && j==stoney+10)
				{
					printf("!");
				}
				else if(i==stonex+b+2 && j==stoney+11)
				{
					printf(":");
				}
				else if(i==stonex+b+3 && j==stoney-1)
				{
					printf("`");
				}
				else if(i==stonex+b+3 && j==stoney)
				{
					printf("`");
				}
				else if(i==stonex+b+3 && j==stoney+1)
				{
					printf("`");
				}
				else if(i==stonex+b+3 && j==stoney+2)
				{
					printf("`");
				}
				else if(i==stonex+b+3 && j==stoney+3)
				{
					printf("`");
				}
				else if(i==stonex+b+3 && j==stoney+4)
				{
					printf("!");
				}
				else if(i==stonex+b+3 && j==stoney+5)
				{
					printf("|");
				}
				else if(i==stonex+b+3 && j==stoney+6)
				{
					printf("|");
				}
				else if(i==stonex+b+3 && j==stoney+7)
				{
					printf("|");
				}
				else if(i==stonex+b+3 && j==stoney+8)
				{
					printf("!");
				}
				else if(i==stonex+b+3 && j==stoney+9)
				{
					printf("`");
				}
				else if(i==stonex+b+3 && j==stoney+10)
				{
					printf("`");
				}
				else if(i==stonex+b+4 && j==stoney+5)
				{
					printf("`");
				}
				else if(i==stonex+b+4 && j==stoney+6)
				{
					printf("`");
				}
				else if(i==stonex+b+4 && j==stoney+7)
				{
					printf("`");
				}
				else if(i==firex&&j==firey)
				{
					printf("|");
				}
				else if(i==fire2x&&j==fire2y)
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
            }
        }
        printf("\n");
    }
  
    
    printf("Fuel = %d%%", score);
    printf("\n");
    if(gameover==0){
    printf("press X to quit the game");
}
}
  
void input()
{
    if (kbhit()) {
        switch (getch()) {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        case 'e':
        	flag = 5;
        	break;
        }
    }
}
  
void logic()
{
    sleep(0.001);
    switch (flag) {
    case 1:
        rockety--,a++,b++,distance++;
        if(firex<rocketx+3)
		{
		   firey=firey--;
	    }
	    else
	    {
	    	firey=rockety-3;
		}
		
		if(fire2x<rocketx+3)
		{
		   fire2y=fire2y--;
	    }
	    else
	    {
	    	fire2y=rockety+4;
		}
        break;
    case 2:
        rocketx++,a++,b++,distance++;
        if(firex+1<rocketx+3)
		{
			if(firex==0)
			{
				firex=rocketx+3;
			}
			else
			{
				firex=firex--;
			}
	    }
	    else
	    {
	    	firex=rocketx+3;
		}
		
		if(fire2x+1<rocketx+3)
		{
			if(fire2x==0)
			{
				fire2x=rocketx+3;
			}
			else
			{
				fire2x=fire2x--;
			}
	    }
	    else
	    {
	    	fire2x=rocketx+3;
		}
        break;
    case 3:
        rockety++,a++,b++,distance++;
        if(firex<rocketx+3)
		{
		   firey=firey--;
	    }
	    else
	    {
	    	firey=rockety-3;
		}
		
		if(fire2x<rocketx+3)
		{
		   fire2y=fire2y--;
	    }
	    else
	    {
	    	fire2y=rockety+4;
		}
        break;
    case 4:
        rocketx--,a++,b++,distance++;
        if(firex+1<rocketx+3)
		{
			firex=firex--;
			
	}

	    else
	    {
	    	firex=rocketx+3;
		}
		
		if(fire2x+1<rocketx+3)
		{
			fire2x=fire2x--;
			
	}

	    else
	    {
	    	fire2x=rocketx+3;
		}
        break;
    case 5:
    	fire2x--,firex--,a++,b++,distance++;
    	break;
    default:
    	a++,b++,distance++;
        break;
    }
    
  if(firex<rocketx+3)
  {
  	if(firex==0)
  	{
  		firex=rocketx+3;
	  }
	else
	{
		firex--;
	}
  }
  
  if(fire2x<rocketx+3)
  {
  	if(fire2x==0)
  	{
  		fire2x=rocketx+3;
	  }
	else
	{
		fire2x--;
	}
  }
    
  if(distance==50){
		score -= 1;
		distance = 0;
	}
  if(a==height)
  {
  	a=0;
  	label5:
        fuely = rand() % 40;
        if (fuely <= 3)
            goto label5;
}
   
   if(b==height)
  {
  	b=1;
  	label9:
        stoney = rand() % 40;
        if (stoney <= 3)
            goto label9;
   }
   if(distance>=0)
   {
   	unit++;
   }
   if(unit==9)
   {
   	ten++;
   	unit=0;
   }
   if(ten==9)
   {
   	hu++;
   	ten=0;
   	unit=0;
   }
   if(hu==9)
   {
   	th++;
   	hu=0;
   	ten=0;
   	unit=0;
   }
  
    
  
    for(fx=0;fx<=2;fx++)
    {
    	for(fy=-1;fy<=1;fy++)
    	{
    		for(rx=0;rx<=4;rx++)
    		{
    			for(ry=-3;ry<=4;ry++)
    			{
    				if (rocketx+rx == fuelx+a+fx && rockety+ry == fuely+fy) 
	{
		a=0;
		distance=0;
    label4:
        fuely = rand() % 40;
        if (fuely <= 3){
            goto label4;
        }
        
		if(score<10){
            score +=  1;
        }
    
	}
					}
			}
		}
	}
	for(fx=1;fx<=2;fx++)
    {
    	for(fy=-3;fy<=10;fy++)
    	{
    		for(rx=0;rx<=4;rx++)
    		{
    			for(ry=-3;ry<=4;ry++)
    			{
    				if(firex == stonex+b+fx && firey == stoney+fy)
    		{
    			b=1;
  	label11:
        stoney = rand() % 40;
        if (stoney <= 3)
        {
            goto label11;
    }
    firex=rocketx+3;
    firey=rockety-3;
}
	if(fire2x == stonex+b+fx && fire2y == stoney+fy)
    		{
    			b=1;
  	label21:
        stoney = rand() % 40;
        if (stoney <= 3)
        {
            goto label21;
    }
    fire2x=rocketx+3;
    fire2y=rockety+4;
}
	if (rocketx+rx == stonex+b+fx && rockety+ry == stoney+fy) 
	{
		gameover=1;
		
}
        
				}
			}
		}
	}
	


	if(score<=0){
    	gameover=1;
	
  
    }
    
}
  

int main()
{

  
    
    setup();
  
    
    while (!gameover) {
  
        
        draw();
        input();
        logic();
    }
    printf("\n\n OUT OF FUEL!!!");
    return 0;
}





