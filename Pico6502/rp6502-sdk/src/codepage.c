/*
 * Copyright (c) 2023 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * SPDX-License-Identifier: Unlicense
 */

#include <rp6502.h>

int __fastcall__ codepage(void)
{
    return ria_call_int(RIA_OP_CODEPAGE);
}
