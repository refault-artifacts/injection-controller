#include <Arduino.h>
#include "pins.h"

//pin2state[<Teensy pin of a DISC signal>] gives you teensy pin of
//corresponding STATIC signal
uint8_t pin2state[] = {
	// Conversion table for teensy pins
	// of DISC and STATIC signals
	//STATIC DISC
	0, //0
	0, //1
	0, //2
	0, //3
	16, //4
	13, //5
	0, //6
	0, //7
	0, //8
	0, //9
	0, //10
	0, //11
	0, //12
	0, //13
	0, //14
	0, //15
	0, //16
	20, //17
	21, //18
	15, //19
	0, //20
	0, //21
	34, //22
	39, //23
	0, //24
	0, //25
	0, //26
	0, //27
	0, //28
	0, //29
	0, //30
	0, //31
	0, //32
	0, //33
	0, //34
	0, //35
	35, //36
	38, //37
	0, //38
	0, //39
	14, //40
	33 //41
};

int init_gpios()
{
	pinMode(PIN_LED_ETH_RIGHT, OUTPUT);
	pinMode(PIN_LED_STATUS, OUTPUT);
	pinMode(PIN_PWR_BTN, OUTPUT);

	/* All fault injection pins */
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(23, OUTPUT);
	pinMode(22, OUTPUT);
	pinMode(21, OUTPUT);
	pinMode(20, OUTPUT);
	pinMode(19, OUTPUT);
	pinMode(18, OUTPUT);
	pinMode(17, OUTPUT);
	pinMode(16, OUTPUT);
	pinMode(15, OUTPUT);
	pinMode(14, OUTPUT);
	pinMode(13, OUTPUT);
	pinMode(41, OUTPUT);
	pinMode(40, OUTPUT);
	pinMode(39, OUTPUT);
	pinMode(38, OUTPUT);
	pinMode(37, OUTPUT);
	pinMode(36, OUTPUT);
	pinMode(35, OUTPUT);
	pinMode(34, OUTPUT);
	pinMode(33, OUTPUT);

	/* HIGH means "passthrough" mode */
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(23, HIGH);
	digitalWrite(22, HIGH);
	digitalWrite(21, HIGH);
	digitalWrite(20, HIGH);
	digitalWrite(19, HIGH);
	digitalWrite(18, HIGH);
	digitalWrite(17, HIGH);
	digitalWrite(16, HIGH);
	digitalWrite(15, HIGH);
	digitalWrite(14, HIGH);
	digitalWrite(13, HIGH);
	digitalWrite(41, HIGH);
	digitalWrite(40, HIGH);
	digitalWrite(39, HIGH);
	digitalWrite(38, HIGH);
	digitalWrite(37, HIGH);
	digitalWrite(36, HIGH);
	digitalWrite(35, HIGH);
	digitalWrite(34, HIGH);
	digitalWrite(33, HIGH);

	digitalWrite(PIN_LED_ETH_RIGHT, LOW);
	digitalWrite(PIN_LED_STATUS, LOW);

	return 0;
}
