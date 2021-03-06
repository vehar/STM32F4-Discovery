/*
 * File: mcu_i2c.h
 * Date: 02.03.2014
 * Denis Zheleznyakov aka ZiB @ http://ziblog.ru
 */

#ifndef MCU_I2C_H_
#define MCU_I2C_H_

void mcu_i2c_init(void);
void mcu_i2c_write_byte(uint8_t device_address, uint8_t value);
void mcu_i2c_write_two_byte(uint8_t device_address, uint8_t value_a, uint8_t value_b);
uint8_t mcu_i2c_read_byte(uint8_t device_address);
void mcu_i2c_read(uint8_t device_address, uint8_t * buffer, uint8_t length);

#endif /* MCU_I2C_H_ */
