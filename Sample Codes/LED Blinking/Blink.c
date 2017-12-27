#include<LPC21xx.h>

void delay1(int);	//define delay function

int main()
{

PINSEL0=0x00000000;	//select pins for blinking led

IODIR0=0x0000ffff;	//select I/O pins as output
	
while(1)
{

  IOSET0=0x0000ffff;	//sets pins high
  delay1(1000);				//gives 1 SEC delay
  IOCLR0=0x0000ffff;	//clears pins
  delay1(1000);				//gives 1 SEC delay
}
}
/*	Delay routine;gives an approximate delay in milliseconds	*/

void delay1(int d)           // delay routine
{  
	int i;
    while(d)                        
    {	
			  for(i=0;i<7000;i++){;}     
        d--;
    }
}

