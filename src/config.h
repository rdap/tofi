#ifndef TOFI_CONFIG_H
#define TOFI_CONFIG_H

#include <stdbool.h>
#include "wdmenu.h"

void config_load(struct wdmenu *wdmenu, const char *filename);
bool config_apply(struct wdmenu *wdmenu, const char *option, const char *value);
void config_fixup_values(struct wdmenu *wdmenu);

#endif /* TOFI_CONFIG_H */
