// for non stop blinking otherwise use delay_us(10), may work same.
// very small delay to make the dot led like always visible.

void delay(unsigned char time)
{
 unsigned char i,j;
 for(i=0;i<time;i++){
    for(j=0;j<20;j++); //wasting time by making empty body loop
 }
}

void main() {
      TRISC = 0x00;
      TRISD = 0x00;
      
      while(1){
         portd = 0x80;  //pin1 logic high
         portc = 0x00;  //column 1 wise LED logic
         delay(10);
         
         portd = 0x40;  //pin2 logic high
         portc = 0x3f;  //column 2 wise LED logic
         delay(10);
         
         portd = 0x20;  //pin3 logic high
         portc = 0x48;  //column 3 wise LED logic
         delay(10);
         
         portd = 0x10;  //pin4 logic high
         portc = 0x88;  //column 4 wise LED logic
         delay(10);
         
         portd = 0x08;  //pin5 logic high
         portc = 0x48;  //column 5 wise LED logic
         delay(10);
         
         portd = 0x04;  //pin6 logic high
         portc = 0x3f;  //column 6 wise LED logic
         delay(10);
         
         portd = 0x02;  //pin7 logic high
         portc = 0x00;  //column 7 wise LED logic
         delay(10);
         
         portd = 0x01;  //pin8 logic high
         portc = 0x00;  //column 8 wise LED logic
         delay(10);
      }
}
