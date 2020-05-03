#include<reg51.h>
void main(void)
{
	while(1)
	{
	unsigned int i;
		P2 = 0x00;
	for(i=0;i<40000;i++);
		P2 = 0x06;
		for(i=0;i<40000;i++);
		P2 = 0x5b;
		for(i=0;i<40000;i++);
		P2 = 0x4F;
		for(i=0;i<40000;i++);
		P2 = 0x66;
		for(i=0;i<40000;i++);
		P2 = 0x6D;
	for(i=0;i<40000;i++);
		P2 = 0x7D;
		for(i=0;i<40000;i++);
		P2 = 0x07;
		for(i=0;i<40000;i++);
		P2 = 0x7F;
		for(i=0;i<40000;i++);
		P2 = 0x6F;
		for(i=0;i<40000;i++);
		P2 = 0x77;
		for(i=0;i<40000;i++);
		P2 = 0x7C;
		for(i=0;i<40000;i++);
		P2 = 0x39;
		for(i=0;i<40000;i++);
		P2 = 0x5E;
		for(i=0;i<40000;i++);
		P2 = 0x79;
		for(i=0;i<40000;i++);
		P2 = 0x71;
		for(i=0;i<40000;i++);
	}
	}