
#include "my_data.h"

/**
    CLASS      : IF-42-04
    NAME       : Abdullah Hadi
    STUDENT ID : 1301183430
**/

mytype create_data()
{
    /**
     TODO:  receive input FROM USER
            and assign the value of new data
    */
    mytype d;
    // ===========================
    //
    cout<<"ID = ";
    cin>>d.ID;
    cout<<"Name = ";
    cin>>d.name;
    cout<<"Rank = ";
    cin>>d.Rank;
    cout<<"Score = ";
    cin>>d.score;
    // ===========================
    return d;
}

void view_data(mytype d)
{
    /**
     TODO:  view the content of data d
     it will be called when print_info function is invoked
    */

    // ===========================
    //
    cout<<d.ID<<" ";
    cout<<d.name<<" ";
    cout<<d.Rank<<" ";
    cout<<d.score<<endl;
    // ===========================
}


void edit_data(mytype &d)
{
    /**
     * TODO:  edit the value of data d,
     *       receive input FROM USER
     *       the ID must NOT be modified
    */

    // ===========================
    cout<<"Name  = ";
    cin>>d.name;
    cout<<"Rank  = ";
    cin>>d.Rank;
    cout<<"Score = ";
    cin>>d.score;
    // ===========================
}

