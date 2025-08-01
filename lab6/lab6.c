short duty = 0;   //initial duty cycle (0%)
void main() {
     TRISB = 0x00;   //set portb as output
     TRISD = 0xff;   //set portd as input
     
     //rotating in anti-clock wise direction
     portb.f0 = 1;
     portb.f1 = 0;
     
     pwm1_init(1000); //initializing pwm with 1KHz frequency
     pwm1_start();
     pwm1_set_duty(duty);
     
     while(1){
        if(RD0_bit && duty < 250){  //if increase button pressed and duty < 250

               delay_ms(100);     //Debounce delay
               if(RD0_bit && duty < 250){  //confirm button still pressed
                      duty = duty + 10;   //increase duty cycle by 10
                      pwm1_set_duty(duty);  //update pwm duty cycle
               }
        }
        
        if(RD1_bit && duty > 0){  //if decrease button pressed and duty > 0
               delay_ms(100);   //Debounce delay
               if(RD1_bit && duty > 0){
                      duty = duty - 10;
                      pwm1_set_duty(duty);
               }
        }
        
        delay_ms(10); //small delay to control update rate
     }
}
