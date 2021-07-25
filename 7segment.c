#include "reg51.h"
void delay(int ms);
void main()
{
   char c[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
   
   while(1)
    {	
        int l;
     for(l=0;l<=9;l++)
	 {  
       P2=c[l];
       	   
	   delay(500);
	   }
	   }
	 }	   
			void delay(int ms)
			{    int i,j;
			  for(i=0;i<=ms;i++)
			  {  
			     for(j=0;j<=5000;j++);
				 {
				 }
				 }
		 }