
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
try {

// 1.
   cout << "1. " << "success" << endl;
// 2.
   cout << "2. " << "Success!" << '\n';
// 3.
   cout << "3. " << "Success" << '\n';
// 4.
   cout << "4. " << "success" <<  '\n';

//5
   string res = "7";
   vector<string> v(10);
   v[5] = res;

   cout << "5. " << "Success" << '\n';

//6
   vector<int> v1(10);
   v1[5] = 7;
   if(v1[5] == 7) cout << "6. " << "success" <<  '\n';

//7
   bool cond = true;
   if (cond) cout << "7. " << "success" <<  '\n';
   else cout << " Fail ! \n" ;

//8
   bool c = false;
   if (!c) cout << "8. " << "success" <<  '\n';
   else cout << "Fail ! \n" ;

//9
   string s = "аре" ;
   bool c1 = "fool" < s ;
   if (c1) cout << "9. " << "Success ! \n" ;

//10
   string s1 = "аре" ;
   if ( s != "fool" ) cout << "10. " << "Success ! \n" ;

//11
    string s2 = "аре" ;
    if ( s2 != "fool " ) cout << "11. " << "Success ! \n" ;

//12
    string s3 = "аре" ;
    if ( s != "fool" ) cout << "12. " << "Success ! \n" ;

//13
    vector<char> v2(5);
    for (unsigned int i = 0 ; i < v2.size(); i++)
        cout << "13. " << " Success! \n" ;

//14
    vector<char> v3(5);
    for (unsigned int i = 0 ; i < v3.size(); ++i)
        cout << "14. " << "Success! \n" ;

//15
    string s15 = " Success! \n" ;
    for ( int i=0 ; i<6 ; ++i )
        cout << "15. " << s15;

//16
    bool a16 = true;
    if (a16)
        cout << "16. " << " Success! \n " ;
    else
        cout << " Fail! \n " ;

//17
    int x17 = 2000 ;
    int c17 = x17;
    if (c17 == 2000)
        cout << "17. " << "Success! \n" ;

//18
    string s18 = "Success! \n";
    for ( int i=0 ; i<10 ; ++i)
        cout << "18. " << s18 ;
//19
    vector<int> v19 (5);
    for(int i = 0; i < v19.size(); i++)
        cout << "19. " << "Success! \n" ;

//20
    int i = 0;
    int j = 9;
    while ( i<j )
    {
        if ( i < j )
            cout << "20. " << "Success! \n" ;
        ++i;
    }

//21
    int x21 = 2;
    double d = 5 / ( x21 + 2 );
    double c21 = 2 * x21 + 0.5;
    if (d != c21 )
        cout << "21. "<<"Success! \n" ;

//22
    vector<string> s22{"Success\n"};
    for(int i = 0; i < 10; i++)
    {
        cout << "22. " << s22[0] ;
    }

//23
    int i23 = 0;
    int j23 = 10;
    while (i23<j23)
    {
        if (i23<j23) cout << "23. "<<"Success! \n" ;
        ++i23;
    }

//24
    int x24 = 4;
    double d24 = 5 / (x24-2);
    double c24 = 2*x24+0.5;
    if (d24 != c24) cout << "24. "<<"Success! \n" ;

//25
    cout << "25. "<<"Success! \n" ;



    system("pause");
    return 0;
    }



    catch (exception& e) {
        cerr << "Ошибка " << e.what()<< '\n';
        system("pause");
        return 1;
    }
