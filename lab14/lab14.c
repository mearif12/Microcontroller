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
//lcd module connection ends

unsigned char a;
void main() {
     TRISB = 0x00;     //set portb as output
     portb = 0x00;

     lcd_init();       //initialize lcd display
     while(1){
          lcd_cmd(_lcd_clear);      //clearing lcd display
          lcd_out(1,1,"Hi,I'm Arif !");      //1st row 1st column print
          lcd_out(2,3,"ICE , PUST    ");     //2nd row 3rd column print
          for(a = 0; a < 14;a++){
              delay_ms(300);               //text speed delay
              lcd_cmd(_lcd_shift_right);  //scrolling text left to right
          }
          for(a = 0 ; a < 14;a++){
              delay_ms(300);              //text speed delay
              lcd_cmd(_lcd_shift_left);   //scrolling text right to left
          }
          delay_ms(500);    //delay after finishing scroll
          lcd_cmd(_lcd_cursor_off);    //set cursor off
          lcd_cmd(_lcd_clear);         //clearing lcd display
     }
}
