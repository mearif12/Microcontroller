void main() {
                  /**For Ascending 1 2 3 4 5 6 7 8 9 */
        // int i = 0;
        // char arr[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
         
        // TRISB = 0x00;
        // portb = 0xff;
         
        // while(1){
        //      portb = arr[i];
        //       delay_ms(500);
        //       i++;
        //       if(i > 9){
        //          i = 0;
        //       }
        //}
        
                     /**For Descending 9 8 7 6 5 4 3 2 1*/
         int i = 9;
         char arr[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};

         TRISB = 0x00;
         portb = 0xff;

         while(1){
               portb = arr[i];
               delay_ms(500);
               i--;
               if(i < 0){
                  i = 9 ;
               }
         }
}
