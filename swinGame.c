#include <stdio.h>
#include <stdbool.h>
#include "SwinGame.h"

int main()
{
    open_graphics_window("Hello World", 800, 600);
 //   show_swin_game_splash_screen();
    
    do
    {
        process_events();
        
        clear_screen_to(ColorAntiqueWhite);

        // draw two scoops of ice cream in a cone
        fill_circle(ColorMagenta, 400, 300, 100);
        fill_triangle(ColorBurlyWood, 300, 350, 500, 350, 400, 550);
        fill_circle(ColorRed, 400, 200, 100);
        fill_ellipse(ColorMagenta, 308, 225, 185, 80);

        // draw sprinkles
        int w = 8;
        int h = 4;
        fill_ellipse(ColorFuchsia,     400, 115, w, h);
        fill_ellipse(ColorLawnGreen,   403, 131, w, h);
        fill_ellipse(ColorDeepSkyBlue, 386, 115, w, h);
        fill_ellipse(ColorLawnGreen,   348, 122, w, h);
        fill_ellipse(ColorGold,        369, 108, w, h);
        fill_ellipse(ColorFuchsia,     448, 118, w, h);
        fill_ellipse(ColorDeepSkyBlue, 425, 115, w, h);
        fill_ellipse(ColorLawnGreen,   412, 108, w, h);
        fill_ellipse(ColorDeepSkyBlue, 369, 128, w, h);
        fill_ellipse(ColorDeepSkyBlue, 436, 128, w, h);
        fill_ellipse(ColorGold,        392, 103, w, h);
        fill_ellipse(ColorFuchsia,     328, 136, w, h);
        fill_ellipse(ColorGold,        461, 136, w, h);

        refresh_screen(60);

        delay(5000);
        
        draw_framerate_with_simple_font(0,0);
        
        refresh_screen_restrict_fps(60);
    } while ( ! window_close_requested() );
    
    return 0;
}
