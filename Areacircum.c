#include<stdio.h>
 void main()
 {
     void areacircum(int);
    int r;
     printf("enter radius");
     scanf("%d",&r);
     
      areacircum(r);
     return 0;
 }
 void areacircum(int r)
 {
     float area,circum;
     area=3.14*r*r;
     circum=2*3.14*r;
     printf("%f",area);
     printf("%f",circum);
     
 }