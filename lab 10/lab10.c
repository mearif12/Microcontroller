void main() {
     TRISD = 0x00;    //set portd as output
     while(1){

        // D0 -> LSB & D7 -> MSB in PORTD.
        //(D0 to D3),which could control a 4-phase system like a stepper motor.
        // energizing two phases at a time.
        
        portd = 0b00000011;  //pins 0 and 1 high (Energize phases 1 and 2)
        delay_ms(500);       //delay for 0.5 sec
        
        portd = 0b00000110;  //pins 1 and 2 high (Energize phases 2 and 3)
        delay_ms(500);
        
        portd = 0b00001100;  //pins 2 and 3 high (Energize phases 3 and 4)
        delay_ms(500);
        
        portd = 0b00001001;  //pins 0 and 3 high (Energize phases 1 and 4)
        delay_ms(500);
     }
}

