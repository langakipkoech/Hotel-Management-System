#include <iostream>

using namespace std;

int main(){
    int quant;
    int choice;

    //available quantity
    int Qrooms=0, Qpasta = 0, Qnoodles=0, Qchicken=0;
    //food items sold
    int Srooms=0,  Spasta = 0, Snoodles=0, Schicken=0;
    //Total price of items
    int Trooms=0,  Tpasta = 0, Tnoodles=0, Tchicken=0;

    //the variables are initialized and stored in the variables shown below

    cout<<"\n\t Quantity of items we have ";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Pasta available: ";
    cin>>Qpasta;
    cout<<"\n Noodles available: ";
    cin>>Qnoodles;
    cout<<"\n Chicken available: ";
    cin>>Qchicken;


    //create menu to select
    //menu is labelled to m
    m:
    cout<<"\n\t\t\t Please select from the given menu options";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Noodles";
    cout<<"\n 4) Chicken";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";

    //making a selection
    cout<<"\n\n Please enter your choice!";
    cin>> choice;

//add functionality to the choice button using switch
//The switch statement is easier to read than if-else statements.
// overcomes the challenges of the “if-else if” statement that makes compilation difficult because of deep nesting. The switch statement has a fixed depth.
//It allows the best-optimized implementation for faster code execution than the “if-else if” statement.
//It is easy to debug and maintain the programs using switch statements.
//The switch statement has faster execution power.

    switch(choice)
    {
    case 1:
        //user enters the price of the rooms
        cout<<"\n\n Enter the number of rooms you want";
        //the price of the room is stored in a variable called quant
        cin>>quant;
        //if the number of the rooms that is available is greater than the one requested
        //use an if statement to select the case

        if (Qrooms-Srooms >=quant)
        {
            //update the number of the sold rooms
            Srooms=Srooms+quant;
            //the total price of the new rooms
            Trooms=Trooms+quant*2000;
            //display a message
            cout<<"\n\n\t\t "<<quant<<" rooms have been alloted to you";

        }
        else

            cout<<"\n only"<<Qrooms-Srooms<<"have been left in the hotel";
            break;

            case 2:
        //user enters the number of pasta
        cout<<"\n\n Enter the number of pasta you want";
        //the price of the pasta is stored in a variable called quant
        cin>>quant;
        //if the number of the pasta that is available is greater than the one requested
        //use an if statement to select the case

        if (Qpasta-Spasta >=quant)
        {
            //update the number of the sold pasta
            Spasta=Spasta+quant;
            //the total price of the pasta
            Tpasta=Tpasta+quant*203;
            //display a message
            cout<<"\n\n\t\t "<<quant<<" pasta is for you";

        }
        else

            cout<<"\n only"<<Qpasta-Spasta<<"have been left in the hotel";
            break;


            case 3:
                //Display message to the user on the number of noodles available
        cout<<"\n\n Please enter the number of noodles that you need: ";
        //the user input is stored in variable called quant
        cin>>quant;
        //check if the set conditions are satsified
        if (Qnoodles-Snoodles>=quant)
        {
            //update or increment quant of noodles sold
            Snoodles=Snoodles+quant;
            //compute total cost
            Tnoodles=Tnoodles+quant*200;
            //display message
            cout<<"\n\n "<<quant<<"is being prepared for you";

        }
        else
            cout<<"\n\n only "<<Qnoodles-Snoodles<<" noodles remain";
            break;

             case 4:
                //Display message to the user on the number of chicken available
        cout<<"\n\n Please enter the number of chicken that you need: ";
        //the user input is stored in variable called quant
        cin>>quant;
        //check if the set conditions are satsified
        if (Qchicken-Schicken>=quant)
        {
            //update or increment quant of noodles sold
            Schicken=Schicken+quant;
            //compute total cost
            Tchicken=Tchicken+quant*380;
            //display message
            cout<<"\n\n "<<quant<<"is being prepared for you";

        }
        else
            cout<<"\n\n only "<<Qchicken-Schicken<<" chicken remain";
            break;

        case 7:
        //Sales details for rooms
        cout<<"\n\t details of sales and collection ";
        cout << "\n\n number of rooms we had: "<<Qrooms;
        cout << "\n\n number of rooms sold: "<<Srooms;
        cout << "\n\n number of rooms remaining: "<<Qrooms - Srooms;
        cout << "\n\n total collection: "<<Trooms;
        //Sales details for pasta
        cout<<"\n\t details of sales and collection ";
        cout << "\n\n number of pasta we had: "<<Qpasta;
        cout << "\n\n number of pasta sold: "<<Spasta;
        cout << "\n\n number of pasta remaining: "<<Qpasta - Spasta;
        cout << "\n\n total collection: "<<Tpasta;
        //Sales details for noodles
        cout<<"\n\t details of sales and collection ";
        cout << "\n\n number of noodles we had: "<<Qnoodles;
        cout << "\n\n number of noodles sold: "<<Snoodles;
        cout << "\n\n number of noodles remaining: "<<Qnoodles - Snoodles;
        cout << "\n\n total collection: "<<Tnoodles;

        //Sales details for chicken
        cout<<"\n\t details of sales and collection ";
        cout << "\n\n number of chicken we had: "<<Qchicken;
        cout << "\n\n number of chicken sold: "<<Spasta;
        cout << "\n\n number of chicken remaining: "<<Qchicken - Schicken;
        cout << "\n\n total collection: "<<Tchicken;

        case 8:
            exit(0);

        default:
            cout<<"\n please select the numbers mentioned above";

    }
    //The goto statement in C++ is an unconditional jump statement used for transferring the control of a program.
    //It allows the program's execution flow to jump to a specified location within the function.
    //There are two ways to call the goto statement
    goto m;



}

