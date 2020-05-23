#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(ONE_UP_SOUND)
#endif

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
#define MIDI_BASIC
/* #define MIDI_ADVANCED */
