//lcd module connections
sbit lcd_rs at RB0_bit;
sbit lcd_en at RB1_bit;
sbit lcd_d4 at RB2_bit;
sbit lcd_d5 at RB3_bit;
sbit lcd_d6 at RB4_bit;
sbit lcd_d7 at RB5_bit;

sbit lcd_rs_direction at TRISB0_bit;
sbit lcd_en_direction at TRISB1_bit;
sbit lcd_d4_direction at TRISB2_bit;
sbit lcd_d5_direction at TRISB3_bit;
sbit lcd_d6_direction at TRISB4_bit;
sbit lcd_d7_direction at TRISB5_bit;
//lcd module connections ends

char display[16];
unsigned int result;
float volt,temp;
void main(){
   TRISB = 0x00; //set portb as output
   TRISA = 0xff; //set porta as input
   
   adc_init();
   lcd_init();
   lcd_cmd(_lcd_clear);         //clearing lcd screen
   lcd_cmd(_lcd_cursor_off);    //turning off cursor blinking
   while(1){
       result = adc_read(0);
       volt = result * 4.88;
       temp = volt / 10;

       floatTostr(temp,display);

       lcd_out(1,1,"Temp=");    // 'Temp=' in 1st row and 1st column
       lcd_out_cp(display);
       lcd_chr(1,16,223);      //printing degree using ascii code
       lcd_out_cp(" C");
   }
}
