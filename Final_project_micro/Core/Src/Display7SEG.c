/*
 * Display7SEG.c
 *
 *  Created on: May 28, 2024
 *      Author: khanh
 */

#include "Display7SEG.h"


const int digitConfig[][7] = {
        // A, B, C, D, E, F, G, DP
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

void display7SEG(int num) {

	    if (num > 9 || num < 0) {
	    	return;
        }

	    	const int *config = digitConfig[num];

	 HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, config[0] ? GPIO_PIN_RESET : GPIO_PIN_SET);
	 HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, config[1] ? GPIO_PIN_RESET : GPIO_PIN_SET);
	 HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, config[2] ? GPIO_PIN_RESET : GPIO_PIN_SET);
	 HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, config[3] ? GPIO_PIN_RESET : GPIO_PIN_SET);
	 HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, config[4] ? GPIO_PIN_RESET : GPIO_PIN_SET);
	 HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, config[5] ? GPIO_PIN_RESET : GPIO_PIN_SET);
	 HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, config[6] ? GPIO_PIN_RESET : GPIO_PIN_SET);
}
