Actors: Guest, RegisteredUser, Admin
Use Cases: Browse Movies, Register, Login, Purchase Movie, 
          Watch Movie, Add Movie, Manage Content



Use Case: Browse Movies
ID: UC-001
Actor: RegisteredUser
Description: Registered user browses movies catalogue
Preconditions:
- User is logged into the system
Main Flow:
1. User accesses movies database
2. System displays available movies
3. Student applies filters for desired movie
4. User selects a movie he/she is interested in
5. System shows movie details (trailer, director, cast etc.) and price tag for purchase/rent
6. User proceeds with purchasing selected movie
Alternative Flows:
3a. There is no movie that satisfy all filters:
    3a.1. System informs user about it
    3a.2. System suggests movies that satisfy some of the filters
    3a.3. Use case ends

Postconditions:
- User proceeds with purchase/rent


Use Case: Register
ID: UC-002
Actor: Guest
Description: Guest creates an account for the system
Preconditions:
- Actor is not logged in the system
Main Flow:
1. Guest access sign in page
2. Guest enters required data
3. System verifies data that was entered
4. System sends email with a link that confirms registration
5. Guest confirms registration
6. System confirms registration
7. Guest logs in the system
Alternative Flows:
3a. System didn't verify the entered data
    3a.1 System informs user about it and specify whe 
    3a.2 System suggests to enter correct data
Postconditions: 
- Guest created an account
- Guest is logged in as a RegisteredUser


Use Case: Log in
ID: UC-003
Actor: Guest
Description: Guest logs in the existing account
Preconditions:
- Actor is not logged in the system
- Actor has an account in the system
Main Flow:
1. Guest access log in page
2. Guest enters required data (username and password)
3. System verifies data that was entered
4. Guest logs in the system
Alternative Flows:
3a. System has not found user with given data
    3a.1 System informs user that the data that was entered is invalid
    3a.2 System suggests user to enter correct data
    3a.3 Return to step 2.
Postconditions: 
- Guest is logged in as a RegisteredUser


Use Case: Purchase Movie
ID: UC-004
Actor: RegisteredUser
Description: User purchases a movie
Preconditions:
- User is logged in
- User is on the page of the movie he wants to purchase
Main Flow:
1. User selects "Purchase movie" option
2. User aplies discount code
3. System verifies discount code
4. User selects a payment method
5. User enters required credentials for the selected method
6. System verify credentials
7. User confirms transaction
8. System confirms that it received transactions
9. System send a receipt to the user email
10. System allows user to go to the Watch Movie page for the purchase movie.
Postconditions:
- User purchased a movie
- User recieved a receipt
- User gained access to the movie
- User's history of purchases was updated



Use Case: Watch Movie
ID: UC-005
Actor: RegisteredUser
Description: User wathces a movie
Preconditions:
- User is logged in
- User purchased a movie he/she wants to watch
Main Flow:
1. User selects "Watch movie" option
2. System checks if this movie was purchased
3. System redirects user to the "Wacth Movie" page
4. User gains access to video file via the system
5. User selects video preferences (resolution, subs and dub)
6. User watches the movie
7. When the movie is finished system shows othe movies that can be interesting for the user
Postconditions:
- User wathced the movie


Use Case: Add Movie
ID: UC-006
Actor: Admin
Description: Admin adds new movie to the system
Preconditions:
- Admin is logged in as an admin
Main Flow:
1. Admin selects "Add new movie" option
2. System redirects admin to the "Add movie" page
3. Admin selects video file to be uploaded
4. Admin enters a movie info
5. Admin selects the tags for the movie that will be used by the search filter
6. Admin selects an image for the poster to be uploaded
7. Admin put a price for the movie
8. System informs admin that videofile was successfully uploaded
Postconditions:
- A new movie was uploaded to the system


Use Case: Manage content
ID: UC-007
Actor: Admin
Description: Admin manages existing movies
Preconditions:
- Admin is logged in as an admin
Main Flow:
1. Admin selects "Manage content" option
2. System redirects admin to the "Manage content" page
3. Admin selects a movie to be modified
4. Admin modifies a movie info
5. Admin modifies the tags for the movie that will be used by the search filter
6. Admin modifies an image for the poster to be uploaded
7. Admin modifies a price for the movie
8. System informs admin that changes were successful. 
Postconditions:
- An existing movie has been modified


