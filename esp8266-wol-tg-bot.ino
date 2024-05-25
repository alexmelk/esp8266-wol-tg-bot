#define WIFI_SSID "WIFI_SSID"
#define WIFI_PASS "WIFI_PASS"
#define BOT_TOKEN "BOT_TOKEN"
#define MAC_ADDR "MAC_ADDR"
#define ALLOWED_CHATID "ALLOWED_CHATID"

#include <FastBot.h>
#include "WiFiUDP.h"
#include "WakeOnLan.h"

FastBot bot(BOT_TOKEN);
WiFiUDP UDP;
WakeOnLan WOL(UDP);

void setup()
{
  connectWiFi();
  WOL.calculateBroadcastAddress(WiFi.localIP(), WiFi.subnetMask());

  bot.attach(newMsg);
}

// new message handler
void newMsg(FB_msg &msg)
{
  if (msg.chatID != ALLOWED_CHATID)
    return;

  if (msg.text == "/start")
  {
    bot.sendMessage("📋Commands: /start /ping /wol", msg.chatID);
  }

  if (msg.text == "/ping")
  {
    bot.sendMessage("ping!", msg.chatID);
  }

  if (msg.text == "/wol")
  {
    bot.sendMessage("✅ Send WakeOnLAN!", msg.chatID);
    sendWOL();
  }
}

void loop()
{
  bot.tick();
}

void connectWiFi()
{
  delay(2000);
  Serial.begin(115200);
  Serial.println();

  WiFi.begin(WIFI_SSID, WIFI_PASS);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
    if (millis() > 15000)
      ESP.restart();
  }

  Serial.println("✅ Connected");
}

void sendWOL()
{
  Serial.println("✅ Send WakeOnLAN!");
  WOL.sendMagicPacket(MAC_ADDR); // send WOL on default port (9)
  delay(300);
}