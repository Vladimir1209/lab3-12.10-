#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;
int chekk(int a[], int s)
{
    int b = 0;
    for (int i = 0; i < s; ++i)
    {
        if (a[i] < 0)
        {
            b++;
            break;
        }
    }
    return b;
}
int main()
{
    setlocale(LC_ALL, "Russian");

    while (true)
    {

        int n;
        cout << "Выбор задачи:" << endl;
        cin >> n;
        if (n == 0)
            break;
        switch (n)
        {
        case 1:
        {
            float x[10] = {};
            for (int i = 0; i < 10; ++i)
            {
                x[i] = float(rand() % 151 + (-100));
                cout << x[i] << endl;
            }
            float z;
            cin >> z;
            float const b = x[0];
            cout << "Новый масив:" << endl;
            for (int i = 0; i < 10; ++i)
            {
                float c = x[i];
                x[i] = ((c * 2) - z) / b;
                cout << ((c * 2) - z) / b << endl;
            }

            cout << "---------------------" << endl;
        }
        break;

        case 2:
        {
            float x[10] = {};
            for (int i = 0; i < 10; ++i)
            {
                x[i] = float(rand() % 151 + (-100));
                cout << x[i] << endl;
            }
            int k1, k2, s1, s2;
            float a, c, d, e, f;
            cout << "Введите к1 и к2:" << endl;
            cin >> s1 >> s2;
            cout << "Введите s1 и s2:" << endl;
            cin >> s1 >> s2;
            a = 0;
            c = 0;
            d = 0;
            e = 0;
            f = 0;
            for (int i = 0; i < 10; ++i)
            {
                a = a + x[i];
                c = c + pow(x[i], 2);
                if (i <= 6)
                {
                    d = d + x[i];
                }
                if (i >= k1 & i <= k2)
                {
                    e = e + x[i];
                }
                if (i >= s1 & i <= s2)
                {
                    f = f + x[i];
                }
            }
            cout << "Сумма всех элементов массива: " << a << endl;
            cout << "Сумма всех элементов массива: " << c << endl;
            cout << "Сумма всех элементов массива: " << d << endl;
            cout << "Сумма всех элементов массива: " << e << endl;
            cout << "Сумма всех элементов массива: " << a / 10 << endl;
            cout << "Сумма всех элементов массива: " << f / s2 - s1 << endl;
            cout << "---------------------" << endl;
        }
        break;
        case 3:
        {
            float x[20] = {};
            float b = 0;
            for (int i = 0; i < 20; ++i)
            {
                x[i] = float(rand() % 151 + (-100));
                cout << x[i] << endl;
            }
            for (int i = 2; i >= 0; i--)
            {
                for (int g = 17; g < 20; g++)
                {
                    b = x[i];
                    x[i] = x[g];
                    x[g] = b;
                }
            }
            cout << "---------------------" << endl;
            for (int i = 0; i < 20; ++i)
            {

                cout << x[i] << endl;
            }
        }
        break;
        case 4:
        {
        }
        break;
        case 5:
        {
            string a;
            cin >> a;
            if (a.size() % 2 == 0)
            {
                cout << "Четное" << endl;
            }
            else
            {
                cout << "не четное" << endl;
            }
        }
        break;
        case 6:
        {
            string a;
            string b;
            cin >> a, b;
            if (a.size() > b.size())
            {
                cout << "Фамилия 1 длиннее" << endl;
            }
            else
            {
                cout << "Фамилия 2 длиннее" << endl;
            }
        }
        case 7:
        {
            string a, b, c;
            cin >> a;
            cin >> b;
            cin >> c;
            vector<string> l = {a, b, c};
            int m = 0;
            for (int i = 0; i < 2; ++i)
            {
                if (l[i].size() < l[i + 1].size())
                {
                    m++;
                }
            }
            int mi = 0;
            for (int i = 0; i < 2; ++i)
            {
                if (l[i].size() > l[i + 1].size())
                {
                    mi++;
                }
            }
            cout << "max: " << l[m] << endl;
            cout << "min: " << l[mi] << endl;
        }
        break;
        case 8:
        {
            string a, b;
            b = "";
            cin >> a;
            int m, n;
            cin >> m >> n;
            for (int i = m - 1; i < n; ++i)
            {
                b = b + a[i];
            }
            cout << b << endl;
        }
        break;
        case 9:
        {
            string a;
            int b;
            cin >> a;
            b = a.size();
            for (int i = 0; i < b; ++i)
            {
                a = "*" + a + "*";
            }
            cout << a << endl;
        }
        case 10:
        {
            string a;
            cin >> a;
            string c = "a";
            float A, all;
            int b;
            all = a.size();
            A = 0;
            b = a.size();
            for (int i = 0; i < b; i++)
            {
                if (a[i] == c[0])
                {
                    A++;
                }
            }
            cout << A / (all / 100) << "%" << endl;
        }
        break;
        case 11:
        {
            string a = "Can you can a can as a canner can can a can?";
            string b;

            cout << a << endl;

            for (int i = 0; i < a.size(); ++i)
            {
                if (a.compare(i, 3, "can") == 0)
                {
                    a = a.substr(0, i) + a.substr(i + 3, 100);
                    a = a.insert(i, "newWord");
                    cout << a << endl;
                }
            }
        }
        }
    }
}
