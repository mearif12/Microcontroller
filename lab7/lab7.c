void rotate0(){         //0 degree
    unsigned int i;
    for(i=0;i<50;i++){
      portb.f0 = 1;
      delay_us(800);   //for 0 degree rotation
      portb.f0 = 0;
      delay_us(19200);
    }
}
void rotate90(){        //90 degree
    unsigned int i;
    for(i=0;i<50;i++){
      portb.f0 = 1;
      delay_us(1500);  //for 90 degree rotation
      portb.f0 = 0;
      delay_us(18500);
    }
}
void rotate180(){       //180 degree
    unsigned int i;
    for(i=0;i<50;i++){
      portb.f0 = 1;
      delay_us(2200);  //for 180 degree rotation
      portb.f0 = 0;
      delay_us(17800);
    }
}
void main() {
    TRISB = 0x00;    //PORTB as Output
    while(1){
         rotate0();
         delay_ms(2000);
         rotate90();
         delay_ms(2000);
         rotate180();
         delay_ms(2000);
    }
}
