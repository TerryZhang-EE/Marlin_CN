/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */

/**
 * stepper/indirection.cpp
 *
 * Stepper motor driver indirection to allow some stepper functions to
 * be done via SPI/I2c instead of direct pin manipulation.
 * 步进电机驱动器间接，允许一些步进功能通过SPI/I2c完成，而不是直接引脚操作。
 * Copyright (c) 2015 Dominik Wenger
 */

#include "../../inc/MarlinConfig.h" //导入马林配置文件
#include "indirection.h" //导入间接或直接库文件（）

/**
 * @description: 恢复步进驱动器
 * @param {*}
 * @return {*}
 */
void restore_stepper_drivers()
{
    TERN_(HAS_TRINAMIC_CONFIG, restore_trinamic_drivers());
}

/**
 * @description: 复位步进电机驱动
 * @param {*}
 * @return {*}
 */
void reset_stepper_drivers()
{
    TERN_(HAS_TMC26X, tmc26x_init_to_defaults());
    TERN_(HAS_TRINAMIC_CONFIG, reset_trinamic_drivers());
}

#if ENABLED(SOFTWARE_DRIVER_ENABLE) //软件使能驱动
// Flags to optimize XYZ Enabled state
xyz_bool_t axis_sw_enabled; // = { false, false, false }
#endif
