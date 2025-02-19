// define a class to store matrics .Write suitable friend functions to add and multiply two matrices.

#include <iostream>
using namespace std;
class matrics
{
    int rows, cols;
    int martrix[10][10];

public:
    matrics(int r, int c)
    {
        rows = r;
        cols = c;
    }
    void get_element()
    {
        cout << " enter the element of the matric: \n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> martrix[i][j];
            }
        }
    }
    friend void display(matrics &obj);
    friend matrics add(matrics &obj1, matrics &obj2);
    friend matrics multi(matrics &obj1, matrics &obj2);
};
matrics add(matrics &obj1, matrics &obj2)
{
    matrics result(obj1.rows, obj1.cols);
        for (int i = 0; i < obj1.rows; i++)
        {
            for (int j = 0; j < obj1.cols; j++)
            {
                result.martrix[i][j] = obj1.martrix[i][j] + obj2.martrix[i][j];
            }
        }
    return result;
}
matrics multi(matrics &obj1, matrics &obj2)
{
    if (obj1.cols != obj2.rows)
    {
        cout << "Matrices cannot be multiplied, incompatible dimensions.\n";
        exit(1);
    }
    matrics result(obj1.rows, obj2.cols);
    for (int i = 0; i < obj1.rows; i++)
    {
        for (int j = 0; j < obj2.cols; j++)
        {
            result.martrix[i][j] = 0;
            for (int k = 0; k < obj1.cols; k++)
            {
                result.martrix[i][j] += obj1.martrix[i][k] * obj2.martrix[k][j];
            }
        }
    }
    return result;
}
void display(matrics &obj)
{
    cout << " the matric: \n";
    for (int i = 0; i < obj.rows; i++)
    {
        for (int j = 0; j < obj.cols; j++)
        {
            cout << obj.martrix[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    matrics m1(2, 3);
    cout << "for m1(2,3) ";
    m1.get_element();
    display(m1);
    matrics m2(2, 2);
    cout << "for m2(2,2) ";
    m2.get_element();
    display(m2);
    matrics m3(2, 3);
    m3 = add(m1, m2);
    display(m3);
    matrics m5(3, 2);
    cout << "for m5(3,2) ";
    m5.get_element();
    display(m5);
    matrics m4(2, 2);
    m4 = multi(m1, m5);
    display(m4);
    return 0;
}