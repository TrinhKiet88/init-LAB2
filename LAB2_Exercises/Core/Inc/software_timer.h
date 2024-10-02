/*
 * software_timer.h
 *
 *  Created on: Sep 20, 2024
 *      Author: USER
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void setTimer(int index, int counter);
int isTimerExpired(int index);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
