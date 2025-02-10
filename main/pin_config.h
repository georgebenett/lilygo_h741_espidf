/*
 * @Description: None
 * @Author: LILYGO_L
 * @Date: 2023-06-05 13:01:59
 * @LastEditTime: 2025-01-23 15:07:46
 */
#pragma once

//这里选择你使用的屏幕
#define DO0143FAT01 //DO0143FMST02//1.43 inches (SH8601 FT3168)
// #define H0175Y003AM //1.75 inches (CO5300 CST9217)
// #define DO0143FMST10 //1.43 inches (CO5300 FT3168)

#define LCD_SDIO0 GPIO_NUM_11
#define LCD_SDIO1 GPIO_NUM_13
#define LCD_SDIO2 GPIO_NUM_14
#define LCD_SDIO3 GPIO_NUM_15
#define LCD_SCLK GPIO_NUM_12
#define LCD_CS GPIO_NUM_10
#define LCD_RST GPIO_NUM_17

#define LCD_WIDTH 466
#define LCD_HEIGHT 466

#define LCD_EN GPIO_NUM_16

// IIC
#define IIC_SDA GPIO_NUM_7
#define IIC_SCL GPIO_NUM_6

// TOUCH
#define TP_INT GPIO_NUM_9

// Battery Voltage ADC
#define BATTERY_VOLTAGE_ADC_DATA GPIO_NUM_4

// SD
#define SD_CS GPIO_NUM_38
#define SD_MOSI GPIO_NUM_39
#define SD_MISO GPIO_NUM_40
#define SD_SCLK GPIO_NUM_41

// PCF8563
#define PCF8563_INT GPIO_NUM_9
