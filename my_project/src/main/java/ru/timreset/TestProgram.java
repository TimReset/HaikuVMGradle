package ru.timreset;

import haiku.avr.lib.arduino.WProgram;

/**
 * @author averin
 * @date 23.04.2015
 */
public class TestProgram {
  public static void main(String[] args) {
    Thread.nap(1000);
    WProgram.Serial.write((byte)ArduinoEnum.A.ordinal());
  }
}
