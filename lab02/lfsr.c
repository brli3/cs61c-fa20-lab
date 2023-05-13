#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t a = (*reg >> 0) & 1;
    uint16_t b = (*reg >> 2) & 1;
    uint16_t c = (*reg >> 3) & 1;
    uint16_t d = (*reg >> 5) & 1;
    uint16_t x = a ^ b ^ c ^ d;
    // shift 1 bit to the right
    *reg = *reg >> 1;
    // set first bit 
    *reg &= ~(1 << 15);
    *reg |= (x << 15);
}

