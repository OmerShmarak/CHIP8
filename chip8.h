//
// Created by Omer on 7/3/2021.
//

#ifndef CHIP8_CHIP8_H
#define CHIP8_CHIP8_H


#include "consts.h"

class chip8 {
public:
    chip8();

    ~chip8();


// Chip8
    unsigned char gfx[GFX_SIZE];    // Total amount of pixels: 2048
    unsigned char key[KEYS_SIZE];

private:
    unsigned short pc;                // Program counter
    unsigned short opcode;            // Current opcode
    unsigned short I;                // Index register
    unsigned short sp;                // Stack pointer

    unsigned char V[REGISTERS_NUMBER];            // V-regs (V0-VF)
    unsigned short stack[STACK_SIZE];        // Stack (16 levels)
    unsigned char memory[MEMORY_SIZE];    // Memory (size = 4k)

    unsigned char delay_timer;        // Delay timer
    unsigned char sound_timer;        // Sound timer

    unsigned char chip8_font[FONT_SIZE] = FONT;

};


#endif //CHIP8_CHIP8_H
