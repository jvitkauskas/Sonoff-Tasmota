/*

  Copyright (C) 2018  Theo Arends, Julius Vitkauskas

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_LT_LT_H_
#define _LANGUAGE_LT_LT_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v6.2.1.11
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)
// https://www.science.co.il/language/Locale-codes.php
#define LANGUAGE_LCID 1063
// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "lt"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "SekPirAntTreKetPenŠeš"
#define D_MONTH3LIST "SauVasKovBalGegBirLieRgpRgsSpaLapGrd"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR ","

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Oro kokybė"
#define D_AP "PT"                    // Access Point
#define D_AS "kaip"
#define D_AUTO "AUTO"
#define D_BLINK "Mirgsėti"
#define D_BLINKOFF "Ne mirgsėti"
#define D_BOOT_COUNT "Paleidimų kiekis"
#define D_BRIGHTLIGHT "Šviesumas"
#define D_BSSID "BSSId"
#define D_BUTTON "Mygtukas"
#define D_BY "by"                    // Written by me
#define D_BYTES "Baitų"
#define D_CELSIUS "Celsijų"
#define D_CHANNEL "Kanalas"
#define D_CO2 "Anglies dioksidas"
#define D_CODE "kodas"                // Button code
#define D_COLDLIGHT "Šalta"
#define D_COMMAND "Komanda"
#define D_CONNECTED "Prijungta"
#define D_COUNT "Skaičius"
#define D_COUNTER "Skaitiklis"
#define D_CURRENT "Srovė"          // As in Voltage and Current
#define D_DATA "Duomenys"
#define D_DARKLIGHT "Tamsi"
#define D_DEBUG "Derinimas"
#define D_DISABLED "Išjungta"
#define D_DISTANCE "Atstumas"
#define D_DNS_SERVER "DNS serveris"
#define D_DONE "Atlikta"
#define D_DST_TIME "Vasaros laikas"
#define D_ECO2 "eCO₂"
#define D_EMULATION "Emuliacija"
#define D_ENABLED "Įjungta"
#define D_ERASE "Ištrinti"
#define D_ERROR "Klaida"
#define D_FAHRENHEIT "Fahrenheitai"
#define D_FAILED "Nepavyko"
#define D_FALLBACK "Grįžtamasis ryšys"
#define D_FALLBACK_TOPIC "Grįžtamojo ryšio tema"
#define D_FALSE "Netiesa"
#define D_FILE "Failas"
#define D_FREE_MEMORY "Laisva atmintis"
#define D_FREQUENCY "Dažnis"
#define D_GAS "Dujos"
#define D_GATEWAY "Tinklo vartai"
#define D_GROUP "Grupė"
#define D_HOST "Serveris"
#define D_HOSTNAME "Serverio pavadinimas"
#define D_HUMIDITY "Drėgmė"
#define D_ILLUMINANCE "Apšvietimas"
#define D_IMMEDIATE "be uždelsimo"      // Button immediate
#define D_INDEX "Indeksas"
#define D_INFO "Informacija"
#define D_INFRARED "Infraraudonieji spinduliai"
#define D_INITIALIZED "Inicializuota"
#define D_IP_ADDRESS "IP adresas"
#define D_LIGHT "Šviesa"
#define D_LWT "LWT"
#define D_MODULE "Modulis"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "daugelio paspaudimų"
#define D_NOISE "Triukšmas"
#define D_NONE "Joks"
#define D_OFF "Išj."
#define D_OFFLINE "Neaktyvus"
#define D_OK "Gerai"
#define D_ON "Įj."
#define D_ONLINE "Aktyvus"
#define D_PASSWORD "Slaptažodis"
#define D_PORT "Prievadas"
#define D_POWER_FACTOR "Galios koeficientas"
#define D_POWERUSAGE "Galia"
#define D_POWERUSAGE_ACTIVE "Aktyvioji galia"
#define D_POWERUSAGE_APPARENT "Tariamoji galia"
#define D_POWERUSAGE_REACTIVE "Reaktyvinė galia"
#define D_PRESSURE "Spaudimas"
#define D_PRESSUREATSEALEVEL "Spaudimas jūros lygyje"
#define D_PROGRAM_FLASH_SIZE "Atminties dydis programai"
#define D_PROGRAM_SIZE "Programos dydis"
#define D_PROJECT "Projektas"
#define D_RECEIVED "Gauta"
#define D_RESTART "Perkrauti"
#define D_RESTARTING "Perkraunama"
#define D_RESTART_REASON "Perkrovimo priežastis"
#define D_RESTORE "atstatymas"
#define D_RETAINED "nepaskelbta"
#define D_RULE "Taisyklė"
#define D_SAVE "Išsaugoti"
#define D_SENSOR "Sensorius"
#define D_SSID "SSId"
#define D_START "Pradėti"
#define D_STD_TIME "Įprastas laikas"
#define D_STOP "Sustabdyti"
#define D_SUBNET_MASK "Potinklio kaukė"
#define D_SUBSCRIBE_TO "Prenumeruoti"
#define D_SUCCESSFUL "Sėkminga"
#define D_SUNRISE "Saulės patekėjimas"
#define D_SUNSET "Saulėlydis"
#define D_TEMPERATURE "Temperatūra"
#define D_TO "iki"
#define D_TOGGLE "Perjungti"
#define D_TOPIC "Tema"
#define D_TRANSMIT "Perduoti"
#define D_TRUE "Tiesa"
#define D_TVOC "TVOC"
#define D_UPGRADE "atnaujinimas"
#define D_UPLOAD "Įkelti"
#define D_UPTIME "Veikimo laikas"
#define D_USER "Naudotojas"
#define D_UTC_TIME "UTC"
#define D_UV_INDEX "UV indeksas"
#define D_UV_INDEX_1 "Žemas"
#define D_UV_INDEX_2 "Vidutinis"
#define D_UV_INDEX_3 "Aukštas"
#define D_UV_INDEX_4 "Pavojus"
#define D_UV_INDEX_5 "Nudegimas 1/2 lygis"
#define D_UV_INDEX_6 "Nudegimas 3 lygis"
#define D_UV_INDEX_7 "Per didelė reikšmė"         // Out of Range
#define D_UV_LEVEL "UV lygis"
#define D_UV_POWER "UV galia"
#define D_VERSION "Versija"
#define D_VOLTAGE "Įtampa"
#define D_WEIGHT "Svoris"
#define D_WARMLIGHT "Šilta"
#define D_WEB_SERVER "Web serveris"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "ĮSPĖJIMAS ši versija nepalaiko nustatymų išsaugojimo"
#define D_LEVEL_10 "lygis 1-0"
#define D_LEVEL_01 "lygis 0-1"
#define D_SERIAL_LOGGING_DISABLED "Serijinis registravimas išjungtas"
#define D_SYSLOG_LOGGING_REENABLED "Syslog registravimas iš naujo įjungtas"

#define D_SET_BAUDRATE_TO "Nustatyti duomenų perdavimo spartą"
#define D_RECEIVED_TOPIC "Gauta tema"
#define D_DATA_SIZE "Duomenų dydis"
#define D_ANALOG_INPUT "Analoginė įvestis"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Blokuotas ciklas"
#define D_WPS_FAILED_WITH_STATUS "WPS konfigūracija NEPAVYKO su būsena"
#define D_ACTIVE_FOR_3_MINUTES "aktyvus 3 minutėms"
#define D_FAILED_TO_START "nepavyko pradėti"
#define D_PATCH_ISSUE_2186 "Klaidos 2186 pataisymas"
#define D_CONNECTING_TO_AP "Jungiamasi prie PT"
#define D_IN_MODE "režime"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "Nepavyko prisijungti, nes nebuvo gautas IP adresas"
#define D_CONNECT_FAILED_AP_NOT_REACHED "Nepavyko prisijungti, nes PT nepasiekiamas"
#define D_CONNECT_FAILED_WRONG_PASSWORD "Nepavyko prisijungti prie PT: neteisingas slaptažodis"
#define D_CONNECT_FAILED_AP_TIMEOUT "Baigėsi laikas bandant prisijungti prie PT"
#define D_ATTEMPTING_CONNECTION "Bandoma prisijungti..."
#define D_CHECKING_CONNECTION "Tikrinamas sujungimas..."
#define D_QUERY_DONE "Užklausa atlikta. MQTT paslaugos rastos"
#define D_MQTT_SERVICE_FOUND "MQTT paslauga rasta"
#define D_FOUND_AT "rasta"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog serveris nerastas"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Išsaugota atmintyje"
#define D_LOADED_FROM_FLASH_AT "Pakrauta iš atminties"
#define D_USE_DEFAULTS "Naudoti numatytas reikšmes"
#define D_ERASED_SECTOR "Ištrintas sektorius"

// xdrv_02_webserver.ino
#define D_NOSCRIPT "To use Tasmota, please enable JavaScript"
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "MINIMAL firmware - please upgrade"
#define D_WEBSERVER_ACTIVE_ON "Web server active on"
#define D_WITH_IP_ADDRESS "with IP address"
#define D_WEBSERVER_STOPPED "Web server stopped"
#define D_FILE_NOT_FOUND "File Not Found"
#define D_REDIRECTED "Redirected to captive portal"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Wifimanager set AccessPoint and keep Station"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifimanager set AccessPoint"
#define D_TRYING_TO_CONNECT "Trying to connect device to network"

#define D_RESTART_IN "Restart in"
#define D_SECONDS "seconds"
#define D_DEVICE_WILL_RESTART "Device will restart in a few seconds"
#define D_BUTTON_TOGGLE "Toggle"
#define D_CONFIGURATION "Configuration"
#define D_INFORMATION "Information"
#define D_FIRMWARE_UPGRADE "Firmware Upgrade"
#define D_CONSOLE "Console"
#define D_CONFIRM_RESTART "Confirm Restart"

#define D_CONFIGURE_MODULE "Configure Module"
#define D_CONFIGURE_WIFI "Configure WiFi"
#define D_CONFIGURE_MQTT "Configure MQTT"
#define D_CONFIGURE_DOMOTICZ "Configure Domoticz"
#define D_CONFIGURE_LOGGING "Configure Logging"
#define D_CONFIGURE_OTHER "Configure Other"
#define D_CONFIRM_RESET_CONFIGURATION "Confirm Reset Configuration"
#define D_RESET_CONFIGURATION "Reset Configuration"
#define D_BACKUP_CONFIGURATION "Backup Configuration"
#define D_RESTORE_CONFIGURATION "Restore Configuration"
#define D_MAIN_MENU "Main Menu"

#define D_MODULE_PARAMETERS "Module parameters"
#define D_MODULE_TYPE "Module type"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Serial In"
#define D_SERIAL_OUT "Serial Out"

#define D_WIFI_PARAMETERS "Wifi parameters"
#define D_SCAN_FOR_WIFI_NETWORKS "Scan for wifi networks"
#define D_SCAN_DONE "Scan done"
#define D_NO_NETWORKS_FOUND "No networks found"
#define D_REFRESH_TO_SCAN_AGAIN "Refresh to scan again"
#define D_DUPLICATE_ACCESSPOINT "Duplicate AccessPoint"
#define D_SKIPPING_LOW_QUALITY "Skipping due to low quality"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 SSId"
#define D_AP1_PASSWORD "AP1 Password"
#define D_AP2_SSID "AP2 SSId"
#define D_AP2_PASSWORD "AP2 Password"

#define D_MQTT_PARAMETERS "MQTT parameters"
#define D_CLIENT "Client"
#define D_FULL_TOPIC "Full Topic"

#define D_LOGGING_PARAMETERS "Logging parameters"
#define D_SERIAL_LOG_LEVEL "Serial log level"
#define D_WEB_LOG_LEVEL "Web log level"
#define D_SYS_LOG_LEVEL "Syslog level"
#define D_MORE_DEBUG "More debug"
#define D_SYSLOG_HOST "Syslog host"
#define D_SYSLOG_PORT "Syslog port"
#define D_TELEMETRY_PERIOD "Telemetry period"

#define D_OTHER_PARAMETERS "Other parameters"
#define D_WEB_ADMIN_PASSWORD "Web Admin Password"
#define D_MQTT_ENABLE "MQTT enable"
#define D_FRIENDLY_NAME "Friendly Name"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "single device"
#define D_MULTI_DEVICE "multi device"

#define D_SAVE_CONFIGURATION "Save configuration"
#define D_CONFIGURATION_SAVED "Configuration saved"
#define D_CONFIGURATION_RESET "Configuration reset"

#define D_PROGRAM_VERSION "Program Version"
#define D_BUILD_DATE_AND_TIME "Build Date & Time"
#define D_CORE_AND_SDK_VERSION "Core/SDK Version"
#define D_FLASH_WRITE_COUNT "Flash write Count"
#define D_MAC_ADDRESS "MAC Address"
#define D_MQTT_HOST "MQTT Host"
#define D_MQTT_PORT "MQTT Port"
#define D_MQTT_CLIENT "MQTT Client"
#define D_MQTT_USER "MQTT User"
#define D_MQTT_TOPIC "MQTT Topic"
#define D_MQTT_GROUP_TOPIC "MQTT Group Topic"
#define D_MQTT_FULL_TOPIC "MQTT Full Topic"
#define D_MDNS_DISCOVERY "mDNS Discovery"
#define D_MDNS_ADVERTISE "mDNS Advertise"
#define D_ESP_CHIP_ID "ESP Chip Id"
#define D_FLASH_CHIP_ID "Flash Chip Id"
#define D_FLASH_CHIP_SIZE "Flash Size"
#define D_FREE_PROGRAM_SPACE "Free Program Space"

#define D_UPGRADE_BY_WEBSERVER "Upgrade by web server"
#define D_OTA_URL "OTA Url"
#define D_START_UPGRADE "Start upgrade"
#define D_UPGRADE_BY_FILE_UPLOAD "Upgrade by file upload"
#define D_UPLOAD_STARTED "Upload started"
#define D_UPGRADE_STARTED "Upgrade started"
#define D_UPLOAD_DONE "Upload done"
#define D_UPLOAD_ERR_1 "No file selected"
#define D_UPLOAD_ERR_2 "Not enough space"
#define D_UPLOAD_ERR_3 "Magic byte is not 0xE9"
#define D_UPLOAD_ERR_4 "Program flash size is larger than real flash size"
#define D_UPLOAD_ERR_5 "Upload buffer miscompare"
#define D_UPLOAD_ERR_6 "Upload failed. Enable logging 3"
#define D_UPLOAD_ERR_7 "Upload aborted"
#define D_UPLOAD_ERR_8 "File invalid"
#define D_UPLOAD_ERR_9 "File too large"
#define D_UPLOAD_ERR_10 "Failed to init RF chip"
#define D_UPLOAD_ERR_11 "Failed to erase RF chip"
#define D_UPLOAD_ERR_12 "Failed to write to RF chip"
#define D_UPLOAD_ERR_13 "Failed to decode RF firmware"
#define D_UPLOAD_ERROR_CODE "Upload error code"

#define D_ENTER_COMMAND "Enter command"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Enable weblog 2 if response expected"
#define D_NEED_USER_AND_PASSWORD "Need user=<username>&password=<password>"

// xdrv_01_mqtt.ino
#define D_FINGERPRINT "Patikrinti TLS pirštų antspaudą..."
#define D_TLS_CONNECT_FAILED_TO "TLS nepavyko prisijungti prie"
#define D_RETRY_IN "Pabandyti iš naujo po"
#define D_VERIFIED "Patikrinta naudojant pirštų antspaudą"
#define D_INSECURE "Nesaugus ryšys dėl neteisingo pirštų antspaudo"
#define D_CONNECT_FAILED_TO "Connect failed to"

// xplg_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast išjungta"
#define D_MULTICAST_REJOINED "Multicast prisijugta"
#define D_MULTICAST_JOIN_FAILED "Multicast prisijungti nepavyko"
#define D_FAILED_TO_SEND_RESPONSE "Nepavyko išsiųsti atsakymo"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo paprastas įvykis"
#define D_WEMO_EVENT_SERVICE "WeMo įvykių paslauga"
#define D_WEMO_META_SERVICE "WeMo meta paslauga"
#define D_WEMO_SETUP "WeMo nustatymas"
#define D_RESPONSE_SENT "Atsakymas išsiųstas"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue nustatymas"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API nėra įgyvendinta"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST argumentai"
#define D_3_RESPONSE_PACKETS_SENT "3 atsakymo paketai išsiųsti"

// xdrv_07_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Domoticz parametrai"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Key idx"
#define D_DOMOTICZ_SWITCH_IDX "Switch idx"
#define D_DOMOTICZ_SENSOR_IDX "Sensor idx"
  #define D_DOMOTICZ_TEMP "Temp"
  #define D_DOMOTICZ_TEMP_HUM "Temp,Hum"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Temp,Hum,Baro"
  #define D_DOMOTICZ_POWER_ENERGY "Power,Energy"
  #define D_DOMOTICZ_ILLUMINANCE "Illuminance"
  #define D_DOMOTICZ_COUNT "Count/PM1"
  #define D_DOMOTICZ_VOLTAGE "Voltage/PM2.5"
  #define D_DOMOTICZ_CURRENT "Current/PM10"
  #define D_DOMOTICZ_AIRQUALITY "AirQuality"
#define D_DOMOTICZ_UPDATE_TIMER "Update timer"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Konfigūruoti laikmatį"
#define D_TIMER_PARAMETERS "Laikmačio parametrai"
#define D_TIMER_ENABLE "Įjungti laikmačius"
#define D_TIMER_ARM "Užstatyti"
#define D_TIMER_TIME "Laikas"
#define D_TIMER_DAYS "Dienos"
#define D_TIMER_REPEAT "Kartoti"
#define D_TIMER_OUTPUT "Išvestis"
#define D_TIMER_ACTION "Veiksmas"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "Konfigūruoti KNX"
#define D_KNX_PARAMETERS "KNX parametrai"
#define D_KNX_GENERAL_CONFIG "Bendra"
#define D_KNX_PHYSICAL_ADDRESS "Fizinis adresas"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "( turi būti unikalus KNX tinkle )"
#define D_KNX_ENABLE "Įjungti KNX"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Duomenys siuntimui į grupės adresus"
#define D_ADD "Pridėti"
#define D_DELETE "Ištrinti"
#define D_REPLY "Atsakyti"
#define D_KNX_GROUP_ADDRESS_TO_READ "Grupės adresai iš kurių gauti duomenis"
#define D_LOG_KNX "KNX: "
#define D_RECEIVED_FROM "Gauta iš"
#define D_KNX_COMMAND_WRITE "Rašyti"
#define D_KNX_COMMAND_READ "Skaityti"
#define D_KNX_COMMAND_OTHER "Kita"
#define D_SENT_TO "nusiųsta į"
#define D_KNX_WARNING "Grupės adresas ( 0 / 0 / 0 ) yra rezervuotas ir negali būti naudojamas."
#define D_KNX_ENHANCEMENT "Bendravimo patobulinimas"
#define D_KNX_TX_SLOT "KNX siunt."
#define D_KNX_RX_SLOT "KNX gav."

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "Energija šiandien"
#define D_ENERGY_YESTERDAY "Energija vakar"
#define D_ENERGY_TOTAL "Energija iš viso"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Sensorius užimtas"
#define D_SENSOR_CRC_ERROR "Sensoriaus kontrolinės maišos klaida"
#define D_SENSORS_FOUND "Sensoriai rasti"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Baigėsi laikas laukiant"
#define D_START_SIGNAL_LOW "pradžios signalas žemas"
#define D_START_SIGNAL_HIGH "pradžios signalas aukštas"
#define D_PULSE "pulsas"
#define D_CHECKSUM_FAILURE "Kontrolinės maišos klaida"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Sensorius nepatvirtino komandos"
#define D_SHT1X_FOUND "SHT1X rastas"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Dalelės"

// xsns_32_mpu6050.ino
#define D_AX_AXIS "Akselerometro X ašis"
#define D_AY_AXIS "Akselerometro Y ašis"
#define D_AZ_AXIS "Akselerometro Z ašis"
#define D_GX_AXIS "Giroskopo X ašis"
#define D_GY_AXIS "Giroskopo Y ašis"
#define D_GZ_AXIS "Giroskopo Z ašis"

// xsns_34_hx711.ino
#define D_HX_CAL_REMOVE "Pašalinkite svorį"
#define D_HX_CAL_REFERENCE "Uždėkite kalibracijos svorį"
#define D_HX_CAL_DONE "Sukalibruota"
#define D_HX_CAL_FAIL "Kalibracija nepavyko"
#define D_RESET_HX711 "Nustatyti svarstykles iš naujo"
#define D_CONFIGURE_HX711 "Konfigūruoti svarstykles"
#define D_HX711_PARAMETERS "Svarstyklių parametrai"
#define D_ITEM_WEIGHT "Daikto svoris"
#define D_REFERENCE_WEIGHT "Kalibracijos svoris"
#define D_CALIBRATE "Kalibruoti"
#define D_CALIBRATION "Kalibracija"

//xsns_35_tx20.ino
#define D_TX20_WIND_DIRECTION "Vėjo kryptis"
#define D_TX20_WIND_SPEED "Vėjo greitis"
#define D_TX20_WIND_SPEED_AVG "Vidutinis vėjo greitis"
#define D_TX20_WIND_SPEED_MAX "Maksimalus vėjo greitis"
#define D_TX20_NORTH "Š"
#define D_TX20_EAST "R"
#define D_TX20_SOUTH "P"
#define D_TX20_WEST "V"

// sonoff_template.h
#define D_SENSOR_NONE     "Joks"
#define D_SENSOR_DHT11    "DHT11"
#define D_SENSOR_AM2301   "AM2301"
#define D_SENSOR_SI7021   "SI7021"
#define D_SENSOR_DS18X20  "DS18x20"
#define D_SENSOR_I2C_SCL  "I2C SCL"
#define D_SENSOR_I2C_SDA  "I2C SDA"
#define D_SENSOR_WS2812   "WS2812"
#define D_SENSOR_DFR562   "MP3 grotuvas"
#define D_SENSOR_IRSEND   "IR siuntimas"
#define D_SENSOR_SWITCH   "Jungiklis"   // Suffix "1"
#define D_SENSOR_BUTTON   "Mygtukas"   // Suffix "1"
#define D_SENSOR_RELAY    "Rėlė"    // Suffix "1i"
#define D_SENSOR_LED      "Šviesos diodas"      // Suffix "1i"
#define D_SENSOR_PWM      "PWM"      // Suffix "1"
#define D_SENSOR_COUNTER  "Skaitliukas"  // Suffix "1"
#define D_SENSOR_IRRECV   "IR gavimas"
#define D_SENSOR_MHZ_RX   "MHZ gav."
#define D_SENSOR_MHZ_TX   "MHZ siunt."
#define D_SENSOR_PZEM004_RX  "PZEM004 gav."
#define D_SENSOR_PZEM016_RX  "PZEM016 gav."
#define D_SENSOR_PZEM017_RX  "PZEM017 gav."
#define D_SENSOR_PZEM0XX_TX  "PZEM0XX siunt."
#define D_SENSOR_SAIR_RX  "SAir gav."
#define D_SENSOR_SAIR_TX  "SAir siunt."
#define D_SENSOR_SPI_CS   "SPI CS"
#define D_SENSOR_SPI_DC   "SPI DC"
#define D_SENSOR_BACKLIGHT "Pašvietimas"
#define D_SENSOR_PMS5003  "PMS5003"
#define D_SENSOR_SDS0X1_RX "SDS0X1 gav."
#define D_SENSOR_SDS0X1_TX "SDS0X1 siunt."
#define D_SENSOR_SBR_RX   "SerBr gav."
#define D_SENSOR_SBR_TX   "SerBr siunt."
#define D_SENSOR_SR04_TRIG "SR04 trigeris"
#define D_SENSOR_SR04_ECHO "SR04 aidas"
#define D_SENSOR_SDM120_TX "SDM120 siunt."
#define D_SENSOR_SDM120_RX "SDM120 gav."
#define D_SENSOR_SDM630_TX "SDM630 siunt."
#define D_SENSOR_SDM630_RX "SDM630 gav."
#define D_SENSOR_TM1638_CLK "TM16 CLK"
#define D_SENSOR_TM1638_DIO "TM16 DIO"
#define D_SENSOR_TM1638_STB "TM16 STB"
#define D_SENSOR_HX711_SCK "HX711 SCK"
#define D_SENSOR_HX711_DAT "HX711 DAT"
#define D_SENSOR_TX20_TX "TX20"

// Units
#define D_UNIT_AMPERE "A"
#define D_UNIT_CENTIMETER "cm"
#define D_UNIT_HERTZ "Hz"
#define D_UNIT_HOUR "Val"
#define D_UNIT_INCREMENTS "ink"
#define D_UNIT_KILOGRAM "kg"
#define D_UNIT_KILOMETER_PER_HOUR "km/h"  // or "km/h"
#define D_UNIT_KILOOHM "kOhm"
#define D_UNIT_KILOWATTHOUR "kWh"
#define D_UNIT_LUX "lx"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "ug/m3"
#define D_UNIT_MICROMETER "um"
#define D_UNIT_MICROSECOND "us"
#define D_UNIT_MILLIAMPERE "mA"
#define D_UNIT_MILLISECOND "ms"
#define D_UNIT_MINUTE "Min"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "hPa"
#define D_UNIT_SECOND "sek"
#define D_UNIT_SECTORS "sektoriai"
#define D_UNIT_VA "VA"
#define D_UNIT_VAR "VAr"
#define D_UNIT_VOLT "V"
#define D_UNIT_WATT "W"
#define D_UNIT_WATTHOUR "Wh"
#define D_UNIT_WATT_METER_QUADRAT "W/m²"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

#endif  // _LANGUAGE_LT_LT_H_
