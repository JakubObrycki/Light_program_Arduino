Informacje ogólne

Program został wykonany w celu zbadania natężenia padania promieni słonecznych na okna modułów fotowoltaicznych. Skrypt miał za zadanie zbadania różnic pomiędzy czujniami, sprawdzenia ewentualnych obszarów zacienienia w miesiącu największej produktywności. Następnie porównania z wykonanymi wcześniej symulacjmi w oprogramowaniu Skelion.

Urządzenia

W tym celu wykorzystano płytki Arduino Uno oraz niezbędne elementy elektroniczne oraz optoelektroniczne. Do badań natężenia światła wykorzystano czujniki BH1750 które są cyfrowymi układami światła kompatybilnymi z magistralą I2C mikrokontrolera Arduino. Praca czujników BH1750 łatwo współpracuje z tą platformą. Fotodioda w czujnikach wykrywa natężenie światła, po którym następuje zmiana na napięcie poprzez wbudowany integrator. Sensory zasilane są napięciem 3V-5V. Natomiast wartości natężenia jakie mierzą mieszczą się w zakresie od 1 do 65535 lx.

Schemat zasilania

![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/585f8c4a-8e6e-4bc4-9d20-f74f5e8be415)

Montaż układu

W pierwszej kolejności zlokalizowano miejsca, w których zostały umieszczone czujniki. Elementy optoelektroniczne umocowano na konstrukcjach wsporczych paneli poprzez opaski w miejscach narożnych tak aby nie przysłaniały oraz nie wpływały na pracę ogniw

![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/3da6df52-2f7f-4065-ad07-e32eab07f68e)
![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/c019b9e3-b588-4136-a1ff-f04f5aa69e6d)



Przykładowe wyniki pomiarów

Program dokonywał pomiarów co dwie minuty a następnie zapisywał informację w pliku tekstowym na karcie pamięci. W pierwszej kolejności zostaje podana informacja, że uruchomiono oraz zainicjalizowano kartę SD. Następnie pojawią się wyniki natężenia oświetlenia.

![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/a6c5284e-f2b9-4a64-90e3-f89a1b70aac4)

