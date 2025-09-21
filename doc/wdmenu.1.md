## NAME

wdmenu - Tiny dynamic wdmenu for Wayland, inspired by **rofi**(1) and
**dwdmenu**(1).

## SYNOPSIS

**wdmenu** \[options...\]

**wdmenu-run** \[options...\]

**wdmenu-drun** \[options...\]

## DESCRIPTION

**wdmenu** is a tiny dynamic wdmenu for Wayland compositors supporting the
layer-shell protocol. It reads newline-separated items from stdin, and
displays a graphical selection wdmenu. When a selection is made, it is
printed to stdout.

When invoked via the name **wdmenu-run**, **wdmenu** will not accept items
on stdin, instead presenting a list of executables in the user's \$PATH.

When invoked via the name **wdmenu-drun**, **wdmenu** will not accept items
on stdin, and will generate a list of applications from desktop files as
described in the Desktop Entry Specification.

## OPTIONS

**-h, --help**

> Print help and exit.

**-c, --config** \<path\>

> Specify path to custom config file.

All config file options described in **wdmenu**(5) are also accepted, in
the form **--key=value**.

## KEYS

\<Up\> \| \<Left\> \| \<Ctrl\>-k \| \<Ctrl\>-p \| \<Ctrl\>-b \|
\<Alt\>-k \| \<Alt\>-p \| \<Alt\>-h \| \<Shift\>-\<Tab\>

> Move the selection back one entry.

\<Down\> \| \<Right\> \| \<Ctrl\>-j \| \<Ctrl\>-n \| \<Ctrl\>-f \|
\<Alt\>-j \| \<Alt\>-n \| \<Alt\>-l \| \<Tab\>

> Move the selection forward one entry.

\<Page Up\>

> Move the selection back one page.

\<Page Down\>

> Move the selection forward one page.

\<Backspace\> \| \<Ctrl\>-h

> Delete character.

\<Ctrl\>-u

> Delete line.

\<Ctrl\>-w \| \<Ctrl\>-\<Backspace\>

> Delete word.

\<Enter\> \| \<Ctrl\>-m

> Confirm the current selection and quit.

\<Escape\> \| \<Ctrl\>-c \| \<Ctrl\>-g \| \<Ctrl\>-\[

> Quit without making a selection.

## FILES

*/etc/xdg/wdmenu/config*

> Example configuration file.

*\$XDG_CONFIG_HOME/wdmenu/config*

> The default configuration file location.

*\$XDG_CACHE_HOME/wdmenu-compgen*

> Cached list of executables under \$PATH, regenerated as necessary.

*\$XDG_CACHE_HOME/wdmenu-drun*

> Cached list of desktop applications, regenerated as necessary.

*\$XDG_STATE_HOME/wdmenu-history*

> Numeric count of commands selected in **wdmenu-run**, to enable sorting
> results by run count.

*\$XDG_STATE_HOME/wdmenu-drun-history*

> Numeric count of commands selected in **wdmenu-drun**, to enable sorting
> results by run count.

## EXIT STATUS

**wdmenu** exits with one of the following values:

0

> Success; a selection was made, or **wdmenu** was invoked with the **-h**
> option.

1

> An error occurred, or the user exited without making a selection.

## AUTHORS

Philip Jones \<<philj56@gmail.com>\>

## SEE ALSO

**wdmenu**(5), **dwdmenu**(1), **rofi**(1)
