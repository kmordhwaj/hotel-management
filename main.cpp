#include <iostream>
using namespace std;

int main()
{

    int quant;
    int choice;

    // quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodle = 0, Qshake = 0, Qpizza = 0;

    // sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodle = 0, Sshake = 0, Spizza = 0;

    // price
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodle = 0, Total_shake = 0, Total_pizza = 0;

    cout << "\n Quantity of Items we have";
    cout << "\n\t Rooms available:";
    cin >> Qrooms;
    cout << "\n\t Quantity Of pasta:";
    cin >> Qpasta;
    cout << "\n\t Quantity Of burger:";
    cin >> Qburger;
    cout << "\n\t Quantity Of noodle:";
    cin >> Qnoodle;
    cout << "\n\t Quantity Of shake:";
    cin >> Qshake;
    cout << "\n\t Quantity Of pizza:";
    cin >> Qpizza;

m:
    cout << "\n\n Please select from the menu options ";
    cout << "\n\t1) Rooms";
    cout << "\n\t2) Pasta";
    cout << "\n\t3) Burger";
    cout << "\n\t4) Noodle";
    cout << "\n\t5) Shake";
    cout << "\n\t6) Pizza";
    cout << "\n\t7) Information regarding sales";
    cout << "\n\t8) Exit";

    cout << "\n\n\t Please enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\t Please enter the number of rooms you want: ";
        cin >> quant;

        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 3000;
            cout << "\n\n\t" << quant << " room/rooms have been alloted to you!";
        }
        else
            cout << "\n\n\tSorry! Only " << Qrooms - Srooms << " rooms are remaining in hotel to book";
        break;

    case 2:
        cout << "\n\t How many plate of pasta do you want: ";
        cin >> quant;

        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 200;
            cout << "\n\n\t" << quant << " plate pasta have been served to you!";
        }
        else
            cout << "\n\n\tSorry! Only " << Qpasta - Spasta << " plate pasta are remaining in hotel";
        break;

    case 3:
        cout << "\n\t How many Burgers do you want: ";
        cin >> quant;

        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 120;
            cout << "\n\n\t" << quant << " burger have been served to you!";
        }
        else
            cout << "\n\n\tSorry! Only " << Qburger - Sburger << " burgers are remaining in hotel";
        break;

    case 4:
        cout << "\n\t How many plate of noodles do you want: ";
        cin >> quant;

        if (Qnoodle - Snoodle >= quant)
        {
            Snoodle = Snoodle + quant;
            Total_noodle = Total_noodle + quant * 150;
            cout << "\n\n\t" << quant << " plate noodles have been served to you!";
        }
        else
            cout << "\n\n\tSorry! Only " << Qnoodle - Snoodle << " plate noodles are remaining in hotel";
        break;

    case 5:
        cout << "\n\t How many glass of Shake do you want: ";
        cin >> quant;

        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * 120;
            cout << "\n\n\t" << quant << " glass of shakes have been served to you!";
        }
        else
            cout << "\n\n\tSorry! Only " << Qshake - Sshake << " glass shakes are remaining in hotel";
        break;

    case 6:
        cout << "\n\t How many Pizza do you want: ";
        cin >> quant;

        if (Qpizza - Spizza >= quant)
        {
            Spizza = Spizza + quant;
            Total_pizza = Total_pizza + quant * 150;
            cout << "\n\n\t" << quant << " pizza have been served to you!";
        }
        else
            cout << "\n\n\tSorry! Only " << Qpizza - Spizza << " pizza are remaining in hotel";
        break;

    case 7:
        cout << "\n\t Details of sales and collection:";

        cout << "\n\n\t\t Number of rooms we had: " << Qrooms;
        cout << "\n\t\t Number of rooms we gave for rent: " << Srooms;
        cout << "\n\t\t Remaining rooms: " << Qrooms - Srooms;
        cout << "\n\t\t Total collections from rooms for the day: " << Total_rooms;

        cout << "\n\n\t\t Number of plates of pasta we had: " << Qpasta;
        cout << "\n\t\t Number of plates of pasta we sold today: " << Spasta;
        cout << "\n\t\t Remaining plates of pasta: " << Qpasta - Spasta;
        cout << "\n\t\t Total collections from pasta for the day: " << Total_pasta;

        cout << "\n\n\t\t Number of burgers we had: " << Qburger;
        cout << "\n\t\t Number of burgers we sold today: " << Sburger;
        cout << "\n\t\t Remaining burgers: " << Qburger - Sburger;
        cout << "\n\t\t Total collections from burgers for the day: " << Total_burger;

        cout << "\n\n\t\t Number of plates of noodles we had: " << Qnoodle;
        cout << "\n\t\t Number of plates of noodles we sold today: " << Snoodle;
        cout << "\n\t\t Remaining plates of noodles: " << Qnoodle - Snoodle;
        cout << "\n\t\t Total collections from noodles for the day: " << Total_noodle;

        cout << "\n\n\t\t Number of glass of shakes we had: " << Qshake;
        cout << "\n\t\t Number of glass of shakes we sold today: " << Sshake;
        cout << "\n\t\t Remaining glass of shakes: " << Qshake - Sshake;
        cout << "\n\t\t Total collections from shakes for the day: " << Total_shake;

        cout << "\n\n\t\t Number of pizza we had: " << Qpizza;
        cout << "\n\t\t Number of pizza we sold today: " << Spizza;
        cout << "\n\t\t Remaining pizza: " << Qpizza - Spizza;
        cout << "\n\t\t Total collections from pizza for the day: " << Total_pizza;

        cout << "\n\n\t\t Total collections for the day: " << Total_rooms + Total_pasta + Total_burger + Total_noodle + Total_shake + Total_pizza;

        break;

    case 8:
        exit(0);

    default:
        cout << "\n\n Please select the numbers mentioned above!";
    }
    goto m;
}