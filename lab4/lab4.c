int valAdc;  // analog value
char x[4];
void main(){
     UART1_Init(9600);
     ADC_Init();
     while(1){
         valAdc = ADC_READ(0); //Reading RA0 value
         IntToStr(valAdc,x);
         
         UART1_WRITE_TEXT("Analog Value=");
         UART1_WRITE_TEXT(x);
         
         strcpy(x,""); // clear x array
         UART1_WRITE(13);
         delay_ms(1000);
     }
}
