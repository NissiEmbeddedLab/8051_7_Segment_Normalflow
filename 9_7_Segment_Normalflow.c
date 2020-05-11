/* 	Author 		: 	L.Boaz
		Email id 	: 	laxsam89@gmail.com
		phone 		:		+91 95972 91816
		hackster	:		https://www.hackster.io/boaz */

#include<reg51.h>
void main(void)
{
	while(1)
	{
	unsigned int i;
		P2 = 0x00;								//	Null
	for(i=0;i<40000;i++);				//	Delay between the next pass
		P2 = 0x06;								//	1
		for(i=0;i<40000;i++);
		P2 = 0x5b;								//	2
		for(i=0;i<40000;i++);
		P2 = 0x4F;								//	3
		for(i=0;i<40000;i++);
		P2 = 0x66;								//	4
		for(i=0;i<40000;i++);		
		P2 = 0x6D;								//	5
		for(i=0;i<40000;i++);	
		P2 = 0x7D;								//	6
		for(i=0;i<40000;i++);
		P2 = 0x07;								//	7
		for(i=0;i<40000;i++);
		P2 = 0x7F;								//	8
		for(i=0;i<40000;i++);
		P2 = 0x6F;								//	9
		for(i=0;i<40000;i++);
		P2 = 0x77;								//	A
		for(i=0;i<40000;i++);
		P2 = 0x7C;								//	B
		for(i=0;i<40000;i++);
		P2 = 0x39;								//	C
		for(i=0;i<40000;i++);
		P2 = 0x5E;								//	D
		for(i=0;i<40000;i++);
		P2 = 0x79;								//	E
		for(i=0;i<40000;i++);
		P2 = 0x71;								//	F
		for(i=0;i<40000;i++);
	}
	}