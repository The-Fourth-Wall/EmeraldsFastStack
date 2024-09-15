/**
 * A fast non-heap static size stack data structure.
 *
 * Copyright (C) 2024 oblivious
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef __EMERALDS_FAST_STACK_H_
#define __EMERALDS_FAST_STACK_H_

/**
 * @brief Push an item to the top of the stack pointer and increases
 * @param sp -> The stack pointer
 * @param item -> The item to push
 */
#define fs_push(sp, item) (*(sp)++ = (item))

/**
 * @brief Pops an item from the top of the stack pointer and decreases
 * @param sp -> The stack pointer
 * @return -> The popped item
 *
 */
#define fs_pop(sp) (*--(sp))

/**
 * @brief Peeks an item from the top of the stack pointer without decreasing
 * @param sp -> The stack pointer
 * @param distance -> The distance from the top of the stack pointer
 * @return -> The peeked item
 */
#define fs_peek(sp, distance) *((sp) - 1 - (distance))

#endif
