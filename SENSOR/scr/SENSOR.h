/*Thư viện SENSOR
Tác giả: Thanh Việt
Phiên bản: 1.0.1
Ngày phát hành: 16/07/2019
Mô tả thư viện: Thư viện được sử dụng cho các loại cảm biến, phục vụ dạy học STEM.
Mô tả phiên bản: Sử dụng cho cảm biến ánh sáng, chưa đổi đơn vị.

Đây là file mô tả danh sách các hàm có trong thư viện.*/

#ifndef SENSOR_h
#define SENSOR_h
#include "Arduino.h"

class SENSOR{
  public:
    SENSOR(int pin1);
    int light();
  //int temperature()
  private:
    int _pin1;
};

#endif
