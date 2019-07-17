/*Thư viện SENSOR
Tác giả: Thanh Việt
Phiên bản: 1.0.1
Ngày phát hành: 16/07/2019
Mô tả thư viện: Thư viện được sử dụng cho các loại cảm biến, phục vụ dạy học STEM.
Mô tả phiên bản: Sử dụng cho cảm biến ánh sáng, chưa đổi đơn vị.

Đây là file mô tả chi tiết các hàm trong thư viện SENSOR.*/

#include "Arduino.h"
#include "SENSOR.h"

SENSOR::SENSOR(int pin1){
_pin1=pin1;
}
int SENSOR::light(){
  int lightIntensity = int (analogRead(_pin1));
  return lightIntensity;
}
//int SENSOR::temperature(){}
