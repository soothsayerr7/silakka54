#pragma once

enum unicode_names {
    A_ACUT_L, A_CIRC_L, A_TILD_L, A_GRAV_L,
    E_ACUT_L, E_CIRC_L,
    I_ACUT_L,
    O_ACUT_L, O_CIRC_L, O_TILD_L,
    U_ACUT_L,
    C_CEDL_L,

    A_ACUT_U, A_CIRC_U, A_TILD_U, A_GRAV_U,
    E_ACUT_U, E_CIRC_U,
    I_ACUT_U,
    O_ACUT_U, O_CIRC_U, O_TILD_U,
    U_ACUT_U,
    C_CEDL_U
};

const uint32_t PROGMEM unicode_map[] = {
    [A_ACUT_L] = 0x00E1, // á
    [A_CIRC_L] = 0x00E2, // â
    [A_TILD_L] = 0x00E3, // ã
    [A_GRAV_L] = 0x00E0, // à
    [E_ACUT_L] = 0x00E9, // é
    [E_CIRC_L] = 0x00EA, // ê
    [I_ACUT_L] = 0x00ED, // í
    [O_ACUT_L] = 0x00F3, // ó
    [O_CIRC_L] = 0x00F4, // ô
    [O_TILD_L] = 0x00F5, // õ
    [U_ACUT_L] = 0x00FA, // ú
    [C_CEDL_L] = 0x00E7, // ç

    [A_ACUT_U] = 0x00C1, // Á
    [A_CIRC_U] = 0x00C2, // Â
    [A_TILD_U] = 0x00C3, // Ã
    [A_GRAV_U] = 0x00C0, // À
    [E_ACUT_U] = 0x00C9, // É
    [E_CIRC_U] = 0x00CA, // Ê
    [I_ACUT_U] = 0x00CD, // Í
    [O_ACUT_U] = 0x00D3, // Ó
    [O_CIRC_U] = 0x00D4, // Ô
    [O_TILD_U] = 0x00D5, // Õ
    [U_ACUT_U] = 0x00DA, // Ú
    [C_CEDL_U] = 0x00C7  // Ç
};

enum unicode_keycodes {
    UNI_LNX = QK_KB_0,
    UNI_WIN,
    UNI_MAC,
    UNI_NEXT,
    UNI_PREV,

    A_ACUT,
    A_CIRC,
    A_TILD,
    A_GRAV,
    E_ACUT,
    E_CIRC,
    I_ACUT,
    O_ACUT,
    O_CIRC,
    O_TILD,
    U_ACUT,
    C_CEDL
};
