#include <iostream>
#include <string>


using namespace std;




int main()
{



    cout<< "=== Student Grades System ===" << endl << endl ;

    cout<< "1. Add Student" << endl ;
    cout<< "2. Record Grade" << endl ;
    cout<< "3. Display Report" << endl ;
    cout<< "4. Exit" << endl << endl ;


    string name ;

    int grade ;

    string subject ;

    char result_grade ;

    while(true)
    {
        cout<< "Choose an option: " ;

        int option ;

        cin >> option ;

        if (option != 1 && option != 2 && option != 3 && option != 4 )
        {
            cout<<"Invalid input!" << endl ;
        }

        cout<< endl ;



        if (option == 1)
        {

            cout<< "Enter student name: ";



            cin>> name ;



            cout<<"Student "<<name<< " added." << endl << endl ;


        }

        else if ( option == 2 )
        {

            cout<< "Enter subject: ";



            cin >> subject ;


            cout<< "Enter grade: ";



            cin >> grade ;


            cout<<"Grade recoded." << endl << endl ;

        }

        else if ( option == 3 )
        {
            cout<<"Student: "<< name << endl ;

            cout<< subject << ": " << grade << endl ;






            if ( grade >= 85 && grade <= 100 )
            {


                result_grade = 'A' ;


            }


            else if ( grade >= 70 && grade < 85 )
            {



                result_grade = 'B' ;


            }



            else if ( grade >= 50 && grade < 70 )
            {
                char result_grade ;

                result_grade = 'C' ;


            }


            else if (  grade < 50 )
            {
                char result_grade ;

                result_grade = 'F' ;


            }



            cout<<"Average: " << grade << ".0" << "  |  " <<"Grade: " << result_grade << endl << endl ;



        }

        else if (option == 4)
        {
            cout<< "Goodbye!" ;
            break ;

        }



    }

}