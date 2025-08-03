void main() {
       TRISB = 0x00;   //set portb as output
       portb = 0x00;   //initialize portb with 0x00 value.
       
       while(1){
           portb.f0 = 1;   //ON state
           delay_ms(1000);  // delay 1 sec
           
           portb.f0 = 0;   //OFF state
           delay_ms(1000);
       }
}
