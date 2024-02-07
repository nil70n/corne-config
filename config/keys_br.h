#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define BR_QUOT SQT   // '
#define BR_1    N1    // 1
#define BR_2    N2    // 2
#define BR_3    N3    // 3
#define BR_4    N4    // 4
#define BR_5    N5    // 5
#define BR_6    N6    // 6
#define BR_7    N7    // 7
#define BR_8    N8    // 8
#define BR_9    N9    // 9
#define BR_0    N0    // 0
#define BR_MINS MINUS // -
#define BR_EQL  EQUAL  // =
#define BR_Q    Q    // Q
#define BR_W    W    // W
#define BR_E    E    // E
#define BR_R    R    // R
#define BR_T    T    // T
#define BR_Y    Y    // Y
#define BR_U    U    // U
#define BR_I    I    // I
#define BR_O    O    // O
#define BR_P    P    // P
#define BR_ACUT GRAVE // ´ (dead)
#define BR_LBRC LBKT // [
#define BR_A    A    // A
#define BR_S    S    // S
#define BR_D    D    // D
#define BR_F    F    // F
#define BR_G    G    // G
#define BR_H    H    // H
#define BR_J    J    // J
#define BR_K    K    // K
#define BR_L    L    // L
#define BR_CCED SEMI // Ç
#define BR_TILD TILDE // ~ (dead)
#define BR_RBRC RBKT // ]
#define BR_BSLS BSLH // (backslash)
#define BR_Z    Z    // Z
#define BR_X    X    // X
#define BR_C    C    // C
#define BR_V    V    // V
#define BR_B    B    // B
#define BR_N    N    // N
#define BR_M    M    // M
#define BR_COMM COMMA // ,
#define BR_DOT  DOT  // .
#define BR_SCLN SEMICOLON // ;
#define BR_SLSH SLASH // /
#define BR_PDOT PERIOD // .
#define BR_PCMM COMMA // ,
#define BR_DQUO LS(BR_QUOT) // "
#define BR_EXLM LS(BR_1)    // !
#define BR_AT   LS(BR_2)    // @
#define BR_HASH LS(BR_3)    // #
#define BR_DLR  LS(BR_4)    // $
#define BR_PERC LS(BR_5)    // %
#define BR_DIAE LS(BR_6)    // ¨ (dead)
#define BR_AMPR LS(BR_7)    // &
#define BR_ASTR LS(BR_8)    // *
#define BR_LPRN LS(BR_9)    // (
#define BR_RPRN LS(BR_0)    // )
#define BR_UNDS LS(BR_MINS) // _
#define BR_PLUS LS(BR_EQL)  // +
#define BR_GRV  LS(BR_ACUT) // ` (dead)
#define BR_LCBR LS(BR_LBRC) // {
#define BR_CIRC LS(BR_TILD) // ^ (dead)
#define BR_RCBR LS(BR_RBRC) // }
#define BR_PIPE LS(BR_BSLS) // |
#define BR_LABK LS(BR_COMM) // <
#define BR_RABK LS(BR_DOT)  // >
#define BR_COLN LS(BR_SCLN) // :
#define BR_QUES LS(BR_SLSH) // ?
#define BR_SUP1 LA(RA(BR_1)) // ¹
#define BR_SUP2 LA(RA(BR_2))    // ²
#define BR_SUP3 LA(RA(BR_3))    // ³
#define BR_PND  LA(RA(BR_4))    // £
#define BR_CENT LA(RA(BR_5))    // ¢
#define BR_NOT  LA(RA(BR_6))    // ¬
#define BR_SECT LA(RA(BR_EQL))  // §
#define BR_DEG  LA(RA(BR_E))    // °
#define BR_FORD LA(RA(BR_LBRC)) // ª
#define BR_MORD LA(RA(BR_RBRC)) // º
#define BR_CRUZ LA(RA(BR_C))    // ₢
