int i = 0;       //starting value
int j;
unsigned char array[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F}; //cathode hexa values
void main(){
     TRISB = 0x00;
     TRISC = 0x00;
     portb = 0xff;
     portc = 0xff;
     
     while(1){
         for(j=0;j<50;j++){
           portc.f1 = 0;
           portb = array[i/10];
           delay_ms(10);
           portc.f1 = 1;
           portc.f2 = 0;
           portb = array[i%10];
           delay_ms(10);
           portc.f2 = 1;
         }
         i++;

         if(i > 99){
          i = 0;
         }
     }
}
