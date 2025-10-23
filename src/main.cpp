#include <Arduino.h>

const int LDR_PIN = 34; 
int raw_value = 0;

void setup() {
    Serial.begin(115200); 
    analogSetAttenuation(ADC_11db); 
    analogReadResolution(12);
}

void loop() {
    raw_value = analogRead(LDR_PIN);

    // THAY THẾ bằng định dạng Tag để Teletype dễ nhận diện
    Serial.print(">LDR_Value:"); // Thêm tag để định danh đường đồ thị
    Serial.println(raw_value); 

    delay(50); 
}