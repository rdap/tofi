#ifndef INPUT_H
#define INPUT_H

#include <xkbcommon/xkbcommon.h>
#include "wdmenu.h"

void input_handle_keypress(struct wdmenu *wdmenu, xkb_keycode_t keycode);
void input_refresh_results(struct wdmenu *wdmenu);

#endif /* INPUT_H */
