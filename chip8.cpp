//
// Created by Omer on 7/3/2021.
//

#include <cstring>
#include "chip8.h"

chip8::chip8() {
    this->pc = 0x200;
    this->opcode = 0;
    this->I = 0;
    this->sp = 0;
    this->delay_timer = '0';
    this->sound_timer = '0';
    memset(this->gfx, '0', GFX_SIZE);
    memset(this->stack, 0, STACK_SIZE);
    memset(this->V, '0', REGISTERS_NUMBER);
    memset(this->memory, '0', MEMORY_SIZE);
    for (int i = 0x50; i < 0x9F; i++) {  //convention for font location in memory
        this->memory[i] = this->chip8_font[i-0x50];
    }
}

chip8::~chip8() = default;

