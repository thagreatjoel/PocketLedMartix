#include <Wire.h>

#define SDA_PIN 8
#define SCL_PIN 9

#define CHIP1_ADDR 0x74
#define CHIP2_ADDR 0x77

#define COMMAND_REGISTER 0xFD
#define FRAME_REGISTER   0x00
#define SHUTDOWN_REGISTER 0x0A

void writeRegister(uint8_t addr, uint8_t reg, uint8_t data) {
  Wire.beginTransmission(addr);
  Wire.write(reg);
  Wire.write(data);
  Wire.endTransmission();
}

void selectBank(uint8_t addr, uint8_t bank) {
  writeRegister(addr, COMMAND_REGISTER, bank);
}

void initChip(uint8_t addr) {
  selectBank(addr, 0x0B); 
  writeRegister(addr, SHUTDOWN_REGISTER, 0x01); 
}

void setLED(uint8_t addr, uint8_t led, uint8_t brightness) {
  selectBank(addr, 0x00); 

 
  writeRegister(addr, led, brightness);
}

void clearChip(uint8_t addr) {
  selectBank(addr, 0x00);
  for (int i = 0; i < 144; i++) {
    writeRegister(addr, i, 0x00);
  }
}

void setup() {
  Wire.begin(SDA_PIN, SCL_PIN);
  delay(100);

  initChip(CHIP1_ADDR);
  initChip(CHIP2_ADDR);

  clearChip(CHIP1_ADDR);
  clearChip(CHIP2_ADDR);
}

void loop() {


  for (int i = 0; i < 20; i++) {
    setLED(CHIP1_ADDR, i, 255);
    delay(50);
  }

  for (int i = 0; i < 20; i++) {
    setLED(CHIP2_ADDR, i, 255);
    delay(50);
  }

  delay(500);

  clearChip(CHIP1_ADDR);
  clearChip(CHIP2_ADDR);

  delay(500);
}
