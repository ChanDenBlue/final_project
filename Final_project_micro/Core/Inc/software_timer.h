/*
 * software_timer.h
 *
 *  Created on: May 28, 2024
 *      Author: khanh
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1 (int duration );
void setTimer2 (int duration );
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
