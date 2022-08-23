// Program updated using 08/22/2022 currency values
// Source Code Written by: Victor Moraes

//*********************************************************
// BUILD 1:
//  06/19/2022:
//  Start to code. Menu function created, added currency options and switch statement with nested if statements.
//  Did a long troubleshooting with the conditional statements. Turns out I was using and assignment (=) instead of equal (==).
//  While loop not working perfectly. Need to improve on that.
//  Currently the only option that is fully functional is the --USD-- currency. Still need to finish BRL(Reais), EUR(Euro) and JPY(Ien) options.
//*********************************************************
// 06/21/2022:
// Changed convert_value variable from being declared in every if statement to just declaring it before showMenu() function is called. Less code, same result.
// Still need to work on the while loop...
// Also need to check on some english typos...
// Just realized that cin.ignore() is not working. Wonder why...
//*********************************************************
// 07/10/2022
// Finally had some time to came back to this.
// While loop fixed. Now the user can restart the whole process.
// Added "Exit" option.
// Cleaned up the code. Looking fresh.
//*********************************************************
// 08/05/2022
// Did some tweaking on the code's appearance.
// Stopped using 'namespace std'
// Took a while to change everything but it's working!
//*********************************************************

#include <iostream>
#include <cstdlib>

void clear_screen()
{
#ifdef _WIN32
    std::system("cls");
#else
    // Assume POSIX
    std::system("clear");
#endif
}

void showMenu()
{
    std::cout << "*********** Welcome to Victor's Currency Conventer! *********** " << std::endl;
    std::cout << "This is a open source project. Feel free to mess with it! Add a new currency or tweak the app a little. It's up to you!" << std::endl;
    std::cout << "Choose the currency you want to use and convert: " << std::endl;
    std::cout << "1 - USD\n2 - BRL\n3 - EUR\n4 - JYP\n5 - Exit" << std::endl;
}

int main()
{
    char restart{};
    do
    {
        long int currency_choice{};
        long int currency_convertion{};
        double convert_value{};

        showMenu();
        std::cout << "Choose: ";
        std::cin >> currency_choice;

        switch (currency_choice)
        {
        case 1: // USD
            std::cout << "You chose USD. Now select the currency you want to convert USD to: " << std::endl;
            std::cout << "1 - BRL\n2 - EUR\n3 - JYP" << std::endl;
            std::cout << "Choose: ";
            std::cin >> currency_convertion;
            if (currency_convertion == 1)
            {
                clear_screen();
                const double USD_to_BRL(5.17);
                std::cout << "You chose to convert USD to BRL. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of USD you want converted to  BRL: ";
                std::cin >> convert_value;
                std::cout << convert_value << " USD in BRL is: ";
                std::cout << convert_value * USD_to_BRL << " BRL" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 2)
            {
                clear_screen();
                const double USD_to_EUR{0.98};
                std::cout << "You chose to convert USD to EUR. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of USD you want converted to EUR: ";
                std::cin >> convert_value;
                std::cout << convert_value << " USD in EUR is: ";
                std::cout << convert_value * USD_to_EUR << " EUR" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 3)
            {
                clear_screen();
                const double USD_to_JPY{137.27};
                std::cout << "You chose to convert USD to JPY. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of USD you want converted to JPY: ";
                std::cin >> convert_value;
                std::cout << convert_value << " USD in JPY is: ";
                std::cout << convert_value * USD_to_JPY << " JPY" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else
            {
                std::cout << "Invalid input...";
            }
            break;

        case 2: //  BRL
            std::cout << "You chose BRL. Now select the currency you want to convert BRL to: " << std::endl;
            std::cout << "1 - USD\n2 - EUR\n3 - JYP" << std::endl;
            std::cout << "Choose: ";
            std::cin >> currency_convertion;
            if (currency_convertion == 1)
            {
                clear_screen();
                const double BRL_to_USD(0.19);
                std::cout << "You chose to convert BRL to USD. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of BRL you want converted to USD: ";
                std::cin >> convert_value;
                std::cout << convert_value << " BRL in USD is: ";
                std::cout << convert_value * BRL_to_USD << " USD" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 2)
            {
                clear_screen();
                const double BRL_to_EUR{0.19};
                std::cout << "You chose to convert BRL to EUR. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of BRL you want converted to EUR: ";
                std::cin >> convert_value;
                std::cout << convert_value << " BRL in EUR is: ";
                std::cout << convert_value * BRL_to_EUR << " EUR" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 3)
            {
                clear_screen();
                const double BRL_to_JPY{26.56};
                std::cout << "You chose to convert BRL to JPY. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of BRL you want converted to JPY: ";
                std::cin >> convert_value;
                std::cout << convert_value << " BRL in JPY is: ";
                std::cout << convert_value * BRL_to_JPY << " JPY" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else
            {
                std::cout << "Invalid input...";
            }
            break;

        case 3: // EUR
            std::cout << "You chose EUR. Now select the currency you want to convert EUR to: " << std::endl;
            std::cout << "1 - USD\n2 - BRL\n3 - JPY" << std::endl;
            std::cout << "Choose: ";
            std::cin >> currency_convertion;
            if (currency_convertion == 1)
            {
                clear_screen();
                const double EUR_to_USD(0.98);
                std::cout << "You chose to convert EUR to USD. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of EUR you want converted to USD: ";
                std::cin >> convert_value;
                std::cout << convert_value << " EUR in USD is: ";
                std::cout << convert_value * EUR_to_USD << " USD" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 2)
            {
                clear_screen();
                const double EUR_to_BRL{5.19};
                std::cout << "You chose to convert EUR to BRL. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of EUR you want converted to BRL: ";
                std::cin >> convert_value;
                std::cout << convert_value << " EUR in BRL is: ";
                std::cout << convert_value * EUR_to_BRL << " BRL" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 3)
            {
                clear_screen();
                const double EUR_to_JPY{137.81};
                std::cout << "You chose to convert EUR to JPY. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of EUR you want converted to JPY: ";
                std::cin >> convert_value;
                std::cout << convert_value << " JPY in BRL is: ";
                std::cout << convert_value * EUR_to_JPY << " JPY" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else
            {
                std::cout << "Invalid input...";
            }
            break;

        case 4: // JPY
            std::cout << "You chose JPY. Now select the currency you want to convert JPY to: " << std::endl;
            std::cout << "1 - USD\n2 - EUR\n3 - BRL" << std::endl;
            std::cout << "Choose: ";
            std::cin >> currency_convertion;
            if (currency_convertion == 1)
            {
                clear_screen();
                const double JPY_to_USD(0.0073);
                std::cout << "You chose to convert JPY to USD. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of JPY you want converted to USD: ";
                std::cin >> convert_value;
                std::cout << convert_value << " JPY in USD is: ";
                std::cout << convert_value * JPY_to_USD << " USD" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 2)
            {
                clear_screen();
                const double JPY_to_EUR{0.0073};
                std::cout << "You chose to convert JPY to EUR. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of JPY you want converted to EUR: ";
                std::cin >> convert_value;
                std::cout << convert_value << " JPY in EUR is: ";
                std::cout << convert_value * JPY_to_EUR << " EUR" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else if (currency_convertion == 3)
            {
                clear_screen();
                const double JPY_to_BRL{0.038};
                std::cout << "You chose to convert JPY to BRL. Press enter to continue..." << std::endl;
                std::cin.ignore();
                std::cout << "Insert the amount of JPY you want converted to BRL: ";
                std::cin >> convert_value;
                std::cout << convert_value << " JPY in BRL is: ";
                std::cout << convert_value * JPY_to_BRL << " BRL" << std::endl;
                std::cout << "Do you want to try again? (y/n) " << std::endl;
                std::cout << "Choose: ";
                std::cin >> restart;
            }
            else
            {
                std::cout << "Invalid input..." << std::endl;
                std::cout << std::endl;
            }
            break;
        case 5:
            return 0;
        }

    } while (restart != 'n');

    return 0;
}