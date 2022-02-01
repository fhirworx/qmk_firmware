/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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
#pragma once

#include "quantum.h"
// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments.
// The second converts the arguments into a two-dimensional array.
// In the PCBDOWN case we need to swap the middle two keys: k35 and k36.
#define LAYOUT_kertdyl( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b }, \
	{ k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b }, \
	{ k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b } \
}
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used
#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)
