General information

The program was created to examine the intensity of sunlight falling on the windows of photovoltaic modules. The script was designed to examine differences between sensors, check for possible areas of shading in the month of greatest productivity. Then, comparisons with previously performed simulations in the Skelion software.

----------------------------------------------------------------------------------------------------------------

Devices

For this purpose, Arduino Uno boards and the necessary electronic and optoelectronic components were used. BH1750 sensors were used to test the light intensity, which are digital light systems compatible with the I2C bus of the Arduino microcontroller. The operation of BH1750 sensors easily cooperates with this platform. The photodiode in the sensors detects the light intensity, after which a change to voltage occurs via the built-in integrator. The sensors are powered by a voltage of 3V-5V. The intensity values ​​they measure range from 1 to 65535 lx.

----------------------------------------------------------------------------------------------------------------

Power diagram

![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/585f8c4a-8e6e-4bc4-9d20-f74f5e8be415)

----------------------------------------------------------------------------------------------------------------

Assembly of the system

First, the locations where the sensors were placed were located. The optoelectronic elements were attached to the support structures of the panels using bands in the corners so that they did not cover or affect the operation of the cells.

![image](https://github.com/user-attachments/assets/f3c6a126-7a1f-4924-9fd2-d794f24b64bb)

----------------------------------------------------------------------------------------------------------------

Example measurement results

The program took measurements every two minutes and then saved the information in a text file on the memory card. First, information is given that the SD card has been started and initialized. Then the results of the illuminance will appear.

![image](https://github.com/user-attachments/assets/1b14aaeb-eb1f-42d2-be50-94b891aa5a39)

