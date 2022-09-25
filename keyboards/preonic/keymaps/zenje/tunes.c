#include "musical_notes.h"

#define SONG_MARIO \
  S__NOTE(_C5 ), \
  S__NOTE(_G4 ), \
  S__NOTE(_C5 ), \
  S__NOTE(_E5 ), \
  S__NOTE(_G5 ), \
  S__NOTE(_C6 ), \
  S__NOTE(_G5 ), \
  S__NOTE(_GS4), \
  S__NOTE(_C5 ), \
  S__NOTE(_DS5), \
  S__NOTE(_GS5), \
  S__NOTE(_DS5), \
  S__NOTE(_GS5), \
  S__NOTE(_C6 ), \
  S__NOTE(_DS6), \
  S__NOTE(_GS6), \
  S__NOTE(_DS6), \
  S__NOTE(_AS4), \
  S__NOTE(_D5 ), \
  S__NOTE(_F5 ), \
  S__NOTE(_AS5), \
  S__NOTE(_D6 ), \
  S__NOTE(_F6 ), \
  S__NOTE(_AS6), \
  S__NOTE(_F6 )

#define SONG_RICK      \
  Q__NOTE(_F4),      \
  Q__NOTE(_G4),      \
  Q__NOTE(_BF4),     \
  Q__NOTE(_G4),      \
  HD_NOTE(_D5),      \
  HD_NOTE(_D5),      \
  W__NOTE(_C5),      \
  S__NOTE(_REST),    \
  Q__NOTE(_F4),      \
  Q__NOTE(_G4),      \
  Q__NOTE(_BF4),     \
  Q__NOTE(_G4),      \
  HD_NOTE(_C5),      \
  HD_NOTE(_C5),      \
  W__NOTE(_BF4),     \
  S__NOTE(_REST),    \
  Q__NOTE(_F4),      \
  Q__NOTE(_G4),      \
  Q__NOTE(_BF4),     \
  Q__NOTE(_G4),      \
  W__NOTE(_BF4),     \
  H__NOTE(_C5),      \
  H__NOTE(_A4),      \
  H__NOTE(_A4),      \
  H__NOTE(_G4),      \
  H__NOTE(_F4),      \
  H__NOTE(_F4),      \
  W__NOTE(_C5),      \
  W__NOTE(_BF4),

float tone_mario[][2]     = SONG(SONG_MARIO);
float tone_rick[][2]      = SONG(SONG_RICK);
float tone_goodbye[][2]   = SONG(GOODBYE_SOUND);