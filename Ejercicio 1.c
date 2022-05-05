#include <18F4550.h>
#use delay (clock=20M)

void main (void){

int x;
int8 aux_1;
int8 aux_2;

   set_tris_c(0xFF);
   set_tris_b(0x00);
   
   while(true){
   if (input(pin_c0)==1){
      aux_1=1;
      for(x=1;x<=8;x++){
         output_d(aux_1);
         delay_ms(500);
         aux_1 = aux_1*2;
       }
   }
   
   if(input(pin_c1)==1){
       aux_2=128;
      for(x=1;x<=8;x++){
         output_d(aux_2);
         delay_ms(500);
         aux_2 = aux_2/2;
       }
   }    
 }     
}

