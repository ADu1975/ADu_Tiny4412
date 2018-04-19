#ifndef __MACH_GPIO_SP7160LTE_H
#define __MACH_GPIO_SP7160LTE_H __FILE__

#include <mach/gpio.h>

extern void midas_config_gpio_table(void);
extern void midas_config_sleep_gpio_table(void);

#define GPIO_BT_RXD			EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF			2
#define GPIO_BT_TXD			EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF			2
#define GPIO_BT_CTS			EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF			2
#define GPIO_BT_RTS			EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF			2
#define GPIO_GPS_RXD			EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF			2
#define GPIO_GPS_TXD			EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF			2
#define GPIO_GPS_CTS			EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF			2
#define GPIO_GPS_RTS			EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF			2

#define GPIO_TSP_SDA_18V		EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL_18V		EXYNOS4_GPA1(3)

#define GPIO_CODEC_SDA_18V		EXYNOS4_GPB(0)
#define GPIO_CODEC_SCL_18V		EXYNOS4_GPB(1)
#define GPIO_MHL_DSDA_1_8V		EXYNOS4_GPB(2)
#define GPIO_MHL_DSCL_1_8V		EXYNOS4_GPB(3)
#define GPIO_CAM_SPI_SCLK		EXYNOS4_GPB(4)
#define GPIO_TSP_LDO_ON1		EXYNOS4_GPB(5)
#define GPIO_TSP_LDO_ON2		EXYNOS4_GPB(7)

#define GPIO_LCD_EN			EXYNOS4_GPC0(1)
#define GPIO_AP_DUMP_INT		EXYNOS4_GPC0(3)
#define GPIO_FM_I2S_DO			EXYSNO4_GPC0(4)

#define GPIO_PEN_PDCT_18V		EXYNOS4_GPC1(0)
#define GPIO_PEN_LDO_EN			EXYNOS4_GPC1(1)
#define GPIO_PEN_IRQ_18V		EXYNOS4_GPC1(2)
#define GPIO_PEN_SDA_28V		EXYNOS4_GPC1(3)
#define GPIO_PEN_SCL_28V		EXYNOS4_GPC1(4)

#define GPIO_PWM0			EXYNOS4_GPD0(0)
#define GPIO_VIBTONE_PWM		GPIO_PWM0
#define GPIO_LED_BACKLIGHT_PWM		EXYNOS4_GPD0(1)
#define GPIO_PWM2			EXYNOS4_GPD0(2)
#define GPIO_PWM3			EXYNOS4_GPD0(3)

#define GPIO_GSENSE_SDA_18V		EXYNOS4_GPD1(2)
#define GPIO_GSENSE_SCL_18V		EXYNOS4_GPD1(3)

#define GPIO_LCD_PCLK			EXYNOS4_GPF0(3)

#define GPIO_MHL_RST			EXYNOS4_GPF3(4)
#define GPIO_MHL_INT			EXYNOS4_GPF3(5)
#define GPIO_MHL_INT_AF			S3C_GPIO_SFN(0xF)
#define MHL_INT_IRQ			gpio_to_irq(GPIO_MHL_INT)
#define MHL_WAKEUP_IRQ			gpio_to_irq(GPIO_MHL_WAKE_UP)

#define GPIO_UART_SEL2			EXYNOS4212_GPJ0(0)
#define GPIO_EAR_MIC_BIAS_EN		EXYNOS4212_GPJ0(3)
#define GPIO_TA_EN			EXYNOS4212_GPJ0(4)
#define GPIO_CAM_EN2			EXYNOS4212_GPJ0(5)
#define GPIO_CAM_EN1			EXYNOS4212_GPJ0(6)
#define GPIO_5M_nSTBY			EXYNOS4212_GPJ0(7)

#define GPIO_VT_CAM_nRST		EXYNOS4212_GPJ1(0)
#define GPIO_LINEOUT_EN			EXYNOS4212_GPJ1(2)
#define GPIO_CAM_MCLK			EXYNOS4212_GPJ1(3)
#define GPIO_MHL_WAKE_UP		EXYNOS4212_GPJ1(4)

#define GPIO_eMMC_EN			EXYNOS4_GPK0(2)

#define GPIO_WLAN_SDIO_CLK		EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF		2
#define GPIO_WLAN_SDIO_CMD		EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF		2
#define GPIO_WLAN_SDIO_D0		EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF		2
#define GPIO_WLAN_SDIO_D1		EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF		2
#define GPIO_WLAN_SDIO_D2		EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF		2
#define GPIO_WLAN_SDIO_D3		EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF		2

#define GPIO_ACTIVE_STATE		EXYNOS4_GPL0(0)
#define GPIO_PS_ALS_SCL_18V		EXYNOS4_GPL0(1)
#define GPIO_PS_ALS_SDA_18V		EXYNOS4_GPL0(2)
#define GPIO_IRDA_WAKE			EXYNOS4_GPL0(3)
#define GPIO_HDMI_EN			EXYNOS4_GPL0(4)
#define GPIO_BT_EN			EXYNOS4_GPL0(6)

#define GPIO_PDA_ACTIVE			EXYNOS4_GPL1(0)
#define GPIO_5M_nRST			EXYNOS4_GPL1(1)

#define GPIO_GYRO_DE			EXYNOS4_GPL2(0)
#define GPIO_BUCK2_SEL			EXYNOS4_GPL2(1)
#define GPIO_BUCK3_SEL			EXYNOS4_GPL2(2)
#define GPIO_GPS_PWR_EN			EXYNOS4_GPL2(3)

#define GPIO_MOTOR_EN			EXYNOS4_GPL2(4)
#define GPIO_PHONE_ON			EXYNOS4_GPL2(5)
#define GPIO_ACCESSORY_EN		EXYNOS4_GPL2(6)
#define GPIO_UART_SEL1			EXYNOS4_GPL2(7)

#define GPIO_MIC_BIAS_EN		EXYNOS4212_GPM0(0)
#define GPIO_LED_BACKLIGHT_RESET	EXYNOS4212_GPM0(1)
#define GPIO_TA_nCHG			EXYNOS4212_GPM0(3)
#define GPIO_TSP_RST			EXYNOS4212_GPM0(4)
#define GPIO_LVDS_NSHDN			EXYNOS4212_GPM0(5)
#define GPIO_IRDA_IRQ			EXYNOS4212_GPM0(6)
#define GPIO_USB_SEL_CP			EXYNOS4212_GPM0(7)

#define GPIO_MOTOR_SDA			EXYNOS4212_GPM1(0)
#define GPIO_MOTOR_SCL			EXYNOS4212_GPM1(1)

#define GPIO_CHG_SDA			EXYNOS4212_GPM2(0)
#define GPIO_CHG_SCL			EXYNOS4212_GPM2(1)
#define GPIO_VTCAM_MCLK			EXYNOS4212_GPM2(2)
#define GPIO_TSP_INT			EXYNOS4212_GPM2(3)
#define GPIO_SUSPEND_REQUEST		EXYNOS4212_GPM2(4)

#define GPIO_PMIC_DVS1			EXYNOS4212_GPM3(0)
#define GPIO_PMIC_DVS2			EXYNOS4212_GPM3(1)
#define GPIO_PMIC_DVS3			EXYNOS4212_GPM3(2)

#define GPIO_CP_REQ_RESET		EXYNOS4212_GPM3(3)
#define GPIO_CP_RST			EXYNOS4212_GPM3(4)

#define GPIO_WLAN_EN			EXYNOS4212_GPM3(5)
#define GPIO_WLAN_EN_AF			1
#define GPIO_CAM_MOVIE_EN		EXYNOS4212_GPM3(6)
#define GPIO_CAM_FLASH_EN		EXYNOS4212_GPM3(7)

#define GPIO_ADC_SCL			EXYNOS4212_GPM4(0)
#define GPIO_ADC_SDA			EXYNOS4212_GPM4(1)
#define GPIO_VT_CAM_SCL_1_12V		EXYNOS4212_GPM4(2)
#define GPIO_VT_CAM_SDA_1_12V		EXYNOS4212_GPM4(3)
#define GPIO_CODEC_LDO_EN		EXYNOS4212_GPM4(4)
#define GPIO_WM8994_LDO			GPIO_CODEC_LDO_EN
#define GPIO_TSP_LDO_ON			EXYNOS4212_GPM4(5)
#define GPIO_USB_OTG_EN			EXYNOS4212_GPM4(6)
#define GPIO_MSENSOR_INT		EXYNOS4212_GPM4(7)

#define GPIO_ACC_INT			EXYNOS4_GPX0(0)
#define GPIO_ADC_INT			EXYNOS4_GPX0(1)
#define GPIO_DET_35			EXYNOS4_GPX0(3)
#define GPIO_DOCK_INT			EXYNOS4_GPX0(4)
#define GPIO_GYRO_INT			EXYNOS4_GPX0(6)
#define GPIO_PMIC_IRQ			EXYNOS4_GPX0(7)

#define GPIO_IPC_SLAVE_WAKEUP		EXYNOS4_GPX1(0)
#define GPIO_IPC_HOST_WAKEUP		EXYNOS4_GPX1(1)
#define GPIO_CP_DUMP_INT		EXYNOS4_GPX1(2)
#define GPIO_ACCESSORY_INT		EXYNOS4_GPX1(3)
#define GPIO_TA_nCONNECTED		EXYNOS4_GPX1(4)
#define GPIO_S_PEN_IRQ			EXYNOS4_GPX1(5)
#define GPIO_PHONE_ACTIVE		EXYNOS4_GPX1(6)
#define GPIO_GPS_HOST_WAKE		EXYNOS4_GPX2(0)
#define GPIO_GPS_HOST_WAKE_AF	0xF
#define GPIO_VOL_UP			EXYNOS4_GPX2(2)
#define GPIO_FUEL_ALERT			EXYNOS4_GPX2(3)
#define GPIO_BUCK4_SEL			EXYNOS4_GPX2(4)
#define GPIO_WLAN_HOST_WAKE		EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF		0xF
#define GPIO_BT_HOST_WAKE		EXYNOS4_GPX2(6)
#define IRQ_BT_HOST_WAKE		IRQ_EINT(22)
#define GPIO_nPOWER			EXYNOS4_GPX2(7)

#define GPIO_IF_CON_SENSE		EXYNOS4_GPX3(0)
#define GPIO_BT_WAKE			EXYNOS4_GPX3(1)
#define GPIO_VOL_DOWN			EXYNOS4_GPX3(3)
#define GPIO_ACCESSORY_OUT_5V		EXYNOS4_GPX3(5)
#define GPIO_EAR_SEND_END		EXYNOS4_GPX3(6)
#define GPIO_HDMI_HPD			EXYNOS4_GPX3(7)

#define GPIO_IRDA_SDA			EXYNOS4_GPY0(0)
#define GPIO_IRDA_SCL			EXYNOS4_GPY0(1)
#define GPIO_FUEL_SDA			EXYNOS4_GPY0(2)
#define GPIO_FUEL_SCL			EXYNOS4_GPY0(3)
#define GPIO_USB_SEL0			EXYNOS4_GPY0(4)
#define GPIO_USB_SEL1			EXYNOS4_GPY0(5)

#define GPIO_TF_EN			EXYNOS4_GPY2(0)
#define GPIO_MHL_SDA_1_8V		EXYNOS4_GPY2(2)
#define GPIO_MHL_SCL_1_8V		EXYNOS4_GPY2(3)
#define GPIO_MSENSOR_SDA_18V		EXYNOS4_GPY2(4)
#define GPIO_MSENSOR_SCL_18V		EXYNOS4_GPY2(5)

#endif /* __MACH_GPIO_SP7160LTE_H */
