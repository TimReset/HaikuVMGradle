package arduino.tutorial;

import static haiku.arduino.api.Arduino.*;

/**
 */
public class HelloWorldJava {

    private static class InnerClass {
        void print(String s){
            Serial.println("Hello World Java from inner class "+s);

        }
    }
    
    /**
     * @param args
     */
    public static void main(String[] args) {
        for (int i = 0;; i++) {
            new InnerClass().print(String.valueOf(i));
        }
    }
    
    /**
     * And in case it is used with some MicroKernel for Processing
     * I added this two functions.
     */
    public static void setup() {
        init();
        Serial.begin(57600);
        for (int i = 0; i < 10; i++) {
            Serial.println("Hello World Java "+i);
        }
    }
    
    public static void loop() {
        for (int i = 0; i < 10; i++) {
            new InnerClass().print(String.valueOf(i));
        }
        
    }
}
