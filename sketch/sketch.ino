// Copyright (c) Olivier Dagenais. All rights reserved.
// Licensed under the MIT license. See LICENSE in the project root.

/*
 * scrappy-01: RGB pulse
 *
 * TODO: include diagram
 */

int inputRed = 2;
int outputRed = 3;
int inputBlue = 4;
int outputBlue = 5;
int outputGreen = 6;
int inputGreen = 7;

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
  analogWrite(outputRed, brightness);
  analogWrite(outputBlue, brightness);
  analogWrite(outputGreen, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(30);
}
