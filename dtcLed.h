/*
 * Huanle Zhang at UC Davis
 * www.huanlezhang.com
 *
 */

#ifndef _DTC_LED_H_
#define _DTC_LED_H_

#define DTC_R_PIN	16
#define DTC_G_PIN	20
#define DTC_B_PIN	21

void initLeds(void);

extern volatile int dtcLedCtrl_1;

#endif
