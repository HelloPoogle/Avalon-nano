/*
 * @brief adc head file
 *
 * @note
 *
 * @par
 */
#ifndef __AVALON_ADC_H_
#define __AVALON_ADC_H_

#include "adc_11xx.h"

#define ADC_CHANNEL_VBASE   (ADC_CH7)
#define ADC_CHANNEL_NTC1    (ADC_CH3)
#define ADC_CHANNEL_NTC2    (ADC_CH6)
#define ADC_CHANNEL_V12V_1  (ADC_CH5)
#define ADC_CHANNEL_V12V_2  (ADC_CH0)
#define ADC_CHANNEL_VCORE1  (ADC_CH2)
#define ADC_CHANNEL_VCORE2  (ADC_CH1)

#define ADC_CAPCPUNT    7

void adc_init(void);
void adc_read(uint8_t channel, uint16_t *data);

#endif /* __AVALON_ADC_H_ */