/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 *
 */

/**
 * Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_CN_H
#define LANGUAGE_CN_H

#define DISPLAY_CHARSET_ISO10646_CN

#define CN_WELCOME_MSG                         "www.cxsw3d.com    "
#define CN_MSG_SD_INSERTED                     "\xa8\xa9\xaa\xab"
#define CN_MSG_SD_REMOVED                      "\xa8\xa9\xac\xad"
#define CN_MSG_MAIN                            "\xae\xaf\xb0"
#define CN_MSG_AUTOSTART                       "\xb1\xb2\xb3\xb4"
#define CN_MSG_DISABLE_STEPPERS                "\xb5\xb6\xb7\xb8\xb9\xba"
#define CN_MSG_AUTO_HOME                       "\xbb\xbc\xbd"
#define CN_MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define CN_MSG_LEVEL_BED_WAITING               "Click to Begin"
#define CN_MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define CN_MSG_SET_HOME_OFFSETS                "\xbe\xbf\xbb\xbc\xbd\xc0\xc1"
#define CN_MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define CN_MSG_SET_ORIGIN                      "\xbe\xbf\xbc\xbd"
#define CN_MSG_PREHEAT_1                       "\xc3\xc4 PLA"
#define CN_MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define CN_MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " \xc5\xc6"
#define CN_MSG_PREHEAT_1_END				   MSG_PREHEAT_1 " End"
#define CN_MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " \xc4\xc7"
#define CN_MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " \xbe\xbf"
#define CN_MSG_PREHEAT_2                       "\xc3\xc4 ABS"
#define CN_MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define CN_MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " \xc5\xc6"
#define CN_MSG_PREHEAT_2_END				   MSG_PREHEAT_2 " End"
#define CN_MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " \xc4\xc7"
#define CN_MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " \xbe\xbf"
#define CN_MSG_COOLDOWN                        "\xc8\xc9"
#define CN_MSG_SWITCH_PS_ON                    "\xb9\xcb\xca\xb3"
#define CN_MSG_SWITCH_PS_OFF                   "\xb9\xcb\xb5\xb6"
#define CN_MSG_EXTRUDE                         "\xcc\xad"
#define CN_MSG_RETRACT                         "\xbb\xcd"
#define CN_MSG_MOVE_AXIS                       "\xc1\xb2\xce"
#define CN_MSG_BED_LEVELING                    "\xcf\xe0\xc4\xc7"
#define CN_MSG_LEVEL_BED                       "\xcf\xe0\xc4\xc7"
#define CN_MSG_MOVE_X                          "\xc1\xb2 X"
#define CN_MSG_MOVE_Y                          "\xc1\xb2 Y"
#define CN_MSG_MOVE_Z                          "\xc1\xb2 Z"
#define CN_MSG_MOVE_E                          "\xcc\xad\xba"
#define CN_MSG_MOVE_01MM                       "\xc1\xb2 0.1mm"
#define CN_MSG_MOVE_1MM                        "\xc1\xb2 1mm"
#define CN_MSG_MOVE_10MM                       "\xc1\xb2 10mm"
#define CN_MSG_SPEED                           "\xd1\xd2"
#define CN_MSG_NOZZLE                          "\xd3\xd4"
#define CN_MSG_BED                             "\xc4\xc7"
#define CN_MSG_FAN_SPEED                       "\xd5\xd6\xd1\xd2"
#define CN_MSG_FLOW                            "\xcc\xad\xd1\xd2"
#define CN_MSG_CONTROL                         "\xd8\xd9"
#define CN_MSG_MIN                             LCD_STR_THERMOMETER " \xda\xdb"
#define CN_MSG_MAX                             LCD_STR_THERMOMETER " \xda\xdc"
#define CN_MSG_FACTOR                          LCD_STR_THERMOMETER " \xdd\xde"
#define CN_MSG_AUTOTEMP                        "\xb1\xb2\xd8\xc9"
#define CN_MSG_ON                              "\xb3 "  // intentional space to shift wide symbol to the left
#define CN_MSG_OFF                             "\xb5 "  // intentional space to shift wide symbol to the left
#define CN_MSG_PID_P                           "PID-P"
#define CN_MSG_PID_I                           "PID-I"
#define CN_MSG_PID_D                           "PID-D"
#define CN_MSG_PID_C                           "PID-C"
#define CN_MSG_ACC                             "Accel"
#define CN_MSG_JERK                            "Jerk"
#define CN_MSG_VX_JERK                         "Vx-jerk"
#define CN_MSG_VY_JERK                         "Vy-jerk"
#define CN_MSG_VZ_JERK                         "Vz-jerk"
#define CN_MSG_VE_JERK                         "Ve-jerk"
#define CN_MSG_VELOCITY                        "Velocity"
#define CN_MSG_VMAX                            "Vmax "
#define CN_MSG_VMIN                            "Vmin"
#define CN_MSG_VTRAV_MIN                       "VTrav min"
#define CN_MSG_ACCELERATION                    "Acceleration"
#define CN_MSG_AMAX                            "Amax "
#define CN_MSG_A_RETRACT                       "A-retract"
#define CN_MSG_A_TRAVEL                        "A-travel"
#define CN_MSG_STEPS_PER_MM                    "Steps/mm"
#define CN_MSG_XSTEPS                          "Xsteps/mm"
#define CN_MSG_YSTEPS                          "Ysteps/mm"
#define CN_MSG_ZSTEPS                          "Zsteps/mm"
#define CN_MSG_ESTEPS                          "Esteps/mm"
#define CN_MSG_E1STEPS                         "E1steps/mm"
#define CN_MSG_E2STEPS                         "E2steps/mm"
#define CN_MSG_E3STEPS                         "E3steps/mm"
#define CN_MSG_E4STEPS                         "E4steps/mm"
#define CN_MSG_E5STEPS                         "E5steps/mm"
#define CN_MSG_TEMPERATURE                     "\xc9\xd2"
#define CN_MSG_MOTION                          "\xdf\xb2"
#define CN_MSG_FILAMENT                        "Filament"
#define CN_MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define CN_MSG_FILAMENT_DIAM                   "Fil. Dia."
#define CN_MSG_ADVANCE_K                       "Advance K"
#define CN_MSG_CONTRAST                        "LCD contrast"
#define CN_MSG_STORE_EEPROM                    "Store memory"
#define CN_MSG_LOAD_EEPROM                     "Load memory"
#define CN_MSG_RESTORE_FAILSAFE                "Restore failsafe"
#define CN_MSG_INIT_EEPROM                     "Initialize EEPROM"
#define CN_MSG_REFRESH                         "Refresh"
#define CN_MSG_WATCH                           "\xec\xed\xee\xef"
#define CN_MSG_PREPARE                         "\xa4\xa5"
#define CN_MSG_TUNE                            "\xcf\xf0"
#define CN_MSG_PAUSE_PRINT                     "\xf1\xf2\xca\xf3"
#define CN_MSG_RESUME_PRINT                    "\xf4\xf5\xca\xf3"
#define CN_MSG_STOP_PRINT                      "\xf2\xf6\xca\xf3"
#define CN_MSG_CARD_MENU                       "\xaf\xb0"
#define CN_MSG_NO_CARD                         "\xf9\xa8"
#define CN_MSG_DWELL                           "Sleep..."
#define CN_MSG_USERWAIT                        "Wait for user..."
#define CN_MSG_RESUMING                        "Resuming print"
#define CN_MSG_PRINT_ABORTED                   "Print aborted"
#define CN_MSG_NO_MOVE                         "No move."
#define CN_MSG_KILLED                          "KILLED. "
#define CN_MSG_STOPPED                         "STOPPED. "
#define CN_MSG_CONTROL_RETRACT                 "Retract mm"
#define CN_MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define CN_MSG_CONTROL_RETRACTF                "Retract  V"
#define CN_MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define CN_MSG_CONTROL_RETRACT_RECOVER         "UnRet mm"
#define CN_MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet mm"
#define CN_MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define CN_MSG_AUTORETRACT                     "AutoRetr."
#define CN_MSG_FILAMENTCHANGE                  "Change filament"
#define CN_MSG_INIT_SDCARD                     "Init. SD card"
#define CN_MSG_CNG_SDCARD                      "Change SD card"
#define CN_MSG_ZPROBE_OUT                      "Z probe out. bed"
#define CN_MSG_BLTOUCH						   "BLTouch"
#define CN_MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define CN_MSG_FIRST                           "first"
#define CN_MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define CN_MSG_BABYSTEP_X                      "Babystep X"
#define CN_MSG_BABYSTEP_Y                      "Babystep Y"
#define CN_MSG_BABYSTEP_Z                      "Babystep Z"
#define CN_MSG_ENDSTOP_ABORT                   "Endstop abort"
#define CN_MSG_HEATING_FAILED_LCD              "Heating failed"
#define CN_MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define CN_MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define CN_MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define CN_MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define CN_MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define CN_MSG_DELTA_CALIBRATE                 "Delta Calibration"
#define CN_MSG_DELTA_CALIBRATE_X               "Calibrate X"
#define CN_MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#define CN_MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#define CN_MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"
#define CN_MSG_SELECT_LANGUAGE					"Language"
#define CN_MSG_ENGLISH_LANGUAGE					"English"
#define CN_MSG_CHINESE_LANGUAGE					"Chinese"
#define CN_MSG_RESUME_PRINT_OK					CN_MSG_RESUME_PRINT "?"
#define CN_MSG_RESUME_PRINT_Y					"Yes"
#define CN_MSG_RESUME_PRINT_N					"No"
#endif // LANGUAGE_CN_H
