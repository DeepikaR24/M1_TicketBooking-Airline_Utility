# Report
 The project Requiements, Architecture, Test plan and others is documented in a above file.

# REQUIREMENTS
## Introduction
Airline Reservation systems (ARS) are systems that permit associate degree airline to sell their seats. It contains info on schedules and fares and contains a information of reservations (or traveller name records) and of tickets issued (if applicable). ABSs are a part of traveller service systems (PSS), that ar applications supporting the direct contact with the traveller.ABS eventually evolved into the pc reservations system (CRS). A pc reservation system is employed for the reservations of a selected airline and interfaces with a world distribution system (GDS) that supports travel agencies and different distribution channels in creating booking for many major airlines in an exceedingly single system.

## Objectives
* To book airline tickets within minutes.
* Display airline records which helps to track the seat status of flight.
* This booking system is more required and helpful in this pandemic situation.
## Research
Airline booking frameworks consolidate aircraft plans, admission levies, traveler reservations and ticket records. A carrier's immediate conveyance works inside their own booking framework, as well as pushing out data to the GDS. The second sort of direct conveyance channel are shoppers who utilize the web or versatile applications to make their own bookings. Travel services channels access similar GDS as those got to by the carrier reservation frameworks, and all informing is communicated by a normalized informing framework that capacities on two kinds of informing that send on SITA's general organization (HLN). These informing types are called Type A [usually EDIFACT format] for continuous intuitive correspondence and Type B [TTY] for enlightening and booking sort of messages. Message development norms set by IATA and ICAO, are worldwide, and apply to more than air transportation. Since airline booking frameworks are business basic applications, and they are practically very mind boggling, the activity of an in-house airline booking framework is somewhat costly.
## Cost
  Requires High Cost for global implementation and maintainance.
## Defining  Our System
 ![design png](https://user-images.githubusercontent.com/98866123/153311069-f4f23c33-05b0-4129-8757-2af0fbce41ea.png)
## Explanation
* Add aircraft data set.
* Add/erase explicit aircraft.
* View its passenger of explicit flight and update flight data.
* Update passenger information(name,age,passport details,destination).
* Stores the whole passenger information base as another record.
## Features
  * Book airline ticket.
  * Cancel booked flight ticket.
  * Display airline records.
  * Exit.
 ## SWOT Analysis
   ![swot analysis](https://user-images.githubusercontent.com/98866123/153329791-29fd871b-1fc9-4bac-b470-bb82c653ed81.png)
   
 ## 4W's and 1'H 
 #### Who:
Airline management and department are responsible for booking management and anyone can book the tickets to travel.
 #### Why:
Year by year flight passengers are increasing, as technologies are advanced so this the best system to follow to book without a queue.
 #### When:
Book the ticket when needed, 24/7 booking available to travel.
 #### Where:
In this pandemic situation this ticket booking for airline system helps to book the ticket to travel via flights safely.
 #### How:
Passengers and their passport details, travel location and timing are much enough to book the ticket to fly.

## Detail requirements
 #### High Level Requirements:
   | ID	  |                   Description	                              |  Status      |
   |----  |-------------------------------------------------------------|---------------                                                     
   | HLR01 | User should have the option to add new traveler record	            | 	Implemented
   | HLR02	| User should have the option to read all passenger record	            	|  Implemented
   | HLR03	| User should be able to read the number of seats available 	        |  Implemented
   | HLR04	| User should be able to allot the seats                 	  | 	Implemented
   | HLR05	| User should be able to cancel the seats                    |  Implemented
   
 
 #### Low level Requirements:
   | ID	  |     Description                                                                      |	HLR ID   |	Status (Implemented/Future) |
   |------|--------------------------------------------------------------------------------------|----------|-----------------------------|
   | LLR01 |  New record shall be added by giving all the asked data and the Passenger id         | HLR01     |   Implemented
   |       |   should be exceptional else Passenger record ought not be acknowledged.              |          |	                            |            
   | LLR02	| Perusing Passenger information will be conceivable by printing every one of the records available 	| HLR02	    |    Implemented              |
   
## Advantages
* Easy mode of ticket booking and payment.
* 24/7 ticket booking and customer support available.
* Accessing through Mobile, very fast and convenient.
* Save time and discounts over tickets.
* Provides each and every flight details.
* Ticket booking available for both Domestic and International Airlines.
* Able to view flight schedules and live tracking.
* We able to compare price of ticket, rating & review and choose the flight accordingly. 
* Growth of airline business and travel industry.
* Real time updates of flights.
* Easy Cancellation of ticket by single click.
* Easy Refunds policies are available after Cancellation. 
## Disadvantages
* Need of internet access.
* Software glitch may occur during booking tickets.
* While paying online if network issues happen gives confusion whether you paid or have to.
* There may be mislead of twice booking the tickets when there is network issues.
## Application
* In Domestic and International Airlines.
## DESIGN

### Structural Diagram
 #### 1) High Level Design
 * Class Diagram
  
  ![str class diag](https://user-images.githubusercontent.com/98866123/156203678-190bf19e-1271-4d03-8dc4-13e161a4430f.png)

 #### 2) Low Level Design
  * Component Diagram
     
  ![str comp diag](https://user-images.githubusercontent.com/98866123/156204378-4b3b698a-08cc-4744-a76c-da430f9d7b17.png)

### Behavioral Diagram
 #### 1) High Level Design
  * Sequence Diagram
  ![Behavi seq Diag](https://user-images.githubusercontent.com/98866123/156209514-db943e2b-6193-4fcc-952f-20c112d810b8.png)

      
 #### 2) Low Level Design
  * User Case Diagram
  
  ![use case diagram](https://user-images.githubusercontent.com/98866123/156205978-ab73b921-b4c0-4820-b301-269ebd1b669a.png)
  
 # TEST PLAN 
 * High Level Test plan
 
 ![nTHL](https://user-images.githubusercontent.com/98866123/156668871-f5e2431f-384b-4dda-b726-d77b9ae9aa63.png)


 
 * Low Level Test plan
  
  ![nTLL](https://user-images.githubusercontent.com/98866123/156670594-8f0bb4b5-7eda-41d8-86ac-3bdc42e1b41c.png)
  
## Conclusion
 Airline Booking Ticket are easily possible for both domestic & international airlines. 
 Able to store & maintain the records of passengers in database which can be retrieve the data easily whenever wanted.
## Learning Resources
 * Google-basics requirements to book the seat.
 * Managing & booking resources-Airlines articles & videos.
 * Futureskill reference videos.
 

