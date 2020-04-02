#ifndef PUTTY_STATE_P_HH_INCLUDE
#define PUTTY_STATE_P_HH_INCLUDE

#include <putty/state.hh>

namespace Putty
{

    static inline bool is_valid_row(const State &state, size_t row)
    {
      size_t row_index = row + state.buffer_size;
      return row_index < state.rows.size();
    }

    static inline const Row *get_row(const State &state, size_t row)
    {
      if (!is_valid_row(state, row))
        return nullptr;

      return &state.rows[row + state.buffer_size];
    }

    static inline bool is_valid_cell(const State &state, size_t row, size_t col)
    {
      return is_valid_row(state, row) && (col < state.rows[row + state.buffer_size].cells.size());
    }

    static inline const Cell *get_cell(const State &state, size_t row, size_t col)
    {
      if (!is_valid_cell(state, row, col))
        return nullptr;

      return &state.rows[row + state.buffer_size].cells[col];
    }

    static inline bool set_cell(State &state, size_t row, size_t col, const std::wstring &characters, uint64_t attributes)
    {
      if (!is_valid_cell(state, row, col))
        return false;

      state.rows[row + state.buffer_size].cells[col] = Cell{characters, attributes & CellHelpers::ValidMask};
      return true;
    }

}

#endif // PUTTY_STATE_P_HH_INCLUDE
