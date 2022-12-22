/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2000   Free Software Foundation, Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef MBOOT_MB_HEADER_H
#define MBOOT_MB_HEADER_H

#include <inttypes.h>

/*
 *  MultiBoot Header description
 */

struct multiboot_header {
    /* Must be MULTIBOOT_MAGIC - see below.  */
    uint32_t magic;

    /* Feature flags - see below.  */
    uint32_t flags;

    /*
     * Checksum
     *
     * The above fields plus this one must equal 0 mod 2^32.
     */
    uint32_t checksum;

    /* These are only valid if MULTIBOOT_AOUT_KLUDGE is set.  */
    uint32_t header_addr;
    uint32_t load_addr;
    uint32_t load_end_addr;
    uint32_t bss_end_addr;
    uint32_t entry_addr;

    /* These are only valid if MULTIBOOT_VIDEO_MODE is set.  */
    uint32_t mode_type;
    uint32_t width;
    uint32_t height;
    uint32_t depth;
};

/*
 * The entire multiboot_header must be contained
 * within the first MULTIBOOT_SEARCH bytes of the kernel image.
 */
#define MULTIBOOT_SEARCH		8192

/* Magic value identifying the multiboot_header.  */
#define MULTIBOOT_MAGIC			0x1BADB002

/*
 * Features flags for 'flags'.
 * If a boot loader sees a flag in MULTIBOOT_MUSTKNOW set
 * and it doesn't understand it, it must fail.
 */
#define MULTIBOOT_MUSTKNOW		0x0000FFFF

/* currently unsupported flags...  this is a kind of version number.  */
#define MULTIBOOT_UNSUPPORTED		0x0000FFF8

/* Align all boot modules on i386 page (4KB) boundaries.  */
#define MULTIBOOT_PAGE_ALIGN		0x00000001

/* Must pass memory information to OS.  */
#define MULTIBOOT_MEMORY_INFO		0x00000002

/* Must pass video information to OS.  */
#define MULTIBOOT_VIDEO_MODE		0x00000004

/* This flag indicates the use of the address fields in the header.  */
#define MULTIBOOT_AOUT_KLUDGE		0x00010000

#endif /* MBOOT_MB_HEADER_H */
