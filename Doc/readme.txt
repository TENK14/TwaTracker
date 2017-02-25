
Need to try this ASCII chars on the OLED display:
↔
↑ 
↓
☠, radioactive sign ☢, biohazard sign ☣, caduceus ☤, universal recycling symbol ♲
↺ ↻
arrow ← → ↑ ↓ , left right arrow ↔ , double arrow ⇐ ⇒ ⇔
multiplication, division × ✕ ✖ ÷

--------------------------------------------------------------------------------------

Resolution: [23x8]
Screens: 
0. Menu
   - Nastavit datum a čas
   - Zapnout/Vypnout čidlo
   - Start měření
   - Přehled záznamů
   --------------------
  Up - select upper
  Down - select lower 
  Left - ---
  Right - ---
  Enter - choice

  =====================

1. Nastavit datum a čas
  - dd.mm.YYYY HH:MM
  ---------------------
  Up - increment value
  Down - decrement value
  Left - move left
  Right - move right
  Enter - save settings end exit

  =====================

2. Zapnout/Vypnout čidlo
  - BME280		1
  - GPS			0
  - screen ON	15s
  ---------------------
  Up - select upper
  Down - select lower 
  Left - change value
  Right - change value
  Enter - save settings end exit

  =====================

4. Přehled záznamů
 - 01.12.2016 08:00
 - 01.01.2017 00:00
 - 01.01.2017 14:13
 ---------------------
  Up - select upper
  Down - select lower 
  Left - ---
  Right - ---
  Enter - enter details

  =====================

Záznam:	(Recording)								| Historie: 01.12.16 08:00 (Record)
------------------------						 ------------------------
1/6 Přehled			GS |						|1/6 Přehled            | title (Overview)
D: 72:54:12			   |	Duration			|011216 0800÷011216 1435| start DateTime ÷ end DateTime			
P: 981.000hPa		   |	Pressure			|D: 72:54:12            | duration
T: -22.300*C		   |	Temperature			|P: 981.000 ÷1213.000hPa| lowest pressure ÷ highest pressure
A: 1270.915m		   |	Altitude			|T: -22.300 ÷ -02.300*C | lowest temperature ÷ highest temperature			
AGPS: 1290.415m		   |	Altitude			|A: 1270.915÷3512.900m	| lowest altitude ÷ highest altitude
H: 072%  |<-> 106.250km|	Humidity | Distance	|H:072÷100%|<->106.250km| min÷max Humidity | Distance	
↑: 5420m |↓: 10852m    |^-Ascendent|v-Descendent|↑: 5420m  |↓: 10852m   | ^-Ascendent|v-Descendent
------------------------						 ------------------------
  Up - scroll upper                               Up - scroll upper
  Down - scroll lower 							  Down - scroll lower 
  Left - listing (next screen)					  Left - listing (next screen)
  Right - listing (previous screen)				  Right - listing (previous screen)
  Enter - stop recording => Y/N?				  Enter - leave record

  =====================
  
Záznam/Historie: (Recording/Record)					
------------------------
2/6 Tlak    		   | Pressure
                       |
                       |
       GRAPH           |
                       |
                       |
                       |
 981.000 ÷ 1100.000 hPa|
------------------------
  Up - ---                 
  Down - --- 				
  Left - listing (next screen)		
  Right - listing (previous screen)	
  Enter - stop recording => Y/N? / leave record	

  =====================

Záznam/Historie: (Recording/Record)				
------------------------
3/6 Teplota 		   | Temperature
                       |
                       |
       GRAPH           |
                       |
                       |
                       |
-22.800 ÷ -02.300 *C   |
------------------------
  Up - ---                 
  Down - --- 				
  Left - listing (next screen)		
  Right - listing (previous screen)	
  Enter - stop recording => Y/N? / leave record	

  =====================

Záznam/Historie: (Recording/Record)					
------------------------
4/6 Převýšení		   | Altitude
                       |
                       |
       GRAPH           |
                       |
                       |
                       |
-1236 ÷ 2580 m         |
------------------------
  Up - ---                 
  Down - --- 				
  Left - listing (next screen)		
  Right - listing (previous screen)	
  Enter - stop recording => Y/N? / leave record	

  =====================

Záznam/Historie: (Recording/Record)				
------------------------
5/6 GPS Převýšení	   | GPS Altitude
                       |
                       |
       GRAPH           |
                       |
                       |
                       |
-1236 ÷ 2580 m         |
------------------------
  Up - ---                 
  Down - --- 				
  Left - listing (next screen)		
  Right - listing (previous screen)	
  Enter - stop recording => Y/N? / leave record	

  =====================

Záznam/Historie: (Recording/Record)		
------------------------
6/6 Vlhkost 		   | Humidity
                       |
                       |
       GRAPH           |
                       |
                       |
                       |
  32 ÷ 100 %           |
------------------------
  Up - ---                 
  Down - --- 				
  Left - listing (next screen)		
  Right - listing (previous screen)	
  Enter - stop recording => Y/N? / leave record	

  =====================
