#include <stdint.h>

/* ==========================================================================
 * BITWISE MEDIUM (M)
 * ========================================================================== */

/* --- Category: COUNTING & PROPERTIES -------------------------------------- */

// M-7 — MEDIUM — BITWISE
int get_highest_bit_set(uint32_t val);
/* val:     A 32-bit value
   returns: The index (0-31) of the most significant bit that is 1.
            Returns -1 if val is 0.
   Example 1: get_highest_bit_set(0x12) returns 4 (binary 10010)
   Example 2: get_highest_bit_set(0x01) returns 0
*/


// E-12 — EASY — BITWISE
uint32_t get_lowest_bit_set(uint32_t val);
/* val:     A 32-bit value
   returns: A value where only the lowest bit that was set in val remains set
   Example 1: get_lowest_bit_set(0x12) returns 0x02 (binary 10010 -> 00010)
   Example 2: isolate_lowest_set_bit(0x08) returns 0x08
*/


// 9. EASY
int parity_check(uint8_t data);
/* data: An 8-bit value
   returns: 1 if the number of bits in data set to 1 is odd, 0 if even
   Example 1: parity_check(0x01) returns 1
   Example 2: parity_check(0x03) returns 0
*/


// 15. EASY
uint8_t create_mask(int start, int end);
/* start: Starting bit position LSBit (e.g., 0)
   end: Ending bit position MSbit (e.g., 3)
   returns: A byte with bits from start to end set to 1
   Example 1: create_mask(0, 3) returns 0x0F
   Example 2: create_mask(4, 7) returns 0xF0
*/



// 16. EASY
int check_alignment_4(void *ptr);
/* ptr: A memory address
   returns: 1 if the address is a multiple of 4, 0 otherwise
   Notes:    Must use bitmaks to detect alignment
   Example 1: check_alignment_4((void*)0x1000) returns 1
   Example 2: check_alignment_4((void*)0x1001) returns 0
*/

// M-7 — MEDIUM — BITWISE
int get_highest_bit_set(uint32_t val);
/* val:     A 32-bit value
   returns: The index (0-31) of the most significant bit that is 1.
            Returns -1 if val is 0.
   Example 1: get_highest_bit_set(0x12) returns 4 (binary 10010)
   Example 2: get_highest_bit_set(0x01) returns 0
*/
