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
 * Czech
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 * Translated by Petr Zahradnik, Computer Laboratory
 * Blog and video blog Zahradnik se bavi
 * http://www.zahradniksebavi.cz
 *
 */
#ifndef LANGUAGE_CZ_UTF_H
#define LANGUAGE_CZ_UTF_H

#define MAPPER_C3C4C5_CZ
#define DISPLAY_CHARSET_ISO10646_CZ
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" pÅ™ipraven.")
#define MSG_BACK                            _UxGT("ZpÄ›t")
#define MSG_SD_INSERTED                     _UxGT("Karta vloÅ¾ena")
#define MSG_SD_REMOVED                      _UxGT("Karta vyjmuta")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstopy") // max 8 znaku
#define MSG_MAIN                            _UxGT("HlavnÃ­ nabÃ­dka")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Uvolnit motory")
#define MSG_DEBUG_MENU                      _UxGT("NabÃ­dka ladÄ›nÃ­")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test uk. prÅ¯bÄ›hu")
#define MSG_AUTO_HOME                       _UxGT("DomovskÃ¡ pozice")
#define MSG_AUTO_HOME_X                     _UxGT("DomÅ¯ osa X")
#define MSG_AUTO_HOME_Y                     _UxGT("DomÅ¯ osa Y")
#define MSG_AUTO_HOME_Z                     _UxGT("DomÅ¯ osa Z")
#define MSG_TMC_Z_CALIBRATION               _UxGT("Kalibrovat Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("MÄ›Å™enÃ­ podloÅ¾ky")
#define MSG_LEVEL_BED_WAITING               _UxGT("KliknutÃ­m spusÅ¥te")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("DalÅ¡Ã­ bod")
#define MSG_LEVEL_BED_DONE                  _UxGT("MÄ›Å™enÃ­ hotovo!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("VÃ½Å¡ka srovnÃ¡vÃ¡nÃ­")
#define MSG_SET_HOME_OFFSETS                _UxGT("Nastavit ofsety")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Ofsety nastaveny")
#define MSG_SET_ORIGIN                      _UxGT("Nastavit poÄ�Ã¡tek")
#define MSG_PREHEAT_1                       _UxGT("ZahÅ™Ã¡t PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" vÅ¡e")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" hotend")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" podloÅ¾")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" nast")
#define MSG_PREHEAT_2                       _UxGT("ZahÅ™Ã¡t ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" vÅ¡e")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" hotend")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" podloÅ¾")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" nast")
#define MSG_COOLDOWN                        _UxGT("Zchladit")
#define MSG_SWITCH_PS_ON                    _UxGT("Zapnout napÃ¡jenÃ­")
#define MSG_SWITCH_PS_OFF                   _UxGT("Vypnout napÃ¡jenÃ­")
#define MSG_EXTRUDE                         _UxGT("VytlaÄ�it (extr.)")
#define MSG_RETRACT                         _UxGT("ZatlaÄ�it (retr.)")
#define MSG_MOVE_AXIS                       _UxGT("Posunout osy")
#define MSG_BED_LEVELING                    _UxGT("Vyrovnat podloÅ¾ku")
#define MSG_LEVEL_BED                       _UxGT("Vyrovnat podloÅ¾ku")
#define MSG_LEVEL_CORNERS                   _UxGT("Vyrovnat rohy")
#define MSG_NEXT_CORNER                     _UxGT("DalÅ¡Ã­ roh")
#define MSG_EDITING_STOPPED                 _UxGT("Konec Ãºprav sÃ­tÄ›")

#define MSG_UBL_DOING_G29                   _UxGT("ProvÃ¡dÃ­m G29")
#define MSG_UBL_UNHOMED                     _UxGT("PÅ™ejeÄ�te domÅ¯")
#define MSG_UBL_TOOLS                       _UxGT("UBL nÃ¡stroje")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_UBL_MANUAL_MESH                 _UxGT("ManuÃ¡lnÃ­ sÃ­Å¥ bodÅ¯")
#define MSG_UBL_BC_INSERT                   _UxGT("VloÅ¾te kartu, zmÄ›Å™te")
#define MSG_UBL_BC_INSERT2                  _UxGT("ZmÄ›Å™te")
#define MSG_UBL_BC_REMOVE                   _UxGT("OdstraÅˆte a zmÄ›Å™te")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("PÅ™esun na dalÅ¡Ã­")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Aktivovat UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Deaktivovat UBL")
#define MSG_UBL_SET_BED_TEMP                _UxGT("Teplota podloÅ¾ky")
#define MSG_UBL_CUSTOM_BED_TEMP             MSG_UBL_SET_BED_TEMP
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("Teplota hotendu")
#define MSG_UBL_CUSTOM_HOTEND_TEMP          MSG_UBL_SET_HOTEND_TEMP
#define MSG_UBL_MESH_EDIT                   _UxGT("Ãšprava sÃ­tÄ› bodÅ¯")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Upravit vlastnÃ­ sÃ­Å¥")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Doladit sÃ­Å¥ bodÅ¯")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Konec Ãºprav sÃ­tÄ›")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("VlastnÃ­ sÃ­Å¥")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("VytvoÅ™it sÃ­Å¥")
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("SÃ­Å¥ bodu PLA")
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("SÃ­Å¥ bodu ABS")
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("StudenÃ¡ sÃ­Å¥ bodÅ¯")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Upravit vÃ½Å¡ku sÃ­tÄ›")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("VÃ½Å¡ka")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Zkontrolovat sÃ­Å¥")
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("Kontrola sÃ­tÄ› PLA")
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("Kontrola sÃ­tÄ› ABS")
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Kontrola vlast. sÃ­tÄ›")
#define MSG_UBL_CONTINUE_MESH               _UxGT("PokraÄ�ovat v sÃ­Å¥i")
#define MSG_UBL_MESH_LEVELING               _UxGT("SÃ­Å¥ovÃ© rovnÃ¡nÃ­")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("3-bodove rovnÃ¡nÃ­")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Mrizkove rovnÃ¡nÃ­")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Srovnat podloÅ¾ku")
#define MSG_UBL_SIDE_POINTS                 _UxGT("PostrannÃ­ body")
#define MSG_UBL_MAP_TYPE                    _UxGT("Typ sÃ­tÄ› bodu")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Exportovat sÃ­Å¥")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Exportovat do PC")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Exportovat do CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("ZÃ¡loha do PC")
#define MSG_UBL_INFO_UBL                    _UxGT("Info o UBL do PC")
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("Upravit sÃ­Å¥ bodÅ¯")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Hustota mÅ™Ã­Å¾ky")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("RuÄ�nÃ­ hustota")
#define MSG_UBL_SMART_FILLIN                _UxGT("ChytrÃ¡ hustota")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Zaplnit mÅ™Ã­Å¾ku")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("ZruÅ¡it vÅ¡echno")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("ZruÅ¡it poslednÃ­")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Upravit vÅ¡echny")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Upravit poslednÃ­")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("UloÅ¾iÅ¡tÄ› sÃ­tÃ­")
#define MSG_UBL_STORAGE_SLOT                _UxGT("PamÄ›Å¥ovÃ½ slot")
#define MSG_UBL_LOAD_MESH                   _UxGT("NaÄ�Ã­st sÃ­Å¥ bodÅ¯")
#define MSG_UBL_SAVE_MESH                   _UxGT("UloÅ¾it sÃ­Å¥ bodÅ¯")
#define MSG_MESH_LOADED                     _UxGT("SÃ­Å¥ %i naÄ�tena")
#define MSG_MESH_SAVED                      _UxGT("SÃ­Å¥ %i uloÅ¾ena")
#define MSG_NO_STORAGE                      _UxGT("Nedostatek mÃ­sta")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: UloÅ¾it UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: Obnovit UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Konec Z-Offsetu")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL PostupnÄ›")

#define MSG_LED_CONTROL                     _UxGT("LED NastavenÃ­")
#define MSG_LEDS                            _UxGT("SvÄ›tla")
#define MSG_LED_PRESETS                     _UxGT("SvÄ›tla PÅ™edvolby")
#define MSG_SET_LEDS_RED                    _UxGT("ÄŒervenÃ¡")
#define MSG_SET_LEDS_ORANGE                 _UxGT("OranÅ¾ovÃ¡")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Å½lutÃ¡")
#define MSG_SET_LEDS_GREEN                  _UxGT("ZelenÃ¡")
#define MSG_SET_LEDS_BLUE                   _UxGT("ModrÃ¡")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("FialovÃ¡")
#define MSG_SET_LEDS_WHITE                  _UxGT("BÃ­lÃ¡")
#define MSG_SET_LEDS_DEFAULT                _UxGT("VÃ½chozÃ­")
#define MSG_CUSTOM_LEDS                     _UxGT("VlastnÃ­ svÄ›tla")
#define MSG_INTENSITY_R                     _UxGT("ÄŒervenÃ¡ intenzita")
#define MSG_INTENSITY_G                     _UxGT("ZelenÃ¡ intezita")
#define MSG_INTENSITY_B                     _UxGT("ModrÃ¡ intenzita")
#define MSG_INTENSITY_W                     _UxGT("BÃ­lÃ¡ intenzita")
#define MSG_LED_BRIGHTNESS                  _UxGT("Jas")

#define MSG_USER_MENU                       _UxGT("VlastnÃ­ pÅ™Ã­kazy")
#define MSG_MOVING                          _UxGT("Posouvani...")
#define MSG_FREE_XY                         _UxGT("Uvolnit XY")
#define MSG_MOVE_X                          _UxGT("Posunout X")
#define MSG_MOVE_Y                          _UxGT("Posunout Y")
#define MSG_MOVE_Z                          _UxGT("Posunout Z")
#define MSG_MOVE_E                          _UxGT("ExtrudÃ©r")
#define MSG_MOVE_01MM                       _UxGT("Posunout o 0,1mm")
#define MSG_MOVE_1MM                        _UxGT("Posunout o 1mm")
#define MSG_MOVE_10MM                       _UxGT("Posunout o 10mm")
#define MSG_SPEED                           _UxGT("Rychlost")
#define MSG_BED_Z                           _UxGT("VÃ½Å¡ka podl.")
#define MSG_NOZZLE                          _UxGT("Tryska")
#define MSG_BED                             _UxGT("PodloÅ¾ka")
#define MSG_FAN_SPEED                       _UxGT("Rychlost vent.")
#define MSG_EXTRA_FAN_SPEED                 _UxGT("Rychlost ex. vent.")
#define MSG_FLOW                            _UxGT("PrÅ¯tok")
#define MSG_CONTROL                         _UxGT("OvlÃ¡danÃ­")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fakt")
#define MSG_AUTOTEMP                        _UxGT("Autoteplota")
#define MSG_ON                              _UxGT("Zap")
#define MSG_OFF                             _UxGT("Vyp")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Vybrat")
#define MSG_ACC                             _UxGT("Zrychl")
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-jerk")
  #define MSG_VB_JERK                       _UxGT("Vb-jerk")
  #define MSG_VC_JERK                       _UxGT("Vc-jerk")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-jerk")
  #define MSG_VB_JERK                       _UxGT("Vy-jerk")
  #define MSG_VC_JERK                       _UxGT("Vz-jerk")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-jerk")
#define MSG_VELOCITY                        _UxGT("Rychlost")
#define MSG_VMAX                            _UxGT("Vmax ")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")
#define MSG_ACCELERATION                    _UxGT("Akcelerace")
#define MSG_AMAX                            _UxGT("Amax ")
#define MSG_A_RETRACT                       _UxGT("A-retrakt")
#define MSG_A_TRAVEL                        _UxGT("A-pÅ™ejezd")
#define MSG_STEPS_PER_MM                    _UxGT("KrokÅ¯/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("AkrokÅ¯/mm")
  #define MSG_BSTEPS                        _UxGT("BkrokÅ¯/mm")
  #define MSG_CSTEPS                        _UxGT("CkrokÅ¯/mm")
#else
  #define MSG_ASTEPS                        _UxGT("XkrokÅ¯/mm")
  #define MSG_BSTEPS                        _UxGT("YkrokÅ¯/mm")
  #define MSG_CSTEPS                        _UxGT("ZkrokÅ¯/mm")
#endif
#define MSG_ESTEPS                          _UxGT("EkrokÅ¯/mm")
#define MSG_E1STEPS                         _UxGT("E1krokÅ¯/mm")
#define MSG_E2STEPS                         _UxGT("E2krokÅ¯/mm")
#define MSG_E3STEPS                         _UxGT("E3krokÅ¯/mm")
#define MSG_E4STEPS                         _UxGT("E4krokÅ¯/mm")
#define MSG_E5STEPS                         _UxGT("E5krokÅ¯/mm")
#define MSG_TEMPERATURE                     _UxGT("Teplota")
#define MSG_MOTION                          _UxGT("Pohyb")
#define MSG_FILAMENT                        _UxGT("Filament")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E na mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. Prum.")
#define MSG_FILAMENT_UNLOAD                 _UxGT("Vysunout mm")
#define MSG_FILAMENT_LOAD                   _UxGT("ZavÃ©st mm")
#define MSG_ADVANCE_K                       _UxGT("K pro posun")
#define MSG_CONTRAST                        _UxGT("Kontrast LCD")
#define MSG_STORE_EEPROM                    _UxGT("UloÅ¾it nastavenÃ­")
#define MSG_LOAD_EEPROM                     _UxGT("NaÄ�Ã­st nastavenÃ­")
#define MSG_RESTORE_FAILSAFE                _UxGT("Obnovit vÃ½chozÃ­")
#define MSG_INIT_EEPROM                     _UxGT("Inic. EEPROM")
#define MSG_REFRESH                         _UxGT("Obnovit")
#define MSG_WATCH                           _UxGT("Info obrazovka")
#define MSG_PREPARE                         _UxGT("PÅ™iprava tisku")
#define MSG_TUNE                            _UxGT("DoladÄ›nÃ­ tisku")
#define MSG_PAUSE_PRINT                     _UxGT("Pozastavit tisk")
#define MSG_RESUME_PRINT                    _UxGT("Obnovit tisk")
#define MSG_STOP_PRINT                      _UxGT("Zastavit tisk")
#define MSG_CARD_MENU                       _UxGT("Tisknout z SD")
#define MSG_NO_CARD                         _UxGT("Å½Ã¡dnÃ¡ SD karta")
#define MSG_DWELL                           _UxGT("UspÃ¡no...")
#define MSG_USERWAIT                        _UxGT("ÄŒekÃ¡nÃ­ na uÅ¾iv...")
#define MSG_PRINT_PAUSED                    _UxGT("Tisk pozastaven")
#define MSG_PRINT_ABORTED                   _UxGT("Tisk zruÅ¡en")
#define MSG_NO_MOVE                         _UxGT("Å½Ã¡dnÃ½ pohyb.")
#define MSG_KILLED                          _UxGT("PÅ˜ERUSENO. ")
#define MSG_STOPPED                         _UxGT("ZASTAVENO. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Retrakt mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("VÃ½mÄ›na Re.mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retraktovat  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Zvednuti Z mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V")
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")
#define MSG_FILAMENTCHANGE                  _UxGT("VymÄ›nit filament")
#define MSG_FILAMENTLOAD                    _UxGT("ZavÃ©st filament")
#define MSG_FILAMENTUNLOAD                  _UxGT("Vysunout filament")
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("Vysunout vÅ¡e")

#define MSG_INIT_SDCARD                     _UxGT("NaÄ�Ã­st SD kartu")
#define MSG_CNG_SDCARD                      _UxGT("VymÄ›nit SD kartu")
#define MSG_ZPROBE_OUT                      _UxGT("Sonda Z mimo podl")
#define MSG_SKEW_FACTOR                     _UxGT("Faktor zkosenÃ­")
#define MSG_BLTOUCH                         _UxGT("BLTouch")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch Reset")
#define MSG_BLTOUCH_DEPLOY                  _UxGT("BLTouch Vysunout")
#define MSG_BLTOUCH_STOW                    _UxGT("BLTouch Zasunout")
#define MSG_HOME                            _UxGT("DomÅ¯")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("prvnÃ­")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z ofset")
#define MSG_BABYSTEP_X                      _UxGT("Babystep X")
#define MSG_BABYSTEP_Y                      _UxGT("Babystep Y")
#define MSG_BABYSTEP_Z                      _UxGT("Babystep Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop abort")
#define MSG_HEATING_FAILED_LCD              _UxGT("Chyba zahÅ™Ã­vÃ¡nÃ­")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("REDUND. TEPLOTA")
#define MSG_THERMAL_RUNAWAY                 _UxGT("TEPLOTNÃ� SKOK")
#define MSG_ERR_MAXTEMP                     _UxGT("VYSOKÃ� TEPLOTA")
#define MSG_ERR_MINTEMP                     _UxGT("NÃ�ZKA TEPLOTA")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("VYS. TEPL. PODL.")
#define MSG_ERR_MINTEMP_BED                 _UxGT("NÃ�Z. TEPL. PODL.")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("TISK. ZASTAVENA")
#define MSG_PLEASE_RESET                    _UxGT("ProveÄ�te reset")
#define MSG_SHORT_DAY                       _UxGT("d")
#define MSG_SHORT_HOUR                      _UxGT("h")
#define MSG_SHORT_MINUTE                    _UxGT("m")
#define MSG_HEATING                         _UxGT("ZahÅ™Ã­vÃ¡nÃ­...")
#define MSG_BED_HEATING                     _UxGT("ZahÅ™Ã­vÃ¡nÃ­ podl...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Kalibrace")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Kalibrovat X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Kalibrovat Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Kalibrovat Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Kalibrovat StÅ™ed")
#define MSG_DELTA_SETTINGS                  _UxGT("Delta nastavenÃ­")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Autokalibrace")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Nast.vÃ½Å¡ku delty")
#define MSG_DELTA_DIAG_ROD                  _UxGT("Diag rameno")
#define MSG_DELTA_HEIGHT                    _UxGT("VÃ½Å¡ka")
#define MSG_DELTA_RADIUS                    _UxGT("PolomÄ›r")
#define MSG_INFO_MENU                       _UxGT("O tiskÃ¡rnÄ›")
#define MSG_INFO_PRINTER_MENU               _UxGT("Info o tiskÃ¡rnÄ›")
#define MSG_3POINT_LEVELING                 _UxGT("3-bodovÃ© rovnÃ¡nÃ­")
#define MSG_LINEAR_LEVELING                 _UxGT("LineÃ¡rni rovnÃ¡nÃ­")
#define MSG_BILINEAR_LEVELING               _UxGT("BilineÃ¡rnÃ­ rovnÃ¡nÃ­")
#define MSG_UBL_LEVELING                    _UxGT("Unified Bed Leveling")
#define MSG_MESH_LEVELING                   _UxGT("MÅ™Ã­Å¾kovÃ© rovnÃ¡nÃ­")
#define MSG_INFO_STATS_MENU                 _UxGT("Statistika")
#define MSG_INFO_BOARD_MENU                 _UxGT("Info o desce")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistory")
#define MSG_INFO_EXTRUDERS                  _UxGT("ExtrudÃ©ry")
#define MSG_INFO_BAUDRATE                   _UxGT("Rychlost")
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")
#define MSG_CASE_LIGHT                      _UxGT("OsvÄ›tlenÃ­")
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("Jas svÄ›tla")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("PoÄ�et tiskÅ¯")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("DokonÄ�eno")
  #define MSG_INFO_PRINT_TIME               _UxGT("CelkovÃ½ Ä�as")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("NejdelÅ¡Ã­ tisk")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Celkem vytlaÄ�eno")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Tisky")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Hotovo")
  #define MSG_INFO_PRINT_TIME               _UxGT("ÄŒas")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("NejdelÅ¡Ã­")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("VytlaÄ�eno")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Teplota min")
#define MSG_INFO_MAX_TEMP                   _UxGT("Teplota max")
#define MSG_INFO_PSU                        _UxGT("Nap. zdroj")
#define MSG_DRIVE_STRENGTH                  _UxGT("BuzenÃ­ motorÅ¯")
#define MSG_DAC_PERCENT                     _UxGT("Motor %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("UloÅ¾it do EEPROM")
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("TISK POZASTAVEN")
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("ZAVEDENÃ� FILAMENTU")
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("VYSUNUTÃ� FILAMENTU")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("MOÅ½NOSTI OBNOVENÃ�:")
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("VytlaÄ�it vÃ­c")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Obnovit tisk")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Tryska: ")
#define MSG_ERR_HOMING_FAILED               _UxGT("ParkovÃ¡nÃ­ selhalo")
#define MSG_ERR_PROBING_FAILED              _UxGT("Kalibrace selhala")
#define MSG_M600_TOO_COLD                   _UxGT("M600: Moc studenÃ½")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ÄŒekejte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("na zahÃ¡jenÃ­")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("vÃ½mÄ›ny filamentu")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("ÄŒekejte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("na vysunuti")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("VloÅ¾te filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("a stisknÄ›te")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("tlaÄ�Ã­tko...")
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("KliknÄ›te pro")
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("nahÅ™Ã¡tÃ­ trysky")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("ÄŒekejte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("na nahÅ™Ã¡tÃ­ tr.")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ÄŒekejte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("na zavedenÃ­")
  #define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("filamentu")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("VyÄ�kejte na")
  #define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("vytlaÄ�enÃ­")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("ÄŒekejte prosÃ­m")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("na pokraÄ�ovÃ¡nÃ­")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("tisku")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ÄŒekejte...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("VysouvÃ¡nÃ­...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("VloÅ¾te, kliknÄ›te")
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("NahÅ™Ã­vÃ¡nÃ­...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ZavÃ¡dÄ›nÃ­...")
  #define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("VytlaÄ�ovÃ¡nÃ­...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("PokraÄ�ovÃ¡nÃ­...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_CZ_UTF_H

