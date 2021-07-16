#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 

short
int
unsigned int
float
double
bool
char
void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    short m = 200;
    short n = 3;
    short k = 21;
    int a = 1;
    int b = 23;
    int c = 42;
    unsigned int alpha = 223;
    unsigned int beta = 11;
    unsigned int gamma = 4;
    float x = 5.3f;
    float y = 3.5f;
    float z = 0.2f;
    double xx = 0.00047878f;
    double yy = 0.1237489278f;
    double zz = 3492253.2789237f;
    bool T = true;
    bool F = false;
    char p = 'p';
    char q = 'q';
    char r = 'r';

    ignoreUnused(number, m, n, k, a, b, c, alpha, beta, gamma, x, y, z, xx, yy, zz, T, F, p, q, r); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void injectFuel(int pistonNum, bool turbo = true)
{ 
    ignoreUnused(pistonNum, turbo);
} 
/*
 2)
 */
float displayReadings(float speedometerVal, float odometerVal)
{   
    ignoreUnused(speedometerVal, odometerVal);
    return {};
} 
/*
 3)
 */
void lightSwitch(bool turnOn)
{   
    ignoreUnused(turnOn);
} 
/*
 4)
 */
int checkEngineStatus(int errorNo, bool verbose = false, bool checkOil = true)
{   
    ignoreUnused(errorNo, verbose, checkOil);
    return {};
}
/*
 5)
 */
float checkSpeed(float distancedTravelled, float timeElapasped)
{   
    ignoreUnused(distancedTravelled, timeElapasped);
    return {};
}
/*
 6)
 */
int adjustVolume(bool volUp, int volChange)
{   
    ignoreUnused(volUp, volChange);
    return {};
}
/*
 7)
 */
int changeGear(int currentGear, int targetGear, bool transmissionAuto)
{   
    ignoreUnused(currentGear, targetGear, transmissionAuto);
    return {};
}
/*
 8)
 */
int slowCar(float currentSpeed, float currentAngle, float slowAmount)
{   
    ignoreUnused(currentSpeed, currentAngle, slowAmount);
    return {};
}
/*
 9)
 */
void emergencyEjectSeat(bool eject = true)
{   
    ignoreUnused(eject);
}
/*
 10)
 */
int shootFlameThrower(float angle, int intensity)
{   
    ignoreUnused(angle, intensity);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    injectFuel(3);
    //2)
    float readings = displayReadings(80, 200000);
    //3)
    lightSwitch(true);
    //4)
    int engineStatus = checkEngineStatus(303);
    //5)
    float speed = checkSpeed(500, 10);
    //6)
    int volume = adjustVolume(true, 10);
    //7)
    int gear = changeGear(3, 4, true);
    //8)
    int slowAmount = slowCar(60, 30, 20);
    //9)
    emergencyEjectSeat();
    //10)
    int flames = shootFlameThrower(90, 10);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
