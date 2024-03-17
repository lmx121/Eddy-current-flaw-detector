#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/spi_master.h"
#include "ldc1000.h"
/*
spi_device_handle_t spi;

void init_spi()
{
    gpio_set_level(PIN_NUM_CS,1);
    gpio_set_level(PIN_NUM_MISO,1);
    gpio_set_level(PIN_NUM_MOSI,1);
    gpio_set_level(PIN_NUM_CLK,1);

}

void Ldc_SPIwrite(uint ch)
 {
	 uint i = 0;
	 for(i = 0;i <= 7;i ++)
	 {
		gpio_set_level(PIN_NUM_CLK,0);
        if(ch & 0x80) gpio_set_level(PIN_NUM_MOSI,1);
		else gpio_set_level(PIN_NUM_MOSI,0);
        vTaskDelay(10/portTICK_PERIOD_MS);
        gpio_set_level(PIN_NUM_CLK,1);
        vTaskDelay(10/portTICK_PERIOD_MS);
		ch <<= 1; 
	 }
}

uint LDC_SPIRead()
{
    uint i = 0;
    uint ch=0;
    for(i=0; i <= 7; i++)
    {
        ch <<= 1;
        vTaskDelay(10/portTICK_PERIOD_MS);
        gpio_set_level(PIN_NUM_CLK,0);
        if(gpio_get_level(PIN_NUM_MISO)) ch |= 0x01;
        vTaskDelay(10/portTICK_PERIOD_MS); 
        gpio_set_level(PIN_NUM_CLK,1); 
    }
    return ch;
}


uint LDC_ReadReg(uint addr)
{   
    uint temp;
    gpio_set_level(PIN_NUM_CS, 0);    //CS拉低
    Ldc_SPIwrite(addr|0x80);
    temp = LDC_SPIRead();
    gpio_set_level(PIN_NUM_CS, 1); //CS拉高
    //printf("LDC1000 measurement result: %d\n", temp);
    return temp;
}

uint ReadValue()
{
    uint iTemp;
    iTemp = LDC_ReadReg(LDC1000_CMD_PROXMSB);
    iTemp<<=8;
    iTemp += LDC_ReadReg(LDC1000_CMD_PROXLSB);
    printf("LDC1000 measurement result: %d\n", iTemp);
    return iTemp;
}

void LDC_WriteReg(uint addr, uint Data)
{
    gpio_set_level(PIN_NUM_CS, 0);    //CS拉低
    Ldc_SPIwrite(addr&0x7F);
    Ldc_SPIwrite(Data);
    gpio_set_level(PIN_NUM_CS, 1);    //CS拉高
}


void init_ldc1000()
{
    LDC_WriteReg(LDC1000_CMD_RPMAX,0x09);					//配置Rp_MAX(0x01)寄存器
	LDC_WriteReg(LDC1000_CMD_RPMIN,0x37);					//配置Rp_MIN(0x02)寄存器
	LDC_WriteReg(LDC1000_CMD_SENSORFREQ,0xE2);						//配置Sensor Frequency(0x03)寄存器
	LDC_WriteReg(LDC1000_CMD_LDCCONFIG,0x17);							//配置LDC Configuration(0x04)寄存器
	LDC_WriteReg(LDC1000_CMD_CLKCONFIG,0x00);							//配置Clock Configuration(0x05)寄存器,
																		//使用TBCLK作为时钟源																		//配置INTB为比较输出标志位(status of Comparator output)
	LDC_WriteReg(LDC1000_CMD_THRESHILSB,0x50);						//配置Comparator Threshold High(0x06)寄存器低8位
	LDC_WriteReg(LDC1000_CMD_THRESHIMSB,0x14);						//配置Comparator Threshold High(0x07)寄存器高8位
	LDC_WriteReg(LDC1000_CMD_THRESLOLSB,0xC0);						//配置Comparator Threshold Low(0x08)寄存器低8位
	LDC_WriteReg(LDC1000_CMD_THRESLOMSB,0x12);						//配置Comparator Threshold Low(0x09)寄存器高8位
	LDC_WriteReg(LDC1000_CMD_INTCONFIG,0x02);							//配置INTB Pin Configuration(0x0A),	
	LDC_WriteReg(LDC1000_CMD_PWRCONFIG,0x01);							//配置Power Configuration(0x0B)寄存器
}


*/





