#include " FractionCalculator.h"

 FractionCalculator:: FractionCalculator()
{
    mainMenu();
}

void FractionCalculator:: mainMenu(){
    int choice;
    bool menuFlag = true;
    Fraction num1,num2;
    Fraction num3;
    while (menuFlag){
        mainMenuMsg();
        cin>>choice;
        switch(choice){
            case 1:
                {
                    cin >> num1>>num2;
                    num3 = num1 + num2 ;
                    cout<< num3;
                }
            break;
            case 2:
                cin >> num1>>num2;
                num3 = num1 - num2 ;
                cout<< num3;
                break;
            case 3:
                cin>>num1>>num2;
                num3 = num1 * num2;
                cout<< num3;
                break;
            case 4:
                cin>>num1>>num2;
                num3 = num1 / num2;
                cout<< num3;
                break;
            case 5:
                compareMenu(num1,num2);
                break;
            case 6:
                menuFlag = false;
                break;
        }
    }
    resFraction = num3;
}
void FractionCalculator::compareMenu(Fraction& num1,Fraction& num2){
    bool compFlag = true;
    while (compFlag){
        compareMenuMsg();
        bool result;
        int choice;
        cin>>choice;
        switch(choice){
            case 1:
                cin>>num1>>num2;
                result = num1 < num2;
                compResult(result);
                break;
            case 2:
                cin>>num1>>num2;
                result = num1 > num2;
                compResult(result);
                break;
            case 3:
                cin>>num1>>num2;
                result = ( num1 == num2 );
                compResult(result);
                break;
            case 4:
                {
                    cin>>num1>>num2;
                    result = ( num1 <=num2 );
                    compResult(result);
                }
                break;
            case 5:
                cin>>num1>>num2;
                result = (num1 >= num2);
                compResult(result);
                break;
            case 6:
                compFlag = false;
                break;
        }
    }
}
void FractionCalculator:: mainMenuMsg(){
    cout<< "Welcome to FCI Fraction Calculator \n"
        <<"1- Perform Fraction Addition \n"
        <<"2- Perform Fraction Subtraction \n"
        <<"3- Perform Fraction Multiplication \n"
        <<"4- perform Fraction Division \n"
        <<"5- Perform Fraction comparing \n"
        <<"6- Exit \n";
}
void FractionCalculator:: compareMenuMsg(){
    cout<< "choose from the below Comparing operations \n"
        << "1- Less than ' < '  \n"
        << "2- Greater than ' > ' \n"
        << "3- equal ' = ' \n"
        << "4- Less than or equal ' <= ' \n"
        << "5- Greater than or equal ' >= ' \n"
        << "6- Back to the main menu \n";
}
void FractionCalculator:: compResult(bool status){
    if (status)
        cout<< "True \n";
    else
        cout<< "False \n";
}

