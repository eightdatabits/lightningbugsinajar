/**
 * @file   controller.h
 * @brief  This file contains the declarations for the LED controller module.
 * @author Liam Bucci <liam.bucci@gmail.com>
 * @date   2015-08-23
 * @copyright
 * {
 *     Copyright 2015 Liam Bucci
 *
 *     Licensed under the Apache License, Version 2.0 (the "License");
 *     you may not use this file except in compliance with the License.
 *     You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 * }
 */

#include <stdint.h>
#include "tlc591x.h"

bool controller_init( tlc591x_t * const tlc );
bool controller_loop( void );