![Arduino IDE](https://img.shields.io/badge/Arduino%20IDE-%2300979D.svg?style=for-the-badge&logo=Arduino&logoColor=white)
![ESP8266](https://img.shields.io/badge/ESP8266-8A2BE2)
![WOL](https://img.shields.io/badge/WakeOnLan-8A2BE2)
[<img alt="Fast BOT" src="https://img.shields.io/badge/FastBot-8A2BE2">](https://github.com/GyverLibs/FastBot)

<div align="center">
  <h1>ESP8266 Wake On Lan Telegram Bot</h1>
</div>

## 📄 Description

This is a sketch for the ESP8266 board. The telegram bot is hosted on the board and listens for messages, after receiving the command `/wol` magic Wake-on-Lan packet is broadcast on the local network to turn on your PC.

## ⚙️ Installation

- Install the following libraries from the Library Manager of the Arduino IDE:
  - [WakeOnLan](https://www.arduino.cc/reference/en/libraries/wakeonlan/): for sending the magic packet
  - [FastBot](https://www.arduino.cc/reference/en/libraries/fastbot/): for using the Telegram API
  - Add NodeMCU board in BoardManager with this [guide](https://www.instructables.com/Programming-ESP8266-ESP-12E-NodeMCU-Using-Arduino-/)
- Create a new Telegram bot and configure your `BOT_TOKEN` and `ALLOWED_CHATID`  
  _You can use [@Botfather](https://t.me/botfather) to create a new bot and [@userinfobot](https://t.me/userinfobot) to get your ID_
- Fill your _WiFi configuration_ and the _MAC address_ of the PC you want to power on.
- Compile and flash

## ⚙️ Config
```c++
#define WIFI_SSID "WIFI_SSID"
#define WIFI_PASS "WIFI_PASS"
#define BOT_TOKEN "BOT_TOKEN"
#define MAC_ADDR "MAC_ADDR"
#define ALLOWED_CHATID "ALLOWED_CHATID"
```
## 🔎 Usage
- Use `/start` to get a list of the available commands
- Use the `/wol` command to turn on your PC
- Use the `/ping` command to check if the bot is online
