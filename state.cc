#include "putty/state.hh"

void Putty::resize(State &state, int a_width, int a_height, int a_buffer_size)
{
  // If the dimensions don't change, leave this alone
  if (a_width == state.width && state.height == a_height && state.buffer_size == a_buffer_size)
    return;

  std::vector<Row> new_rows;
  new_rows.reserve(a_height + a_buffer_size);

  for (int i = -a_buffer_size; i < a_height; ++i)
    {
      // Copy lines from the original
      if (i >= -state.buffer_size && i < state.height)
        {
          new_rows.push_back(std::move(state.rows[i + state.buffer_size]));
          new_rows[new_rows.size() - 1].cells.resize(a_width);
        }
      else
        {
          new_rows.push_back(Row{std::vector< Cell >(a_width, Cell{}), 0});
        }
    }

  state.height = a_height;
  state.width = a_width;
  state.buffer_size = a_buffer_size;

  state.rows = std::move(new_rows);
}

void Putty::resize_display(State &state, int width, int height)
{
  resize(state, width, height, state.buffer_size);
}
