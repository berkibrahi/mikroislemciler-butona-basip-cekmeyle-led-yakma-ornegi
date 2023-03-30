#include <led_yak5.h>

void main()
{
set_tris_a(0xff);
set_tris_b(0x00);
output_b(0x00);
etiket:
if(input(pin_A1)==0)
goto etiket;
output_high(pin_B4);
  

}
