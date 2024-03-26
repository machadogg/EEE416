# I2C communication using 2 Arduino Uno

In this example, 2 arduinos are used to transmit data via I2C protocol.

The wire library is used to configure the I2C communication between both arduinos. The task is as follows:

1- One Arduino Uno is connected to a button via an interrupt pin.
2- Once the button is pressed, it transmits the ASCII code equivalent to the number of times the button was pressed.
3- The receiver Arduino Uno gets the number and shows it in the LCD screen, using the LCD library.


