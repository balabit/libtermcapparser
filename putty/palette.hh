#ifndef PUTTY_PALETTE_HH_INCLUDE
#define PUTTY_PALETTE_HH_INCLUDE

#include <cstdint>
#include <array>

namespace Putty
{

  struct RgbColor
  {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
  };

  static constexpr int PaletteSize = 256;

  static constexpr inline std::array<RgbColor,PaletteSize> xterm_default_colors =
  {
    RgbColor{0x00, 0x00, 0x00}, //   0
    RgbColor{0x80, 0x00, 0x00}, //   1
    RgbColor{0x00, 0x80, 0x00}, //   2
    RgbColor{0x80, 0x80, 0x00}, //   3
    RgbColor{0x00, 0x00, 0x80}, //   4
    RgbColor{0x80, 0x00, 0x80}, //   5
    RgbColor{0x00, 0x80, 0x80}, //   6
    RgbColor{0xc0, 0xc0, 0xc0}, //   7
    RgbColor{0x80, 0x80, 0x80}, //   8
    RgbColor{0xff, 0x00, 0x00}, //   9
    RgbColor{0x00, 0xff, 0x00}, //  10
    RgbColor{0xff, 0xff, 0x00}, //  11
    RgbColor{0x00, 0x00, 0xff}, //  12
    RgbColor{0xff, 0x00, 0xff}, //  13
    RgbColor{0x00, 0xff, 0xff}, //  14
    RgbColor{0xff, 0xff, 0xff}, //  15
    RgbColor{0x00, 0x00, 0x00}, //  16
    RgbColor{0x00, 0x00, 0x5f}, //  17
    RgbColor{0x00, 0x00, 0x87}, //  18
    RgbColor{0x00, 0x00, 0xaf}, //  19
    RgbColor{0x00, 0x00, 0xd7}, //  20
    RgbColor{0x00, 0x00, 0xff}, //  21
    RgbColor{0x00, 0x5f, 0x00}, //  22
    RgbColor{0x00, 0x5f, 0x5f}, //  23
    RgbColor{0x00, 0x5f, 0x87}, //  24
    RgbColor{0x00, 0x5f, 0xaf}, //  25
    RgbColor{0x00, 0x5f, 0xd7}, //  26
    RgbColor{0x00, 0x5f, 0xff}, //  27
    RgbColor{0x00, 0x87, 0x00}, //  28
    RgbColor{0x00, 0x87, 0x5f}, //  29
    RgbColor{0x00, 0x87, 0x87}, //  30
    RgbColor{0x00, 0x87, 0xaf}, //  31
    RgbColor{0x00, 0x87, 0xd7}, //  32
    RgbColor{0x00, 0x87, 0xff}, //  33
    RgbColor{0x00, 0xaf, 0x00}, //  34
    RgbColor{0x00, 0xaf, 0x5f}, //  35
    RgbColor{0x00, 0xaf, 0x87}, //  36
    RgbColor{0x00, 0xaf, 0xaf}, //  37
    RgbColor{0x00, 0xaf, 0xd7}, //  38
    RgbColor{0x00, 0xaf, 0xff}, //  39
    RgbColor{0x00, 0xd7, 0x00}, //  40
    RgbColor{0x00, 0xd7, 0x5f}, //  41
    RgbColor{0x00, 0xd7, 0x87}, //  42
    RgbColor{0x00, 0xd7, 0xaf}, //  43
    RgbColor{0x00, 0xd7, 0xd7}, //  44
    RgbColor{0x00, 0xd7, 0xff}, //  45
    RgbColor{0x00, 0xff, 0x00}, //  46
    RgbColor{0x00, 0xff, 0x5f}, //  47
    RgbColor{0x00, 0xff, 0x87}, //  48
    RgbColor{0x00, 0xff, 0xaf}, //  49
    RgbColor{0x00, 0xff, 0xd7}, //  50
    RgbColor{0x00, 0xff, 0xff}, //  51
    RgbColor{0x5f, 0x00, 0x00}, //  52
    RgbColor{0x5f, 0x00, 0x5f}, //  53
    RgbColor{0x5f, 0x00, 0x87}, //  54
    RgbColor{0x5f, 0x00, 0xaf}, //  55
    RgbColor{0x5f, 0x00, 0xd7}, //  56
    RgbColor{0x5f, 0x00, 0xff}, //  57
    RgbColor{0x5f, 0x5f, 0x00}, //  58
    RgbColor{0x5f, 0x5f, 0x5f}, //  59
    RgbColor{0x5f, 0x5f, 0x87}, //  60
    RgbColor{0x5f, 0x5f, 0xaf}, //  61
    RgbColor{0x5f, 0x5f, 0xd7}, //  62
    RgbColor{0x5f, 0x5f, 0xff}, //  63
    RgbColor{0x5f, 0x87, 0x00}, //  64
    RgbColor{0x5f, 0x87, 0x5f}, //  65
    RgbColor{0x5f, 0x87, 0x87}, //  66
    RgbColor{0x5f, 0x87, 0xaf}, //  67
    RgbColor{0x5f, 0x87, 0xd7}, //  68
    RgbColor{0x5f, 0x87, 0xff}, //  69
    RgbColor{0x5f, 0xaf, 0x00}, //  70
    RgbColor{0x5f, 0xaf, 0x5f}, //  71
    RgbColor{0x5f, 0xaf, 0x87}, //  72
    RgbColor{0x5f, 0xaf, 0xaf}, //  73
    RgbColor{0x5f, 0xaf, 0xd7}, //  74
    RgbColor{0x5f, 0xaf, 0xff}, //  75
    RgbColor{0x5f, 0xd7, 0x00}, //  76
    RgbColor{0x5f, 0xd7, 0x5f}, //  77
    RgbColor{0x5f, 0xd7, 0x87}, //  78
    RgbColor{0x5f, 0xd7, 0xaf}, //  79
    RgbColor{0x5f, 0xd7, 0xd7}, //  80
    RgbColor{0x5f, 0xd7, 0xff}, //  81
    RgbColor{0x5f, 0xff, 0x00}, //  82
    RgbColor{0x5f, 0xff, 0x5f}, //  83
    RgbColor{0x5f, 0xff, 0x87}, //  84
    RgbColor{0x5f, 0xff, 0xaf}, //  85
    RgbColor{0x5f, 0xff, 0xd7}, //  86
    RgbColor{0x5f, 0xff, 0xff}, //  87
    RgbColor{0x87, 0x00, 0x00}, //  88
    RgbColor{0x87, 0x00, 0x5f}, //  89
    RgbColor{0x87, 0x00, 0x87}, //  90
    RgbColor{0x87, 0x00, 0xaf}, //  91
    RgbColor{0x87, 0x00, 0xd7}, //  92
    RgbColor{0x87, 0x00, 0xff}, //  93
    RgbColor{0x87, 0x5f, 0x00}, //  94
    RgbColor{0x87, 0x5f, 0x5f}, //  95
    RgbColor{0x87, 0x5f, 0x87}, //  96
    RgbColor{0x87, 0x5f, 0xaf}, //  97
    RgbColor{0x87, 0x5f, 0xd7}, //  98
    RgbColor{0x87, 0x5f, 0xff}, //  99
    RgbColor{0x87, 0x87, 0x00}, // 100
    RgbColor{0x87, 0x87, 0x5f}, // 101
    RgbColor{0x87, 0x87, 0x87}, // 102
    RgbColor{0x87, 0x87, 0xaf}, // 103
    RgbColor{0x87, 0x87, 0xd7}, // 104
    RgbColor{0x87, 0x87, 0xff}, // 105
    RgbColor{0x87, 0xaf, 0x00}, // 106
    RgbColor{0x87, 0xaf, 0x5f}, // 107
    RgbColor{0x87, 0xaf, 0x87}, // 108
    RgbColor{0x87, 0xaf, 0xaf}, // 109
    RgbColor{0x87, 0xaf, 0xd7}, // 110
    RgbColor{0x87, 0xaf, 0xff}, // 111
    RgbColor{0x87, 0xd7, 0x00}, // 112
    RgbColor{0x87, 0xd7, 0x5f}, // 113
    RgbColor{0x87, 0xd7, 0x87}, // 114
    RgbColor{0x87, 0xd7, 0xaf}, // 115
    RgbColor{0x87, 0xd7, 0xd7}, // 116
    RgbColor{0x87, 0xd7, 0xff}, // 117
    RgbColor{0x87, 0xff, 0x00}, // 118
    RgbColor{0x87, 0xff, 0x5f}, // 119
    RgbColor{0x87, 0xff, 0x87}, // 120
    RgbColor{0x87, 0xff, 0xaf}, // 121
    RgbColor{0x87, 0xff, 0xd7}, // 122
    RgbColor{0x87, 0xff, 0xff}, // 123
    RgbColor{0xaf, 0x00, 0x00}, // 124
    RgbColor{0xaf, 0x00, 0x5f}, // 125
    RgbColor{0xaf, 0x00, 0x87}, // 126
    RgbColor{0xaf, 0x00, 0xaf}, // 127
    RgbColor{0xaf, 0x00, 0xd7}, // 128
    RgbColor{0xaf, 0x00, 0xff}, // 129
    RgbColor{0xaf, 0x5f, 0x00}, // 130
    RgbColor{0xaf, 0x5f, 0x5f}, // 131
    RgbColor{0xaf, 0x5f, 0x87}, // 132
    RgbColor{0xaf, 0x5f, 0xaf}, // 133
    RgbColor{0xaf, 0x5f, 0xd7}, // 134
    RgbColor{0xaf, 0x5f, 0xff}, // 135
    RgbColor{0xaf, 0x87, 0x00}, // 136
    RgbColor{0xaf, 0x87, 0x5f}, // 137
    RgbColor{0xaf, 0x87, 0x87}, // 138
    RgbColor{0xaf, 0x87, 0xaf}, // 139
    RgbColor{0xaf, 0x87, 0xd7}, // 140
    RgbColor{0xaf, 0x87, 0xff}, // 141
    RgbColor{0xaf, 0xaf, 0x00}, // 142
    RgbColor{0xaf, 0xaf, 0x5f}, // 143
    RgbColor{0xaf, 0xaf, 0x87}, // 144
    RgbColor{0xaf, 0xaf, 0xaf}, // 145
    RgbColor{0xaf, 0xaf, 0xd7}, // 146
    RgbColor{0xaf, 0xaf, 0xff}, // 147
    RgbColor{0xaf, 0xd7, 0x00}, // 148
    RgbColor{0xaf, 0xd7, 0x5f}, // 149
    RgbColor{0xaf, 0xd7, 0x87}, // 150
    RgbColor{0xaf, 0xd7, 0xaf}, // 151
    RgbColor{0xaf, 0xd7, 0xd7}, // 152
    RgbColor{0xaf, 0xd7, 0xff}, // 153
    RgbColor{0xaf, 0xff, 0x00}, // 154
    RgbColor{0xaf, 0xff, 0x5f}, // 155
    RgbColor{0xaf, 0xff, 0x87}, // 156
    RgbColor{0xaf, 0xff, 0xaf}, // 157
    RgbColor{0xaf, 0xff, 0xd7}, // 158
    RgbColor{0xaf, 0xff, 0xff}, // 159
    RgbColor{0xd7, 0x00, 0x00}, // 160
    RgbColor{0xd7, 0x00, 0x5f}, // 161
    RgbColor{0xd7, 0x00, 0x87}, // 162
    RgbColor{0xd7, 0x00, 0xaf}, // 163
    RgbColor{0xd7, 0x00, 0xd7}, // 164
    RgbColor{0xd7, 0x00, 0xff}, // 165
    RgbColor{0xd7, 0x5f, 0x00}, // 166
    RgbColor{0xd7, 0x5f, 0x5f}, // 167
    RgbColor{0xd7, 0x5f, 0x87}, // 168
    RgbColor{0xd7, 0x5f, 0xaf}, // 169
    RgbColor{0xd7, 0x5f, 0xd7}, // 170
    RgbColor{0xd7, 0x5f, 0xff}, // 171
    RgbColor{0xd7, 0x87, 0x00}, // 172
    RgbColor{0xd7, 0x87, 0x5f}, // 173
    RgbColor{0xd7, 0x87, 0x87}, // 174
    RgbColor{0xd7, 0x87, 0xaf}, // 175
    RgbColor{0xd7, 0x87, 0xd7}, // 176
    RgbColor{0xd7, 0x87, 0xff}, // 177
    RgbColor{0xd7, 0xaf, 0x00}, // 178
    RgbColor{0xd7, 0xaf, 0x5f}, // 179
    RgbColor{0xd7, 0xaf, 0x87}, // 180
    RgbColor{0xd7, 0xaf, 0xaf}, // 181
    RgbColor{0xd7, 0xaf, 0xd7}, // 182
    RgbColor{0xd7, 0xaf, 0xff}, // 183
    RgbColor{0xd7, 0xd7, 0x00}, // 184
    RgbColor{0xd7, 0xd7, 0x5f}, // 185
    RgbColor{0xd7, 0xd7, 0x87}, // 186
    RgbColor{0xd7, 0xd7, 0xaf}, // 187
    RgbColor{0xd7, 0xd7, 0xd7}, // 188
    RgbColor{0xd7, 0xd7, 0xff}, // 189
    RgbColor{0xd7, 0xff, 0x00}, // 190
    RgbColor{0xd7, 0xff, 0x5f}, // 191
    RgbColor{0xd7, 0xff, 0x87}, // 192
    RgbColor{0xd7, 0xff, 0xaf}, // 193
    RgbColor{0xd7, 0xff, 0xd7}, // 194
    RgbColor{0xd7, 0xff, 0xff}, // 195
    RgbColor{0xff, 0x00, 0x00}, // 196
    RgbColor{0xff, 0x00, 0x5f}, // 197
    RgbColor{0xff, 0x00, 0x87}, // 198
    RgbColor{0xff, 0x00, 0xaf}, // 199
    RgbColor{0xff, 0x00, 0xd7}, // 200
    RgbColor{0xff, 0x00, 0xff}, // 201
    RgbColor{0xff, 0x5f, 0x00}, // 202
    RgbColor{0xff, 0x5f, 0x5f}, // 203
    RgbColor{0xff, 0x5f, 0x87}, // 204
    RgbColor{0xff, 0x5f, 0xaf}, // 205
    RgbColor{0xff, 0x5f, 0xd7}, // 206
    RgbColor{0xff, 0x5f, 0xff}, // 207
    RgbColor{0xff, 0x87, 0x00}, // 208
    RgbColor{0xff, 0x87, 0x5f}, // 209
    RgbColor{0xff, 0x87, 0x87}, // 210
    RgbColor{0xff, 0x87, 0xaf}, // 211
    RgbColor{0xff, 0x87, 0xd7}, // 212
    RgbColor{0xff, 0x87, 0xff}, // 213
    RgbColor{0xff, 0xaf, 0x00}, // 214
    RgbColor{0xff, 0xaf, 0x5f}, // 215
    RgbColor{0xff, 0xaf, 0x87}, // 216
    RgbColor{0xff, 0xaf, 0xaf}, // 217
    RgbColor{0xff, 0xaf, 0xd7}, // 218
    RgbColor{0xff, 0xaf, 0xff}, // 219
    RgbColor{0xff, 0xd7, 0x00}, // 220
    RgbColor{0xff, 0xd7, 0x5f}, // 221
    RgbColor{0xff, 0xd7, 0x87}, // 222
    RgbColor{0xff, 0xd7, 0xaf}, // 223
    RgbColor{0xff, 0xd7, 0xd7}, // 224
    RgbColor{0xff, 0xd7, 0xff}, // 225
    RgbColor{0xff, 0xff, 0x00}, // 226
    RgbColor{0xff, 0xff, 0x5f}, // 227
    RgbColor{0xff, 0xff, 0x87}, // 228
    RgbColor{0xff, 0xff, 0xaf}, // 229
    RgbColor{0xff, 0xff, 0xd7}, // 230
    RgbColor{0xff, 0xff, 0xff}, // 231
    RgbColor{0x08, 0x08, 0x08}, // 232
    RgbColor{0x12, 0x12, 0x12}, // 233
    RgbColor{0x1c, 0x1c, 0x1c}, // 234
    RgbColor{0x26, 0x26, 0x26}, // 235
    RgbColor{0x30, 0x30, 0x30}, // 236
    RgbColor{0x3a, 0x3a, 0x3a}, // 237
    RgbColor{0x44, 0x44, 0x44}, // 238
    RgbColor{0x4e, 0x4e, 0x4e}, // 239
    RgbColor{0x58, 0x58, 0x58}, // 240
    RgbColor{0x62, 0x62, 0x62}, // 241
    RgbColor{0x6c, 0x6c, 0x6c}, // 242
    RgbColor{0x76, 0x76, 0x76}, // 243
    RgbColor{0x80, 0x80, 0x80}, // 244
    RgbColor{0x8a, 0x8a, 0x8a}, // 245
    RgbColor{0x94, 0x94, 0x94}, // 246
    RgbColor{0x9e, 0x9e, 0x9e}, // 247
    RgbColor{0xa8, 0xa8, 0xa8}, // 248
    RgbColor{0xb2, 0xb2, 0xb2}, // 249
    RgbColor{0xbc, 0xbc, 0xbc}, // 250
    RgbColor{0xc6, 0xc6, 0xc6}, // 251
    RgbColor{0xd0, 0xd0, 0xd0}, // 252
    RgbColor{0xda, 0xda, 0xda}, // 253
    RgbColor{0xe4, 0xe4, 0xe4}, // 254
    RgbColor{0xee, 0xee, 0xee}  // 255
  };

  /**
   * A palette represents the 256 indexed color RGB palette. By default
   * the palette values are filled with the default xterm palette colors.
   */
  struct Palette
  {
    std::array<RgbColor, PaletteSize> colors{xterm_default_colors};
  };

  inline bool operator==(const RgbColor &a, const RgbColor &b)
  {
    return a.red == b.red && a.green == b.green && a.blue == b.blue;
  }

} // namespace Putty

#endif // PUTTY_PALETTE_HH_INCLUDE
