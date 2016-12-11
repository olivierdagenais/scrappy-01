// Copyright (c) Olivier Dagenais. All rights reserved.
// Licensed under the MIT license. See LICENSE in the project root.

/*
 * scrappy-01: RGB pulse
 *
 * TODO: include diagram
 */

const int inputRed = 2;
const int outputRed = 3;
const int inputBlue = 4;
const int outputBlue = 5;
const int outputGreen = 6;
const int inputGreen = 7;

int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(inputRed, INPUT);
  pinMode(outputRed, OUTPUT);
  pinMode(inputBlue, INPUT);
  pinMode(outputBlue, OUTPUT);
  pinMode(outputGreen, OUTPUT);
  pinMode(inputGreen, INPUT);
}

void loop() {
  int redState = digitalRead(inputRed);
  analogWrite(outputRed, redState == HIGH ? brightness : 0);
  int blueState = digitalRead(inputBlue);
  analogWrite(outputBlue, blueState == HIGH ? brightness : 0);
  int greenState = digitalRead(inputGreen);
  analogWrite(outputGreen, greenState = HIGH ? brightness : 0);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}
