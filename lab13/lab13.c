int i = 0;
int j,k;
char array[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void main() {
    TRISB = 0x00; // output for segments
    TRISC = 0x00; // output for digit select
    TRISD = 0xff; // input for buttons

    while(1){
        for( j = 0; j < 50; j++){
            // Always show display
            
            k = i % 100;
            
            portc.f1 = 0;
            portb = array[i/100];   // Hundreads digit
            delay_ms(5);
            portc.f1 = 1;
            
            portc.f2 = 0;
            portb = array[k / 10]; // Tens digit
            delay_ms(5);
            portc.f2 = 1;

            portc.f3 = 0;
            portb = array[k % 10]; // Units digit
            delay_ms(5);
            portc.f3 = 1;

            if(portd.f0 == 1){
               delay_ms(10);
               i++;
               while(portd.f0 == 1);
            }
        }
        if(portd.f1 == 1){
            delay_ms(10);
            i--;
            while(portd.f1 == 1);
        }

        if(i < 0 || i > 200){
           i = 0;
        }
    }
}
