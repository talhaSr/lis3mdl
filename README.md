# LIS3MDL 3-Axis Magnetometer
![Licence](https://img.shields.io/badge/License-GPL--3.0-orange)
## Description
The LIS3MDL is an ultra-low-power highperformance three-axis magnetic sensor. The LIS3MDL has user-selectable full scales of  ±4/±8/±12/±16 gauss. The self-test capability allows the user to check the functioning of the sensor in the final application. The device may be configured to generate interrupt signals for magnetic field detection. The LIS3MDL includes an I2C serial bus interface that supports standard and fast mode (100 kHz and 400 kHz) and SPI serial standard interface.
## Features
- Wide supply voltage, 1.9 V to 3.6 V
- Independent IO supply (1.8 V)
- ±4/±8/±12/±16 gauss selectable magnetic full scales
- Continuous and single-conversion modes
- 16-bit data output
- Interrupt generator
- Self-test
- I2C/SPI digital output interface
- Power-down mode / low-power mode
- ECOPACK®, RoHS and “Green” compliant
## Pin Description
![LIS3MDL](https://tmbroadcast.es/wp-content/uploads/2013/08/n60_028.jpg)
|Pin #|Name|Function|
|--|--|--|
|1|SCL|I2C serial clock|
|2|Reserved|Connect to GND|
|3|GND|Connect to GND|
|4|C1|Capacitor connection (C1=100 nF)|
|5|VDD|Power supply|
|6|VDD_IO|Power supply for I/O pins|
|7|INT|Interrupt|
|8|DRDY|Data Ready|
|9|SA1|I2C less significant bit of the device address|
|10|CS|I2C/SPI mode selection|
|11|SDA|I2C serial data|
|12|Reserved|Connect to GND|

**Note:** Device's I2C address can be changed due to `SA1` pin state;
- `Ox1C` when `SA1` grounded.
- `Ox1E` when `SA1` pulled to *VDD*.

## About
This library is created for STM32 development environment and can be used only with STM32F series microcontrollers for now. An example project will be added soon..

***Note:**  This library requires HAL!*

# License
Copyright (c) 2021 Talha Sarı
GNU General Public License v3.0