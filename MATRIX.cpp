#include <iostream>
using namespace std;

int m, n, o, A[20][20], B[20][20], add[20][20], sub[20][20], mul[20][20], transpose[20][20], i, j, k, p = 0, sum = 0;

void matrix1()
{
    cout << "Enter number of rows and column for First matrix:" << endl;
    cin >> m >> n;
    cout << "Enter Element of First matrix:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter element at " << i << "th & " << j << "th  position :" << endl;
            cin >> A[i][j];
        }
    }
    cout << "First matrix is :\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
}

void matrix2()
{
    cout << "Enter Element of Second matrix:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter element at " << i << "th & " << j << "th  position :" << endl;
            cin >> B[i][j];
        }
    }
    cout << "Second matrix is :\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
}

int main()
{
   cout <<endl<< "**********MENU**********" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Transpose" << endl;
    cout << "5. Check matrix is upper triangular or not" << endl;
    cout << "6. Sum of diagonal elements" << endl;
    cout << "7. Exit" << endl;
    cout << "ENTER YOUR COICE: ";
    cin >> o;
    switch (o)
    {
      case 1:
      matrix1();
      matrix2();
      for (i = 0; i < m; i++)
      {
        for (j = 0; j < n; j++)
        {
          add[i][j] = A[i][j] + B[i][j];          }
        }
        cout << "Addition of given matrices is:" << endl;
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
          {
            cout << add[i][j] << "  ";
          }
            cout << endl;
        }
      break;

      case 2:
        matrix1();
        matrix2();
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
          {
            sub[i][j] = A[i][j] - B[i][j];
          }
        }
        cout << "Subtraction of given matrices is:" << endl;
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
          {
            cout << sub[i][j] << "  ";
          }
          cout << endl;
        }
      break;
    
      case 3:
        matrix1();
        matrix2();
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
          {
            for (k = 0; k < n; k++)
            {
              mul[i][j] += A[i][k] * B[k][j];
            }            
          }
        }
        cout << "Multiplication of given matrices is:" << endl;
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
            {
              cout << mul[i][j] << "      ";
            }
          cout << endl;
        }
      break;

      case 4:
         matrix1();
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
          {
            transpose[i][j] = A[j][i];
          }
        }
        cout << "Transpose of given matrix is:" << endl;
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
          {
            cout << transpose[i][j] << "  ";
          }
          cout << endl;
        }
      break;

      case 5:
         matrix1();
        for (i = 1; i < n; i++)
        {
          for (j = 0; j < i; j++)
          {
            if (A[i][j] == 0)
              {
                p = 1;
              } 
            else
             {
                p = 0;
             }
          }
        }
        if (p == 1)
        {
          cout << "Given matrix is Upper triagular matrix" << endl;
        }
        else
        {
          cout << "Given matrix is NOT Upper triagular matrix" << endl;
        }
      break;

      case 6:
        matrix1();
        for (i = 0; i < m; i++)
        {
          for (j = 0; j < n; j++)
          {
            if (A[i] == A[j])
            {
              sum = sum + A[i][j];
            }
          }
        }
        cout << "Sum of diagonal elements of given matrix is: " << sum << endl;
      break;

      case 7:
        exit ;
      break;
    }
  return 0;
}
