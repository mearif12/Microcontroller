char array[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int i;
void main() {
    TRISB = 0x00;
    TRISD = 0xff;
    i = EEPROM_READ(0x00); //EEPROM Address
    portb = array[i];
    while(1){
       if(portd.f0 == 1){
          delay_ms(100);
          if(portd.f0 == 1){
             if(i < 9){
               i++;
               portb = array[i];
               EEPROM_WRITE(0x00,i); //Write in EEPROM
               delay_ms(10);
             }
          }
       }
       if(portd.f1 == 1){
          delay_ms(100);
          if(portd.f1 == 1){
             if (i > 0){
                i--;
                portb = array[i];
                EEPROM_WRITE(0x00,i); //Write in EEPROM
                delay_ms(10);
             }
          }
       }
       if( i > 9 || i < 0){
          i = 0;                //reseting to 0 state
       }
    }
}
