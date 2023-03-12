/**
 * Marlin 3D Printer Firmware
 * 马林3D打印机固件
 * 
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 * 版权有马林固件官方所有。
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 * 基于 Sprinter and grbl 之上编写。
 * 原创作者： 卡米尔·戈贝尔和埃瑞克·范·德·萨兰
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 本程序是自由软件:您可以根据自由软件基金会发布的GNU通用公共许可证的条款重新发布它和/或修改它，
 * 或者许可证的第3版，或者(由您选择)任何更高的版本。
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 本程序的分发是希望它将是有用的，但没有任何保证;
 * 甚至没有对适销性或适合某一特定目的的默示保证。
 * 有关更多细节，请参阅GNU通用公共许可证。

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 通过这个项目.你应该已经收到了GNU通用公共许可证的副本。
 *
 */
#pragma once
/*#pragma once (比较常用) 只要在头文件的最开始加入这条指令就能够保证头文件被编译一次*/


////////////////////////////
// VENDOR VERSION EXAMPLE //
//      供应商版本示例     //
////////////////////////////

/**
 * Marlin release version identifier
 * 马林发布版本标识符
 */
//#define SHORT_BUILD_VERSION "2.1.2"

/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 * 详细版本标识符，该标识符应包含对下载二进制文件或编译源代码的位置的引用。
 */
//#define DETAILED_BUILD_VERSION SHORT_BUILD_VERSION

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 * STRING_DISTRIBUTION_DATE表示构建二进制文件的时间，
 * 这里我们将这个默认字符串定义为标记最新发布版本的日期。
 */
//#define STRING_DISTRIBUTION_DATE "2022-12-17"

/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 * 定义启动Marlin后要输出到LCD的通用打印机名称。
 */
//#define MACHINE_NAME "3D Printer"

/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 * SOURCE_CODE_URL是用户可以找到安装在设备上的Marlin源代码的位置。
 * 在大多数情况下——除非制造商有一个独特的Github分支——源代码URL应该只是主要的Marlin存储库。
 */
//#define SOURCE_CODE_URL "github.com/MarlinFirmware/Marlin"

/**
 * Default generic printer UUID.
 * 默认通用打印机UUID串码识别，唯一一台机器码。
 */
//#define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"

/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 * WEBSITE_URL是用户可以获得更多信息的位置，例如关于特定Marlin版本的文档。
 */
//#define WEBSITE_URL "marlinfw.org"

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 * 设置串行USB接口的连接信息，如果可更改，则当前仅受DUE平台的支持。
 */
//#define USB_DEVICE_VENDOR_ID           0x0000
//#define USB_DEVICE_PRODUCT_ID          0x0000
//#define USB_DEVICE_MANUFACTURE_NAME    WEBSITE_URL
