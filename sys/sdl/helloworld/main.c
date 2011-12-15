

#include "u8g.h"
#include <stdlib.h>
#include <stdio.h>


int u8g_sdl_get_key(void);


int main(void)
{
  u8g_uint_t w,h;
  u8g_t u8g;
  
  u8g_Init(&u8g, &u8g_dev_sdl_1bit);
  u8g_FirstPage(&u8g);
  u8g_SetCursorFont(&u8g, u8g_font_cursor);
  do
  {
    u8g_SetColorIndex(&u8g, 1);
    u8g_SetFont(&u8g, u8g_font_10x20);
    //u8g_SetFont(&u8g, u8g_font_fur17);
    w = u8g_GetFontBBXWidth(&u8g);
    h = u8g_GetFontBBXHeight(&u8g);
    //u8g_DrawStr(&u8g, 0, 2*h, 0, "ABCgdef");
    u8g_DrawStr(&u8g, 0, 5, 0, "g");
    u8g_DrawStr(&u8g, 10, 7, 0, "g");
    u8g_DrawStr(&u8g, 20, 9, 0, "g");
    u8g_DrawStr(&u8g, 20, 9, 0, "ga");

    //u8g_DrawStr(&u8g, 40, 9, 0, "g");
    u8g_DrawStr(&u8g, 70, 25, 0, "gabc");
    u8g_DrawStr(&u8g, 70, 25, 1, "gabc");
    u8g_DrawStr(&u8g, 70, 25, 2, "gabc");
    u8g_DrawStr(&u8g, 70, 25, 3, "gabc");

    
    //u8g_DrawFrame(&u8g, 2, 2, 9, 3);
    //u8g_DrawFrame(&u8g, 0, 0, 13, 7);
    //u8g_DrawHLine( &u8g, 0, 16, 50 );   
    
    u8g_SetColorIndex(&u8g, 1);
    
    u8g_DrawHLine( &u8g, 0, 3, 127 );   
    
    u8g_SetColorIndex(&u8g, 0);
    u8g_DrawHLine( &u8g, 0, 4, 127 );   
    
    u8g_DrawCursor(&u8g, 30, 20);
    u8g_DrawCursor(&u8g, 40, 20);
    u8g_DrawCursor(&u8g, 50, 20);
    u8g_DrawCursor(&u8g, 60, 20);
    
  }while( u8g_NextPage(&u8g) );
  
  while( u8g_sdl_get_key() < 0 )
    ;
  
  return 0;
}



