#ifndef PUTTY_STATE_HH_INCLUDE
#define PUTTY_STATE_HH_INCLUDE

#include <putty/cell.hh>
#include <putty/row.hh>
#include <putty/palette.hh>

namespace Putty
{

  struct Cursor
  {
    int x{};
    int y{};
    bool enabled{};
  };

  /**
   * Terminal state object. Contains the content of a terminal
   * at any given time.
   */
  struct State
  {
    int width{};
    int height{};
    int buffer_size{};
    bool alternate_screen{};
    Cursor cursor;
    std::vector< Row > rows;
    Palette palette;
  };

  void resize(State &state, int a_width, int a_height, int a_buffer_size);
  void resize_display(State &state, int width, int height);

} // namespace Putty

#endif // PUTTY_STATE_HH_INCLUDE
