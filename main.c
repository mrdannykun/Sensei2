#include <gb/gb.h>
#include "jpchar.c"
#include "src1.c"

void main(){
    set_bkg_data(0, 105, jpchar);
    VBK_REG = 1;
    VBK_REG = 0;
    set_bkg_tiles(0, 0, 20, 22, src1);
    SHOW_BKG;
    DISPLAY_ON;
}