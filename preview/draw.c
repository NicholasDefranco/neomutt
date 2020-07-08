#include "config.h"
#include "private.h"
#include "gui/lib.h"

void preview_draw(struct MuttWindow *win)
{
  if (!win || !win->state.visible)
    return;

  mutt_window_move(win, 0, 0);
  mutt_window_addstr("Hi Daedric!");
}
