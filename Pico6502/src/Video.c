#include <rp6502.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

void main()
{
    xreg_vga_canvas(1);

    xram0_struct_set(0xFF00, vga_mode4_sprite_t, x_pos_px, 20);
    xram0_struct_set(0xFF00, vga_mode4_sprite_t, y_pos_px, 100);
    xram0_struct_set(0xFF00, vga_mode4_sprite_t, x_ram_sprite_ptr, 0x0000);
    xram0_struct_set(0xFF00, vga_mode4_sprite_t, log_size, 4);
    xram0_struct_set(0xFF00, vga_mode4_sprite_t, has_opacity_metadata, false);
    xreg_vga_mode(4,0, 0xFF00, 1, 0);

    while(1)
    ;
}
