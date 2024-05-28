/*
 * Button_manual.c
 *
 *  Created on: May 28, 2024
 *      Author: khanh
 */


#include "Button_manual.h"

int present_counting = 0;
int counting_press = 0;
int previous_counting = 0;

void fsm_simple_button_run(){
	previous_counting = counting_press;
	if (is_button_pressed(0) == 1 || is_long_button_flag(0) == 1) {
		counting_press = 0;
		setTimer1(1000);
	}
	if (is_button_pressed(1) == 1 || is_long_button_flag(1) == 1) {
		counting_press ++;
		setTimer1(1000);
	}
	if (is_button_pressed(2) == 1 || is_long_button_flag(2) == 1) {
		counting_press ++;
		setTimer1(1000);
	}
	present_counting = counting_press;
	
	if (timer1_flag == 1) {
		counting_press -- ;
		present_counting = previous_counting;
	}
	if (counting_press < 0 || counting_press > 9) {
		counting_press = 0;
	}
	display7SEG(present_counting) ;
}
