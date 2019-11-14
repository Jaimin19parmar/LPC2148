// :::: Developed by Jaimin Parmar:::://
// keil uVision 5//
// Simple blinking LED//
//Tested in proteus 8 professional//
#include<LPC214x.h>

int main() {
	int i;
	PINSEL0 =(0<<2); //set bit 1:0 of PINSEL for use of GPIO
	IO0DIR|=(1<<7);  //set direction register as output at P0.7
	
	while(1)
	{
		IO0SET=(1<<7);  //SET P0.7 HAS HIGH
		for(i=0;i<0xFF;i++);
		IO0CLR=(1<<7);       //clear P0.7.....it is low
		for(i=0;i<0xFF;i++);
	}
}	
