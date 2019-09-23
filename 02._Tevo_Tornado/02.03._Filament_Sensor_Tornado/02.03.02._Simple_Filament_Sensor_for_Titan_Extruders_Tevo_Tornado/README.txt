                   .:                     :,                                          
,:::::::: ::`      :::                   :::                                          
,:::::::: ::`      :::                   :::                                          
.,,:::,,, ::`.:,   ... .. .:,     .:. ..`... ..`   ..   .:,    .. ::  .::,     .:,`   
   ,::    :::::::  ::, :::::::  `:::::::.,:: :::  ::: .::::::  ::::: ::::::  .::::::  
   ,::    :::::::: ::, :::::::: ::::::::.,:: :::  ::: :::,:::, ::::: ::::::, :::::::: 
   ,::    :::  ::: ::, :::  :::`::.  :::.,::  ::,`::`:::   ::: :::  `::,`   :::   ::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  :::::: ::::::::: ::`   :::::: ::::::::: 
   ,::    ::.  ::: ::, ::`  :::.::    ::.,::  .::::: ::::::::: ::`    ::::::::::::::: 
   ,::    ::.  ::: ::, ::`  ::: ::: `:::.,::   ::::  :::`  ,,, ::`  .::  :::.::.  ,,, 
   ,::    ::.  ::: ::, ::`  ::: ::::::::.,::   ::::   :::::::` ::`   ::::::: :::::::. 
   ,::    ::.  ::: ::, ::`  :::  :::::::`,::    ::.    :::::`  ::`   ::::::   :::::.  
                                ::,  ,::                               ``             
                                ::::::::                                              
                                 ::::::                                               
                                  `,,`


https://www.thingiverse.com/thing:3089331
Simple Filament Sensor for Titan Extruders (Tevo Tornado) by pfeilmayer is licensed under the Creative Commons - Attribution - Non-Commercial license.
http://creativecommons.org/licenses/by-nc/3.0/

# Summary

2018-09-22 - V.5 with cable management
added support (6 holes) for cable ties so that the cables don't just float in the air ...

2018-09-15 - V.5
2nd hole, near the extruder was enlarged due to some compatibility issues reported by one user. I personally use V.4, fits like a glove on my extruder/tevo !

2018-09-08 - V.4
I have made some structural adjustments to increase body strength.

This is a simplificated version of this ( https://www.thingiverse.com/thing:3046489 ) filament sensor.

See the "thing" in action : https://www.youtube.com/watch?v=9jN_g3Evhcc !

Following parts needed :
1x KW12-3 PCB switch
2x M3 x 20 screws 
2x M3 nuts (optional)
If needed you should replace the extruder M3 screws with ones about 1.5-2 mm longer.

Visit dvilleneuve's page and see wiring video and instructions for the KW12-3 PCB switch.


Marlin mods :

configuration.h
// #define FILAMENT_RUNOUT_SENSOR

configuration_adv.h
// #if ENABLED(ULTIPANEL)
// #define ADVANCED_PAUSE_FEATURE
// #define FILAMENT_CHANGE_UNLOAD_LENGTH 0
// #define FILAMENT_CHANGE_LOAD_LENGTH 0
// #define ADVANCED_PAUSE_EXTRUDE_LENGTH 0

pins_RAPMS.h
// //#define Z_MAX_PIN 19
// #define FIL_RUNOUT_PIN 19

Youtube tutorial for wiring and Marlin mods : https://www.youtube.com/watch?v=zTRsTWv_IwA

I use this filament sensor together with this filament guide made by by Velo17 : https://www.thingiverse.com/thing:2815524


If you like and find any of my "things" useful and you would like to support my work, please feel free to donate through :

Paypal : pfeilmayer1985 [at] yahoo [dot] com

Cryptocurrency :
ETH : 0xEc33aBF3EF4Ec0B2eB88ef45E5A91085a19b9d2A
ETC : 0x66E487E327D95b442FD916049D10df8Cd438fe46
ZEC : t1JrFZ4rbdn51PxTffdewM2rKKePoukSE1W
XRP : rBpT9d7sPmiqTEk4Cmqsby2bTfQdNUXQRW
XMR : 44NWHb8GrGxg5W69Qm1Sh9Fvica2xg79wMahEHPsC8yUR3DkCDsz7uFWbwaVe4vUMveKAzAiA4j8xgUi29TpKXpm3yz5F5X

Thank you !

# Print Settings

Printer Brand: TEVO
Printer: Tornado
Rafts: Yes
Supports: Yes
Resolution: 0.2
Infill: 90%
Filament_brand: Sunlu
Filament_material: PETG