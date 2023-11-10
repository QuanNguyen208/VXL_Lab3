/*
 * fsm.c
 *
 *  Created on: Nov 10, 2023
 *      Author: Admin
 */


#include "fsm.h"

int total_time = 0;
int counter1 = 0;
int counter2 = 0;
int num1 = 0;
int num2 = 0;
int num3 = 0;
int num4 = 0;
int tempRED = 0;
int tempYELLOW = 0;
int tempGREEN = 0;
int dis1 = 0;
int dis2 = 0;

void fsm_run() {
	switch (state) {
	case RESET:
		setTimer1(500);
		setTimer2(1000);

		tempRED = timeRED;
		tempYELLOW = timeYELLOW;
		tempGREEN = timeGREEN;

		counter1 = 0;
		counter2 = 0;


		state = MODE_1;
		break;
	case MODE_1:

		if (isButton1Pressed() == 1) {
			setTimer2(500);

			counter1 = 0;
			counter2 = 0;

			state = MODE_2;


		}
		break;
	case MODE_2:

		if (isButton1Pressed() == 1) {
			setTimer2(500);

			state = MODE_3;
		}

		break;
	case MODE_3:

		if (isButton1Pressed() == 1) {
			setTimer2(500);

			state = MODE_4;
		}

		break;
	case MODE_4:

		if (isButton1Pressed() == 1) {
			setTimer2(500);

			state = RESET;

		}
		break;

	default:
		break;
	}
}
