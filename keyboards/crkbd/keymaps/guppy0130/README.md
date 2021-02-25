# guppy0130 crkbd layout

Assuming you're coming from my Planck keymap, this should work with minimal changes.

Also, since I broke my LEDs, I've disabled them. You should probably re-enable them if you have functioning LEDs.

Media keys had to be remapped to a different layer due to the lack of keys. That's okay, though, because now I can remap _that_ to Vim-like bindings as well!

## Compile

```console
$ docker run --rm -v ${pwd}:/qmk_firmware -w /qmk_firmware -it qmkfm/base_container make crkbd/rev1/common:guppy0130 SKIP_GIT=true

Making crkbd/rev1/common with keymap guppy0130
...
```


## Luna

[Has Luna](https://www.reddit.com/r/olkb/comments/lmtgxc/introducing_luna_the_qmk_keyboard_pet/)

## `GAME` Mode

`ADJUST` to access `GAME_ON`.

To exit back to the default layer, `GAME_OF`. Note that I haven't yet figured out how to get the Corne to change the OLED display to say `GAME`, which would be helpful.

## Layout

```text
L0
.-----------------------------------------------------.                    .-----------------------------------------------------.
|     ESC|       Q|       W|       E|       R|       T|                    |       Y|       U|       I|       O|       P|    BSPC|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|LSFT/TAB|       A|       S|       D|       F|       G|                    |       H|       J|       K|       L|    SCLN|    QUOT|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL|       Z|       X|       C|       V|       B|                    |       N|       M|    COMM|     DOT|    SLSH|     ENT|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|   GRAVE|   LOWER|  |   RAISE|     SPC|    RALT|
                                    `--------------------------'  `--------------------------'

LOWER
.-----------------------------------------------------.                    .-----------------------------------------------------.
|     ESC|       1|       2|       3|       4|       5|                    |       6|       7|       8|       9|       0|     DEL|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LSFT|      F1|      F2|      F3|      F4|      F5|                    |      F6|    MINS|     EQL|    LBRC|    RBRC|    BSLS|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL|      F7|      F8|      F8|     F10|     F11|                    |     F12|    HOME| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|   GRAVE|   LOWER|  |   RAISE|     SPC|    RALT|
                                    `--------------------------'  `--------------------------'

RAISE
.-----------------------------------------------------.                    .-----------------------------------------------------.
|     TAB| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LSFT| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    |    MPRV|    VOLD|    VOLU|    MNXT|    MPLY| XXXXXXX|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|   GRAVE|   LOWER|  |   RAISE|     SPC|    RALT|
                                    `--------------------------'  `--------------------------'

ADJUST = LOWER + RAISE
.-----------------------------------------------------.                    .-----------------------------------------------------.
|   SLEEP|   RESET| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| GAME_ON|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LSFT| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    |    LEFT|    DOWN|      UP|    RGHT| XXXXXXX| XXXXXXX|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                    | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |    LGUI|    LALT|   LOWER|  |   RAISE| XXXXXXX| XXXXXXX|
                                    `--------------------------'  `--------------------------'

GAMES = GAME_ON
.-----------------------------------------------------.                    .-----------------------------------------------------.
|     ESC|       Q|       W|       E|       R|       T|                    |       Y|       U|       I|       O|       P|    BSPC|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|     TAB|       A|       S|       D|       F|       G|                    |       H|       J|       K|       L|    SCLN| GAME_OF|
|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
|    LCTL|       Z|       X|       C|       V|       B|                    |       N|       M|    COMM|     DOT|    SLSH|     ENT|
'--------+--------+--------+--------+--------+--------+--------.  .--------+--------+--------+--------+--------+--------+--------'
                                    |   GRAVE|     SPC|     SPC|  |     SPC|     SPC|    RALT|
                                    `--------------------------'  `--------------------------'
```
