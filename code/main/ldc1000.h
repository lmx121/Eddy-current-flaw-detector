#include <stdio.h>

#define PIN_NUM_CS   5
#define PIN_NUM_MISO 19
#define PIN_NUM_MOSI 23
#define PIN_NUM_CLK  18

#define LED_PIN GPIO_NUM_2

#define LDC1000_CMD_REVID 		0x00
#define LDC1000_CMD_RPMAX 		0x01
#define LDC1000_CMD_RPMIN 		0x02
#define LDC1000_CMD_SENSORFREQ 	0x03
#define LDC1000_CMD_LDCCONFIG 	0x04
#define LDC1000_CMD_CLKCONFIG 	0x05
#define LDC1000_CMD_THRESHILSB 	0x06
#define LDC1000_CMD_THRESHIMSB 	0x07
#define LDC1000_CMD_THRESLOLSB 	0x08
#define LDC1000_CMD_THRESLOMSB 	0x09
#define LDC1000_CMD_INTCONFIG 	0x0A
#define LDC1000_CMD_PWRCONFIG 	0x0B
#define LDC1000_CMD_STATUS	 	0x20
#define LDC1000_CMD_PROXLSB 	0x21
#define LDC1000_CMD_PROXMSB 	0x22
#define LDC1000_CMD_FREQCTRLSB	0x23
#define LDC1000_CMD_FREQCTRMID	0x24
#define LDC1000_CMD_FREQCTRMSB	0x25

void init_spi(void);
void init_ldc1000(void);
void Ldc_SPIwrite(uint ch);
uint LDC_SPIRead(void);
uint LDC_ReadReg(uint addr);
void LDC_WriteReg(uint addr, uint Data);
uint ReadValue(void);