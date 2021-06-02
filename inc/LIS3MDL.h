/**
 * @file LIS3MDL.h
 * @author Talha Sarı (talha.sari@outlook.com.tr)
 * @brief LIS3MDL 3-axis magnetometer I2C library for STM32 environment
 * @version v1.0
 * @date 2021-06-02
 * 
 * @copyright Copyright (c) 2021 - GNU General Public License v3
 * 
 */

#ifndef LIS3MDL_H
#define LIS3MDL_H

/* Structure and Enums */
typedef enum {
    LIS3MDL_OK = 0x00,
    LIS3MDL_ERROR
} LIS3MDL_Result_t;

typedef enum {
    LIS3MDL_Scale_4G = 0x00,    /* ±4 Gauss     */
    LIS3MDL_Scale_8G = 0x20,    /* ±8 Gauss     */
    LIS3MDL_Scale_12G = 0x40,   /* ±12 Gauss    */
    LIS3MDL_Scale_16G = 0x60    /* ±16 Gauss    */
} LIS3MDL_Scale_t;

typedef enum {
    LIS3MDL_Device_0 = 0x1C,
    LIS3MDL_Device_1 = 0x1E
} LIS3MDL_Device_t;

typedef enum {
    LIS3MDL_MODE_LOWPOWER = 0x00,
    LIS3MDL_MODE_MEDIU = 0x01,
    LIS3MDL_MODE_HIGH = 0x02,
    LIS3MDL_MODE_ULTRAHIGH = 0x03
} LIS3MDL_OperationMode_t;

typedef enum {
    LIS3MDL_ODR_0 = 0x00,   /* 0.625 Hz */
    LIS3MDL_ODR_1 = 0x04,   /* 1.25 Hz  */
    LIS3MDL_ODR_2 = 0x08,   /* 2.5 Hz   */
    LIS3MDL_ODR_3 = 0x0C,   /* 5 Hz     */
    LIS3MDL_ODR_4 = 0x10,   /* 10 Hz    */
    LIS3MDL_ODR_5 = 0x14,   /* 20 Hz    */
    LIS3MDL_ODR_6 = 0x18,   /* 40 Hz    */
    LIS3MDL_ODR_7 = 0x1C,   /* 80 Hz    */
    /** Fast Output Data Rates
     * Low Power:               1000 Hz
     * Medium Performance:      560 Hz
     * High Performance:        300 Hz
     * Ultra-High Performance:  155 Hz
     */
    LIS3MDL_ODR_FAST = 0x02
} LIS3MDL_ODR_t;

typedef struct {
    float mag[3];
    float temp;
    int16_t mag_raw[3];
    int16_t temp_raw;
    LIS3MDL_Scale_t scale;
    uint8_t addr;
} LIS3MDL_t;

/* Sensor Functions */
LIS3MDL_Result_t LIS3MDL_Init(LIS3MDL_t *hsensor, LIS3MDL_Device_t dev, LIS3MDL_Scale_t scale, LIS3MDL_OperationMode_t mode, LIS3MDL_ODR_t odr);
LIS3MDL_Result_t LIS3MDL_ReadMag(LIS3MDL_t *hsensor);
LIS3MDL_Result_t LIS3MDL_ReadTemp(LIS3MDL_t *hsensor);

#endif /* LIS3MDL_H */