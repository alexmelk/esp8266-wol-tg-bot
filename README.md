# ESP866 Wake On Lan Telegram Bot




## ⚙️ Installation

- Install the following libraries from the Library Manager of the Arduino IDE:
  - [WakeOnLan](https://www.arduino.cc/reference/en/libraries/wakeonlan/): for sending the magic packet
  - [FastBot](https://www.arduino.cc/reference/en/libraries/fastbot/): for using the Telegram API
  - Add NodeMCU board in BoardManager with this [guide](https://www.instructables.com/Programming-ESP8266-ESP-12E-NodeMCU-Using-Arduino-/)
- Create a new Telegram bot and configure your `BOT_TOKEN` and `ALLOWED_CHATID`  
  _You can use [@Botfather](https://t.me/botfather) to create a new bot and [@userinfobot](https://t.me/userinfobot) to get your ID_
- Fill your _WiFi configuration_ and the _MAC address_ of the PC you want to power on.
- Compile and flash
