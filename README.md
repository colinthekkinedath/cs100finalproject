# Travel Planner
 
Authors:  [Andrew Khadder](https://github.com/khandrew1),
          [Keshav Mannem](https://github.com/KeshavMannem),
          [Colin Thekkindath](https://github.com/colinthekkinedath),
          [David Chong](https://github.com/dchong234)

## Project Description

**General Description:**  
 Our Travel Planner is a multi user platform designed to streamline our user's vacations by providing an all in one hub for their trips. Users will be able to create accounts and from there be able to book flights, hotels, and activites in their desired vacation spot. They will be able to compare prices, hotel choices, and special packages to choose what would be the best for them. They will have access to a schedule for all their events for the duration of their trip and will be able to easily edit it should any new activites come up.

**Program Features**:  
The user will be able to create an account in order to easily track their vacations. They will be able to book flights, hotels and activites through our application and will be able to compare prices and hotel choices to see what is the best for them. Our program will tuhen generate a schedule of their planned vacation that they will be able to easily edit in case anything new would come up.

**Why it is important:**  
 This project is important to us because vacations are really hard to plan and can get messy quick, and we hope this project will be able to make the planning process easier so users can enjoy their vacation without worrying about every little detail. In our personal experiences, our vacations usually get messy due to poor planning and not enough research done before the trip. We hope our application can help remedy some of the stress that comes with planning on a vacation and so our users can simply focus on fun.

**Input/Output:**  
The first thing this program will do is ask a user to create an account or log in to an existing account. Afterwards they will be asked what they would like to do, book a trip, flight, hotel, packages or simply view their schedule. If the user decided to book something they will be prompted to choose a location they would like to travel to. Afterwards they will be given different options and prices to see what works best for them. As soon as they select a package, it will automatically get added to their schedule so they can have easy and quick access to it.

**Languages and Tools:**  
 **C++** - We will primarily code this project using C++  
 **Visual Studio Code** - This is an IDE we will be using in order to write and run our code  
 **Git** - Our version control software we will be using in order to keep our project streamlined, organized, and clean  
 **Github** - Our project will be hosted on Github, free and open source. We will be using its multiple features in order to better collaborate as a team  
### Navigation Diagram
The Navigation Diagram below displays the interface that the user will be interacting with when they want to view the travel planner. They will start with a log in and create an account option, and then they will be able to see the Main Menu. In the Main Menu, they will be allowed to view their trips, view their schedules, and plan a new trip. In the view trips menu, they can see their past and previous trips, as well as cancel future trips. In the schedule menu, the user can add or cancel activities on their trip. In the plan a new trip menu, the user will be able to book a flight, hotel, and trip activities of their choice. 

![image](https://github.com/cs100/final-project-kmann022-akhad007-dchon022-cthek002/assets/54488379/4b8dc62f-a166-44c9-98d8-c720e9902208)

### Screen Layouts

**Main Page**  
This page serves as the main hub before user logs in.
```
---Travel Planner---
1. Login
2. Create Account
Enter an Option:
```

**Login Page**  
This page is opened once the user opts to login.
```
Please Enter Credentials 
Enter Username:
Enter Password:
```

**Create Account Page**  
This page allows the user to create an account.
```
Welcome! Please create an account
Enter a Username:
Enter a Password:
```

**Main Menu**  
This is the main hub once the user logins where they can choose the main options as well as have the option to logout.
```
Welcome USERNAME!
1. View Trips
2. View Schedule
3. Plan Trip
4. Logout
Enter an Option:
```

**View Schedule Page**  
Here the user can view the schedule and add/cancel activities for the trip.
```
Which trip do you want to access? 
(LIST OF USER TRIPS GO HERE)
1. Trip 1
2. Trip 2
3. Etc.
Enter an Option:
```

**Trip Activities Page**
Here the user can add or cancel activities that are on the trip.
```
1. Add Activity
2. Cancel Activity
Enter an Option:
```

**Book Menu Page**  
Here the user can book flights,activities, and hotels
```
1. Book Flight
2. Book Activities
3. Book Hotel
Enter an Option:
```

## Class Diagram  
In our UML, we have 12 classes. The User class is the class that will contain all information about our user, including their name, username, password, as well as a place to store their trips. The AccountHandler class is also related to the User class as it stores a username and password in vectors when creating an account so that Users will be able to login again when the program restarts. We will also have a schedule class that will contain a list of Trip objects in order to easily build a schedule for the user. In order to add items to a trip, a TripHandler class is used to add activities, flights, and hotels that the user wants to have on their trip. We have a Flight, Activity, and Hotel class that will all inherit from the TripItem class through aggregation in order to easily build our Trip for the schedule. The Flights have a destination, origin, and price, while the Activity class has a name and price, and the Hotel class has a name, location, price, and rating. Our Trip class has a printTripItemsList method that will easily print the items in the desired trip. We also have a class for the DummyData which stores data for our Flights, Hotels, and Activties that users can choose from to plan their trip. 

![Trip Planner UML drawio](https://github.com/cs100/final-project-kmann022-akhad007-dchon022-cthek002/assets/54488379/2c95d775-718e-4602-a9b9-a79b47123a9c)
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
Currently this project only runs on Linux/macOS. Windows has not been tested and may result in unexpected results.
### Dependencies
* C++ compiler (g++ is fine)
* Git
* Cmake
* Make
* A terminal

### Step 1
Clone the repo with this command
 ```
 git clone --recursive https://github.com/cs100/final-project-kmann022-akhad007-dchon022-cthek002.git TripPlanner
 ```
 ### Step 2
 CD into the new directory
 ```
 cd TripPlanner/
 ```
 ### Step 3
 Run CMake in the current director in order to generate the build files
 ``` 
 cmake . 
 ```
 ### Step 4
 Run make in the current directory to build the executable
 ``` 
 make 
 ```
 ### Step 5
CD into the bin folder now where you should see the TripPlanner executable
 ``` 
 cd bin/ 
 ```
 ### Step 6
 Run the executable and create an account. Log back in and now start planning!
 ```
 ./TripPlanner 
 ```
 **!!! IMPORTANT !!!**  
 It is crucial that you are inside the bin/ directory before running the executable in order to make sure the program can properly read the data files properly
 
 ## Testing
For our project, we used Unit Testing from the Google Test submodule to test our functions and see if they were functioning properly. We were able to add tests for the most important part of our projects, incluiding the Flight, Hotel, Activity, Trip, Schedule, and User classes. All the tests have passed, and we used a combination of ASSERT and EXPECT to ensure that our tests were diverse. Additionally, we continually used Valgrind to ensure that there were no memory leaks within our project, and this was used after every use of a pointer was created. We attempted to test every function we have, and the ones that were private or void were able tobe tested through our runs of adding various inputs when testing our overall project.
