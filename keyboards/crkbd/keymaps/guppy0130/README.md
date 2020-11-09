# guppy0130 crkbd layout

Assuming you're coming from my planck keymap, this should work with minimal changes.

Also, since I broke my LEDs, I've disabled them. You should probably re-enable them if you have functioning LEDs. Grab them from someone else.

I had to make the following tradeoffs between this map and the planck due to the key layouts:

* no arrow keys means `hjkl` arrows, but that interferes with F6 and F12.
    * you'll also notice that the `MINS` key to the end of that row is off by one compared to the planck.
* media keys had to be remapped to a different layer due to the lack of keys. That's okay, though, because now I can remap _that_ to vim-like bindings as well!

## Layout

```
L0
.-----------------------------------------------------.                    .-----------------------------------------------------.
|     ESC|       Q|       W|       E|       R|       T|                    |       Y|       U|       I|       O|       P|    BSPC|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
| SFT/TAB|       A|       S|       D|       F|       G|                    |       H|       J|       K|       L|    SCLN|    QUOT|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL|       Z|       X|       C|       V|       B|                    |       N|       M|    COMM|     DOT|    SLSH|     ENT|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|   GRAVE|  LOWER |  |  RAISE |     SPC|    RALT|
                                    `--------------------------'  `--------------------------'

LOWER
.-----------------------------------------------------.                    .-----------------------------------------------------.
|     ESC|       1|       2|       3|       4|       5|                    |       6|       7|       8|       9|       0|     DEL|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LSFT|      F1|      F2|      F3|      F4|      F5|                    |      F6|    MINS|     EQL|    LBRC|    RBRC|    BSLS|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL|      F7|      F8|      F8|     F10|     F11|                    |     F12|    HOME| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|   GRAVE|  LOWER |  |  RAISE |     SPC|    RALT|
                                    `--------------------------'  `--------------------------'

RAISE
.-----------------------------------------------------.                    .-----------------------------------------------------.
|     TAB| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LSFT| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    |    MPRV|    VOLD|    VOLU|    MNXT|    MPLY| XXXXXXX|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|   GRAVE|  LOWER |  |  RAISE |     SPC|    RALT|
                                    `--------------------------'  `--------------------------'

ADJUST = LOWER + RAISE
.-----------------------------------------------------.                    .-----------------------------------------------------.
|   SLEEP|   RESET| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LSFT| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    |    LEFT|    DOWN|      UP|    RGHT| XXXXXXX| XXXXXXX|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|   GRAVE|  LOWER |  |  RAISE |     SPC|    RALT|
                                    `--------------------------'  `--------------------------'
```
