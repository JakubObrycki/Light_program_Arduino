Informacje ogólne

Program został wykonany w celu zbadania natężenia padania promieni słonecznych na okna modułów fotowoltaicznych. Skrypt miał za zadanie zbadania różnic pomiędzy czujniami, sprawdzenia ewentualnych obszarów zacienienia w miesiącu największej produktywności. Następnie porównania z wykonanymi wcześniej symulacjmi w oprogramowaniu Skelion.

Urządzenia:

W tym celu wykorzystano płytki Arduino Uno oraz niezbędne elementy elektroniczne oraz optoelektroniczne. Do badań natężenia światła wykorzystano czujniki BH1750 które są cyfrowymi układami światła kompatybilnymi z magistralą I2C mikrokontrolera Arduino. Praca czujników BH1750 łatwo współpracuje z tą platformą. Fotodioda w czujnikach wykrywa natężenie światła, po którym następuje zmiana na napięcie poprzez wbudowany integrator. Sensory zasilane są napięciem 3V-5V. Natomiast wartości natężenia jakie mierzą mieszczą się w zakresie od 1 do 65535 lx.

![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/e910e2a3-2cee-4c06-808e-a7741f90c464)

Schemat zasilania:

![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/3c441ca6-a362-4b38-9072-2a8fab4d9a3d)

Montaż układu:

W pierwszej kolejności zlokalizowano miejsca, w których zostały umieszczone czujniki. Elementy optoelektroniczne umocowano na konstrukcjach wsporczych paneli poprzez opaski w miejscach narożnych tak aby nie przysłaniały oraz nie wpływały na pracę ogniw

![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/6296dc04-2c93-4333-b7a9-171d6a4d20c8)![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/add10641-5ba2-40d8-bdf0-c8a48fb85793)

Przykładowe wyniki pomiarów:

Program dokonywał pomiarów co dwie minuty a następnie zapisywał informację w pliku tekstowym na karcie pamięci. W pierwszej kolejności zostaje podana informacja, że uruchomiono oraz zainicjalizowano kartę SD. Następnie pojawią się wyniki natężenia oświetlenia.
![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/178af3c2-0fc1-420d-82ff-605cea9a46cc)
![image](https://github.com/Kubsoon98/Light_program_Arduino/assets/128688775/a107577e-370c-4ed6-b279-66fe4a424f62)



