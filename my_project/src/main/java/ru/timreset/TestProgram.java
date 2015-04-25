package ru.timreset;

import haiku.arduino.api.Arduino;

import java.lang.reflect.Method;

/**
 * @author averin
 * @date 23.04.2015
 */
public class TestProgram {

	enum TestEnum {
		A, B, C, D;
	}

	public static void main(String[] args) {
		Method[] m = TestProgram2.class.getDeclaredMethods();

		while (true) {
			for (Method method : m) {
				Arduino.Serial.println(method.getName());
			}

		}
	}

	/**
	 * And in case it is used with some MicroKernel for Processing
	 * I added this two functions.
	 */
/*	public static void setup() {
		Arduino.init();
		Arduino.Serial.begin(57600);
		for (int i = 0; i < 10; i++) {
			Arduino.Serial.println("Hello World Java GRADLE"+i);
		}
	}

	public static void loop() {
		for (int i = 0; i < 10; i++) {
			new InnerClass().print(String.valueOf(i));
		}

	}*/
}
