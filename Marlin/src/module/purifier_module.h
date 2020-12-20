/*
 * Snapmaker2-Modules Firmware
 * Copyright (C) 2019-2020 Snapmaker [https://github.com/Snapmaker]
 *
 * This file is part of Snapmaker2-Modules
 * (see https://github.com/Snapmaker/Snapmaker2-Modules)
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MODULES_WHIMSYCWD_MARLIN_SRC_MODULE_PURIFIER_H_
#define MODULES_WHIMSYCWD_MARLIN_SRC_MODULE_PURIFIER_H_

#include "src/configuration.h"
#include "src/device/fan.h"
#include "src/device/breathing light.h"
#include "module_base.h"

#define ENCLOSURE_CLOSE_STATU 0
#define PURIFIER_FAN_PIN PB5
#define PURIFIER_LIGHT_PIN PB4
class PurifierModule : public ModuleBase {
 public:
  void Init();
  void HandModule(uint16_t func_id, uint8_t * data, uint8_t data_len);
  void Loop();

 private:
  Fan fan_;
  BreathingLight breathing_light_;
};

#endif //MODULES_WHIMSYCWD_MARLIN_SRC_MODULE_PURIFIER_H_
