#ifndef CHIP8EMU_CHIP8_H
#define CHIP8EMU_CHIP8_H

/*
 *  Chip 8 Class
 *  Chip 8 memory map for reference
 *  0x0-0x200 is reserved for the Chip 8 interpreter and font data
 *  Programs are loaded at 0x200
 *  0xF00-0xFFF are reserved for display refresh
 *  0xEA0-0xEFF are reserved for the stack and other internal variables
 */

class Chip8 {
private:
    unsigned short opcode;
    unsigned char memory[4096];
    unsigned char V[16]; //CPU registers
    unsigned short I; //Index Register
    unsigned short pc; //Program counter. Used to keep track of current program instruction
    unsigned char gfx[64 * 32]; //Video memory. Display is Black and white.
    // The stack and stack pointer
    unsigned short stack[16];
    unsigned short sp;
    // Timers that count at 60hz
    unsigned char delay_timer;
    unsigned char sound_timer;
};


#endif //CHIP8EMU_CHIP8_H
