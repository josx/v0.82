/*

Arial Font definition for Graphic class
Federico Lanza for Robotgroup

Apr, 2012

*/

#ifndef ARIAL_H
#define ARIAL_H

#include "fontdef.h"

#define ARIAL_HEIGHT    12

uint8_t Arial_Charmap[] = 
{
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x50, 0x50, 0xF8, 0x50, 0xA0, 0xF8, 0xA0, 0xA0, 0x00, 0x00, 0x00, 
  0x20, 0x70, 0xA8, 0xA0, 0x70, 0x28, 0x28, 0xA8, 0x70, 0x20, 0x00, 0x00, 
  0x00, 0x44, 0xA8, 0xA8, 0x50, 0x14, 0x1A, 0x2A, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x50, 0x50, 0x20, 0xE8, 0x98, 0x98, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x00, 
  0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 
  0x00, 0x40, 0xE0, 0x40, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x20, 0xF8, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x20, 0x60, 0xA0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x10, 0x10, 0x20, 0x40, 0x80, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x10, 0x60, 0x10, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x30, 0x50, 0x50, 0x90, 0xF8, 0x10, 0x10, 0x00, 0x00, 0x00, 
  0x00, 0x70, 0x40, 0x80, 0xE0, 0x10, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x80, 0xA0, 0xD0, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x90, 0x60, 0x90, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x90, 0xB0, 0x50, 0x10, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x10, 0x60, 0x80, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x60, 0x10, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x90, 0x10, 0x20, 0x40, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x1C, 0x22, 0x5B, 0xA5, 0xA5, 0xA5, 0xA5, 0x9E, 0x41, 0x22, 0x1C, 
  0x00, 0x20, 0x50, 0x50, 0x50, 0x50, 0x70, 0x88, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0x88, 0x88, 0xF0, 0x88, 0x88, 0x88, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x44, 0x84, 0x80, 0x80, 0x84, 0x44, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0xE0, 0x90, 0x88, 0x88, 0x88, 0x88, 0x90, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0x80, 0x80, 0xF8, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0x80, 0x80, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x44, 0x84, 0x80, 0x9C, 0x84, 0x44, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x88, 0x90, 0xA0, 0xE0, 0xA0, 0x90, 0x90, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x82, 0xC6, 0xC6, 0xAA, 0xAA, 0xAA, 0xAA, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x84, 0xC4, 0xA4, 0xA4, 0x94, 0x94, 0x8C, 0x84, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x48, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30, 0x00, 0x00, 0x00, 
  0x00, 0xF0, 0x88, 0x88, 0x88, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x48, 0x84, 0x84, 0x84, 0x84, 0x58, 0x34, 0x04, 0x00, 0x00, 
  0x00, 0xF0, 0x88, 0x88, 0xF0, 0xA0, 0x90, 0x88, 0x84, 0x00, 0x00, 0x00, 
  0x00, 0x70, 0x88, 0x80, 0x70, 0x08, 0x88, 0x88, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x48, 0x30, 0x00, 0x00, 0x00, 
  0x00, 0x88, 0x88, 0x50, 0x50, 0x50, 0x50, 0x50, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x92, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0x44, 0x00, 0x00, 0x00, 
  0x00, 0x84, 0x48, 0x48, 0x30, 0x30, 0x48, 0x48, 0x84, 0x00, 0x00, 0x00, 
  0x00, 0x88, 0x50, 0x50, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0x08, 0x10, 0x20, 0x20, 0x40, 0x80, 0xF8, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0x00, 
  0x00, 0x80, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0x00, 
  0x00, 0x40, 0xA0, 0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 
  0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x10, 0x70, 0x90, 0x90, 0x70, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0xA0, 0xD0, 0x90, 0x90, 0xD0, 0xA0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x90, 0x80, 0x80, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x10, 0x50, 0xB0, 0x90, 0x90, 0xB0, 0x50, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x90, 0xF0, 0x80, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x40, 0xE0, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x50, 0xB0, 0x90, 0x90, 0xB0, 0x50, 0x10, 0xE0, 0x00, 
  0x00, 0x80, 0x80, 0xA0, 0xD0, 0x90, 0x90, 0x90, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0x00, 
  0x00, 0x80, 0x80, 0x90, 0xA0, 0xC0, 0xA0, 0x90, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xA6, 0xDA, 0x92, 0x92, 0x92, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xA0, 0xD0, 0x90, 0x90, 0x90, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x90, 0x90, 0x90, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xA0, 0xD0, 0x90, 0x90, 0xD0, 0xA0, 0x80, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x50, 0xB0, 0x90, 0x90, 0xB0, 0x50, 0x10, 0x10, 0x00, 
  0x00, 0x00, 0x00, 0xA0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x90, 0x40, 0x20, 0x90, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x40, 0xE0, 0x40, 0x40, 0x40, 0x40, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x90, 0x90, 0x90, 0x90, 0xB0, 0x50, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x88, 0x88, 0x50, 0x50, 0x50, 0x20, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x92, 0xAA, 0xAA, 0xAA, 0xAA, 0x44, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x88, 0x50, 0x20, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x88, 0x50, 0x50, 0x50, 0x20, 0x20, 0x20, 0x40, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0x10, 0x20, 0x40, 0x80, 0xF0, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x40, 0x40, 0x40, 0x80, 0x40, 0x40, 0x40, 0x40, 0x20, 0x00, 
  0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 
  0x00, 0xC0, 0x40, 0x40, 0x40, 0x20, 0x40, 0x40, 0x40, 0x40, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE8, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

struct CharDescriptor Arial_Descriptors[] =
{
  {1, 0}, {3, 12}, {5, 24}, {5, 36}, {7, 48}, {5, 60},
  {1, 72}, {2, 84}, {2, 96}, {3, 108}, {5, 120}, {2, 132},
  {2, 144}, {1, 156}, {3, 168}, {4, 180}, {3, 192}, {4, 204},
  {4, 216}, {5, 228}, {4, 240}, {4, 252}, {4, 264}, {4, 276},
  {4, 288}, {1, 300}, {2, 312}, {4, 324}, {4, 336}, {4, 348},
  {4, 360}, {8, 372}, {5, 384}, {5, 396}, {6, 408}, {5, 420},
  {5, 432}, {4, 444}, {6, 456}, {5, 468}, {1, 480}, {4, 492},
  {5, 504}, {4, 516}, {7, 528}, {6, 540}, {6, 552}, {5, 564},
  {6, 576}, {6, 588}, {5, 600}, {5, 612}, {6, 624}, {5, 636},
  {7, 648}, {6, 660}, {5, 672}, {5, 684}, {2, 696}, {3, 708},
  {2, 720}, {3, 732}, {5, 744}, {2, 756}, {4, 768}, {4, 780},
  {4, 792}, {4, 804}, {4, 816}, {3, 828}, {4, 840}, {4, 852},
  {1, 864}, {2, 876}, {4, 888}, {1, 900}, {7, 912}, {4, 924},
  {4, 936}, {4, 948}, {4, 960}, {3, 972}, {4, 984}, {3, 996},
  {4, 1008}, {5, 1020}, {7, 1032}, {5, 1044}, {5, 1056}, {4, 1068},
  {3, 1080}, {1, 1092}, {3, 1104}, {5, 1116}
};

#endif