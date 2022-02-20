# REPORT
# Requirements

## Introduction
"Airline Reservation systems (ARS) are systems that allow an airline to sell their inventory (seats). It contains information on schedules and fares and contains a database of reservations (or passenger name records) and of tickets issued (if applicable). ABSs are part of passenger service systems (PSS), which are applications supporting the direct contact with the passenger.ABS eventually evolved into the computer reservations system (CRS). A computer reservation system is used for the reservations of a particular airline and interfaces with a global distribution system (GDS) which supports travel agencies and other distribution channels in making reservations for most major airlines in a single system.

## Research
Airline Reservation systems incorporate airline schedules, fare tariffs, passenger reservations and ticket records. An airline's direct distribution works within their own reservation system, as well as pushing out information to the GDS. The second type of direct distribution channel are consumers who use the internet or mobile applications to make their own reservations. Travel agencies and other indirect distribution channels access the same GDS as those accessed by the airline reservation systems, and all messaging is transmitted by a standardized messaging system that functions on two types of messaging that transmit on SITA's high level network (HLN). These messaging types are called Type A [usually EDIFACT format] for real time interactive communication and Type B [TTY] for informational and booking type of messages. Message construction standards set by IATA and ICAO, are global, and apply to more than air transportation. Since airline booking systems are business critical applications, and they are functionally quite complex, the operation of an in-house airline reservation system is relatively expensive.

## Benefits
Airline Reservation systems has a set of benefits. 
Here are few of them:

24/7 booking available for customers.
User-Friendly Interface.
Easy Cancellation Process.
Easy and flexible booking policies for travelers.
Display Terms and Conditions, details and flights to the travelers.
Display the arrangement of seats on the screen thus enabling customers to book seats accordingly.
Real-Time Update.

## Features-Defining Our System
Add airline database.
Add/delete specific flight.
View its own flight,customers of specific flight and update airline info.
Update personal information(name,age).
Stores the entire customer database.

![design png](https://user-images.githubusercontent.com/98866123/153311069-f4f23c33-05b0-4129-8757-2af0fbce41ea.png)

## Explaination
  * Airline Reservation Application have few inbuilt features like:
  * Reserve airline.
  * Cancel flight.
  * Display airline records.
  * Exit.

## Swot Analysis
   ![swot analysis](https://user-images.githubusercontent.com/98866123/153329791-29fd871b-1fc9-4bac-b470-bb82c653ed81.png)
   
## 4W's and 1'H 
 ### Who:
Airline management and department.
 ### What:
The airline reservation system is a web-based booking solution that helps in consolidating data from all airlines through the use of global distribution systems.
 ### When:
The increasing the number of people to travel to the different places.
 ### Where:
This issue is in all parts of the world.
 ### How:
Any manual wrong entry of the data by the person who is managing the airline booking will create a lot of confusion among the airline management and passengers might not get seats even if there was an empty seats.


## Detail requirements
 ### High Level Requirements:
   | ID	  |                   Description	                              | Category     |  Status      |
   |----  |-------------------------------------------------------------|------------  |---------------                                                     
   | HR01 | User shall be able to add new passenger record	             |  Techincal   | 	Implemented
   | HR02	| User shall be able to read a passenger record	              |  Techincal 	 |  Implemented
   | HR03	| User shall be able to read all the passenger record	        |  Techincal   |  Implemented
   | HR04	| User Shall be able to read the number of seats available    | 	Technical   | 	Implemented
   | HR05	| User shall be able to allot the seats to the passengers	    |  Scenario	   |  Implemented
   | HR06	| User shall be able to cancel the seats                      |	 Scenario	   |  Implemented
 
 ### Low level Requirements:
   | ID	  |     Description                                                                      |	HLR ID   |	Status (Implemented/Future) |
   |------|--------------------------------------------------------------------------------------|----------|-----------------------------|
   | LR01 |  New record shall be added by providing all the asked information and the Passenger  |   HR01   |    Implemented              |
   |      |  id should be unique else Passenger record should not be accepted.	                  |          |	                            |            
   | LR02	| Reading Passenger data should be possible by printing all the records available     	| HR02	    |    Implemented              |
   

# Design

## Structural Diagram
   ### High Level Design
  * Architecture Flowchart Diagram
     
     ![Screenshot (51)](https://user-images.githubusercontent.com/98866123/154612181-1d07ff1e-1740-4483-96cb-7e540786f966.png)![Screenshot (52)](https://user-images.githubusercontent.com/98866123/154612305-24949bf4-e1ba-4d41-926b-7816f3ccb4ad.png)

 ### Low Level Design
  * Level One Data Flow Diagram
     
     ![levelone-dfd](https://user-images.githubusercontent.com/98866123/153324378-44e9320b-baf5-42ec-8861-ba362c48e59d.png)



## Behavioural Diagram
 ### High Level Design
  * Use Case Diagram
      
      ![use case diagram](https://user-images.githubusercontent.com/98866123/153323603-f2348596-5847-4d6b-8fe9-60d7612d7fdd.png)
 ### Low Level Design
 * Level zero Data Flow Diagram

     ![levelzero-dfd](https://user-images.githubusercontent.com/98866123/153324588-38b7520a-6cda-4866-b34b-095ec6b91e82.png)
     
     
# TEST PLAN:
 
| Test ID  |       	Description	             |    Exp I/P                |   	Exp O/P	              |           Actual Out	                 |   Pass or Fail |
|----------|---------------------------------|---------------------------|--------------------------|---------------------------------------|----------------|
|  **T_01**	   | Entering into the system        |    3                      |  Display records         |  Display records                      |       	Pass    |
|          |  while choosing correct choice.    	                       |                          |                                       |                |
|  **T_02**    | Asking for correct choice       |    8                      |  Wrong choice            |  Wrong choice                         |       pass     |
|          | while wrong choice is entered   |                           |                          |                                       |                |
|  **T_03**   | To Reserve the airline          | Choice 1, Entering        | Booking Successful!!!    | Booking Successful!!!                 |       pass     |
|          |    accordingly	                 | all	the passenger details    | Enjoy your journey!      |  Enjoy your journey!                  |                |
|          |                                 |                              |Your Reg No is 1 to n	      |  Your Reg No is 1 to n	               |                | 
|  **T_04**   | To cancel the booking           | Choice 2                  | Registration cancelled   | Registration Cancelled                |       pass     |
|  **T_05**   | To display Passenger records    | Choice 3                  | Passenger details        | Passenger details                     |       pass     |
|          |                                 |                           |                          |                                       |                |

**Test plan** Doucmentation is created and output is captured for every possible level Requirements in test case and **verified** succesfully.

# Learning Resoureces
 * Google-basics requirements to book the seat.
 * Managing & booking resoureces-Airlines articles & videos.
 * Futureskill reference videos.
  
# Conclusion
   Created Ticket Booking for Airline successfully with the help of C Language.
   
