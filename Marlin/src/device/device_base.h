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

#ifndef MODULES_WHIMSYCWD_MARLIN_SRC_FEATURE_FEATURE_BASE_H_
#define MODULES_WHIMSYCWD_MARLIN_SRC_FEATURE_FEATURE_BASE_H_

class DeviceBase {
 public:
  DeviceBase() {

  }
  ~DeviceBase() {

  }

  virtual void Init() = 0;
  virtual void Test() = 0;
};

#endif //MODULES_WHIMSYCWD_MARLIN_SRC_FEATURE_FEATURE_BASE_H_
