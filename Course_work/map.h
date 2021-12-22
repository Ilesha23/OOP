#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>

using namespace sf;
const int HEIGHT_MAP = 25;//размер карты высота
const int WIDTH_MAP = 40;//размер карты ширина 
sf::String TileMap[HEIGHT_MAP] = {
"0000000000000000000000000000000000000000",
"0                 f                    0",
"0   s                                  0",
"0             f         f              0",
"0                f              f      0",
"0                        f             0",
"0              s                       0",
"0                 f                    0",
"0                                      0",
"0  h  s  h0   ss h    e0               0",
"0     000000000000000000               0",
"00    h      h                         0",
"000s                                   0",
"0 00    h                              0",
"0  00                                  0",
"0   00shh                              0",
"0     000hh                            0",
"0     00000   s                        0",
"0             00      s                0",
"0                  s 00                0",
"0          s        0                  0",
"0        00000     0                   0",
"0      s0000000                        0",
"0      000000000   f      f  ff        0",
"0000000000000000000000000000000000000000",
};