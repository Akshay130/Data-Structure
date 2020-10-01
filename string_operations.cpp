#include <iostream>
#include <string>
using namespace std;

char s1[20], s2[20], s[20];
int m = 0, len1 = 0, len2 = 0, k = 0, y, j = 0, flag = 0, loc = 0, q = 0;
char s4[20], s5[20], z = 'y';

void getStr1()
{
    cout << "Enter the string" << endl;
    cin >> s;
}
void getStr2()
{
    cout << "Enter the string 1" << endl;
    cin >> s1;
    cout << "Enter the string 2" << endl;
    cin >> s2;
}
void getStr3()

{
    cout << "Enter the string 1" << endl;
    cin >> s4;
    cout << "Enter the string 2" << endl;
    cin >> s5;
     while (s5[q] != '\0')
            {
                len2++;
                q++;
            }
}


main()
{
    int c, len = 0, i = 0, size;
    {
    cout << endl << "Do you want to continue ? (y/n)" << endl;
    cout << "Press 'y' to continue or Press other characters to exit" << endl;
    cin >> z;
    }
    if (z == 'y')
    {
        cout << "\nMENU\n1.Length\n2.Reverse\n3.Copy\n4.Compare\n5.Concatinate\n6.Substring\n7.Exit\nEnter your choice:-\n";
        cin >> c;

        switch (c)
        {
        case 1:
            getStr1();
            while (s[i] != '\0')
            {
                len++;
                i++;
            }
            cout << "length of string is:- " << len << endl;

        
            break;

        case 2:
            getStr1();
            cout << "Reverse of string:- ";
            size = 20;
            for (i = size; i >= 0; i--)
            {
                cout << s[i];
            }
            
            break;

        case 3:
            getStr1();
            cout << "Copied String is:-  " << endl;
            for (i = 0; i < 20; i++)
            {
                s2[i] = s[i];
                cout << s2[i];
            }
            
            break;
        case 4:
            getStr2();
            for (i = 0; i < 20; i++)
            {
                if (s1[i] != s2[i])
                {
                    m = 1;
                    break;
                }
                else
                {
                    m = 0;
                }
            }
            if (m == 0)
            {
                cout << "Strings are equal\n";
            }

            else
            {
                cout << "strigs are not equal\n";
            }
            
            break;
        case 5:
            getStr2();
            while (s1[i] != '\0')
            {
                len1++;
                i++;
            }
            i = 0;
            while (s2[i] != '\0')
            {
                len2++;
                i++;
            }
            {
                for (i = 0; i <= len2; i++)
                {
                    s1[len1 + i] = s2[i];
                }
            }
            cout << "Concatenate string is:- " << s1 << endl;
        
            break;
        case 6:
            getStr3();
           
            k = 0;

            for (int q = 0; s4[q] != '\0'; q++)
            {
                int k = 0;
                y = q;
                while (s4[y] == s5[j])
                {
                    k++;
                    j++;
                    y++;
                    if (k == len2)
                    {
                        flag = 1;
                        loc = q + 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                cout << "Substring found at position  " << loc << endl;
            }
            else
            {
                cout << "Substring not found" << endl;
            }
            
            break;
            return 0;
        }
    }
}
