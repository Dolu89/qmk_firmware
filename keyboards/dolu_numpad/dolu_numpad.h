#ifndef DOLU_NUMPAD_H
#define DOLU_NUMPAD_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k00, k01, k02, k03, \
    k10, k11, k12, k13, \
    k20, k21, k22,      \
    k30, k31, k32, k33, \
    k40, k41, k42,      \
    k50,      k51, k52 \
) \
{ \
    { k00,  k01,   k02,  k03   }, \
    { k10,  k11,   k12,  k13   }, \
    { k20,  k21,   k22,  KC_NO }, \
    { k30,  k31,   k32,  k33   }, \
    { k40,  k41,   k42,  KC_NO }, \
    { k50,  KC_NO, k51,  k52   } \
}

#endif
