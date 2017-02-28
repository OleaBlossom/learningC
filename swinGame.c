#include <stdio.h>
#include <stdbool.h>
#include "SwinGame.h"

int main()
{
    open_graphics_window("Hello World", 800, 600);
    show_swin_game_splash_screen();
    
    do
    {
        process_events();
        
        clear_screen_to(ColorWhite);


        fill_circle(ColorDarkOrange, 400, 200, 100);
        fill_rectangle(ColorBlack, 350, 170, 20, 20);
        fill_rectangle(ColorBlack, 430, 170, 20, 20);
        fill_triangle(ColorBlack, 400, 180, 375, 230, 420, 230);
        fill_ellipse(ColorBlack, 375, 250, 50, 20);

        refresh_screen(60);

        delay(5000);
        
        draw_framerate_with_simple_font(0,0);
        
        refresh_screen_restrict_fps(60);
    } while ( ! window_close_requested() );
    
    return 0;
}
