#pragma once

#ifndef _D2CONSTANTS_H
#define _D2CONSTANTS_H

/****************************************************************************
*                                                                           *
*   D2Constants.h                                                           *
*   Copyright (C) Olivier Verville                                          *
*                                                                           *
*   Licensed under the Apache License, Version 2.0 (the "License");         *
*   you may not use this file except in compliance with the License.        *
*   You may obtain a copy of the License at                                 *
*                                                                           *
*   http://www.apache.org/licenses/LICENSE-2.0                              *
*                                                                           *
*   Unless required by applicable law or agreed to in writing, software     *
*   distributed under the License is distributed on an "AS IS" BASIS,       *
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
*   See the License for the specific language governing permissions and     *
*   limitations under the License.                                          *
*                                                                           *
*---------------------------------------------------------------------------*
*                                                                           *
*   https://github.com/olivier-verville/D2Template                          *
*                                                                           *
*   This file is meant to declare various constant data. As you add more    *
*   custom code to your library, you will be using many constant values     *
*   used by the game's internal code. Unit types are a good example.        *
*   Declaring constants allows you to assign a name to these constants      *
*   which are more convenient to use in your source code.                   *
*                                                                           *
*   Another advantage is smaller impact in cases where these values would   *
*   need to change. Rather than revising every single piece of code using   *
*   this value, you only need to change your constant's value               *
*                                                                           *
*****************************************************************************/

enum D2C_UnitTypes
{
    UNIT_PLAYER,        // 0 - Players
    UNIT_MONSTER,       // 1 - Monsters
    UNIT_OBJECT,        // 2 - Objects
    UNIT_MISSILE,       // 3 - Missiles
    UNIT_ITEM,          // 4 - Items
    UNIT_TILE           // 5 - Tiles
};

/*
Dump of Records from Inventory.Txt
*/
enum InventoryTxtRows
{
    INV_REC_AMAZON = 0,
    INV_REC_SORCERESS,
    INV_REC_NECROMANCER,
    INV_REC_PALADIN,
    INV_REC_BARB,
    INV_REC_MONSTER,
    INV_REC_TRADE_I,
    INV_REC_TRADE_II,
    INV_REC_BANK,
    INV_REC_CUBE,
    INV_REC_GUILD_VAULT,
    INV_REC_TROPY_CASE,
    INV_REC_BIG_BANK,
    INV_REC_HIRELING,
    INV_REC_DRUID,
    INV_REC_ASSASSIN,
    //--Expansion
    INV_REC_EXP_AMAZON = 16,
    INV_REC_EXP_SORCERESS,
    INV_REC_EXP_NECROMANCER,
    INV_REC_EXP_PALADIN,
    INV_REC_EXP_BARB,
    INV_REC_EXP_MONSTER,
    INV_REC_EXP_TRADE_I,
    INV_REC_EXP_TRADE_II,
    INV_REC_EXP_BANK,
    INV_REC_EXP_CUBE,
    INV_REC_EXP_GUILD_VAULT,
    INV_REC_EXP_TROPY_CASE,
    INV_REC_EXP_BIG_BANK,
    INV_REC_EXP_HIRELING,
    INV_REC_EXP_DRUID,
    INV_REC_EXP_ASSASSIN
};

// end of file ---------------------------------------------------------------
#endif