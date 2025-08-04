int i = 0;
int j,k;
char array[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};  //cathode value
//char array[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90}; //anode value
void main() {
      TRISB = 0x00;
      TRISC = 0x00;
      while(1){
         portb =  array[i];
         for(j=0;j<100;j++){
           k = i%100;
           portc.f1 = 0;
           portb = array[i/100];     //2nd digit for 7 segment 4 digit
           delay_ms(10);
           portc.f1 = 1;
           portc.f2 = 0;
           portb = array[k/10];      //3rd digit for 7 segment 4 digit
           delay_ms(10);
           portc.f2 = 1;
           portc.f3 = 0;
           portb = array[k%10];     //4th digit for 7 segment 4 digit
           delay_ms(10);
           portc.f3 = 1;
           delay_ms(10);

         }
         i++;

         if(i > 200){
          i = 0;
         }
      }
}
