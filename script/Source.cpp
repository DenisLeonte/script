#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

string filename = "script.denis";
ifstream in(filename.c_str());
string op;
map<string, int> variables;

int logic(string op)
{
    if (strcmp(op.c_str(), "var") == 0)
    {
        string vaar;
        int val;
        in >> vaar;
        in >> val;
        variables[vaar] = val;
    }
    if (strcmp(op.c_str(), "add") == 0)
    {
        string a, b;
        int a1, b1;
        in >> a >> b;
        bool a_num = true;
        bool b_num = true;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
            {
                a_num = false;
                break;
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            if ((b[i] >= 97 && b[i] <= 122) || (b[i] >= 65 && b[i] <= 90))
            {
                b_num = false;
                break;
            }
        }
        if (a_num)
            a1 = stoi(a);
        else
            a1 = variables[a];
        if (b_num)
            b1 = stoi(b);
        else
            b1 = variables[b];
        return a1 + b1;
    }
    if (strcmp(op.c_str(), "sub") == 0)
    {
        string a, b;
        int a1, b1;
        in >> a >> b;
        bool a_num = true;
        bool b_num = true;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
            {
                a_num = false;
                break;
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            if ((b[i] >= 97 && b[i] <= 122) || (b[i] >= 65 && b[i] <= 90))
            {
                b_num = false;
                break;
            }
        }
        if (a_num)
            a1 = stoi(a);
        else
            a1 = variables[a];
        if (b_num)
            b1 = stoi(b);
        else
            b1 = variables[b]; 
        return a1 - b1;

    }
    if (strcmp(op.c_str(), "mul") == 0)
    {
        string a, b;
        int a1, b1;
        in >> a >> b;
        bool a_num = true;
        bool b_num = true;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
            {
                a_num = false;
                break;
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            if ((b[i] >= 97 && b[i] <= 122) || (b[i] >= 65 && b[i] <= 90))
            {
                b_num = false;
                break;
            }
        }
        if (a_num)
            a1 = stoi(a);
        else
            a1 = variables[a];
        if (b_num)
            b1 = stoi(b);
        else
            b1 = variables[b];
        return a1 * b1;
    }
    if (strcmp(op.c_str(), "div") == 0)
    {
        string a, b;
        int a1, b1;
        in >> a >> b;
        bool a_num = true;
        bool b_num = true;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
            {
                a_num = false;
                break;
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            if ((b[i] >= 97 && b[i] <= 122) || (b[i] >= 65 && b[i] <= 90))
            {
                b_num = false;
                break;
            }
        }
        if (a_num)
            a1 = stoi(a);
        else
            a1 = variables[a];
        if (b_num)
            b1 = stoi(b);
        else
            b1 = variables[b];
        return a1 / b1;
    }
    if (strcmp(op.c_str(), "mod") == 0)
    {
        string a, b;
        int a1, b1;
        in >> a >> b;
        bool a_num = true;
        bool b_num = true;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
            {
                a_num = false;
                break;
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            if ((b[i] >= 97 && b[i] <= 122) || (b[i] >= 65 && b[i] <= 90))
            {
                b_num = false;
                break;
            }
        }
        if (a_num)
            a1 = stoi(a);
        else
            a1 = variables[a];
        if (b_num)
            b1 = stoi(b);
        else
            b1 = variables[b];
        return a1 % b1;
    }
    if (strcmp(op.c_str(), "print") == 0)
    {
        string a;
        int a1;
        in >> a;
        bool a_num = true;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
            {
                a_num = false;
                break;
            }
        }
        if (a_num)
            a1 = stoi(a);
        else
            a1 = variables[a];
        cout << a1 << endl;
    }
    if (strcmp(op.c_str(), "**") == 0)
    {
        string aux;
        while (true)
        {
            in >> aux;
            if (strcmp(aux.c_str(), "**") == 0)
            {
                break;
            }
        }
    }
    if (strcmp(op.c_str(), "if") == 0)
    {
        string a, b, c;
        int a1, b1;
        in >> a >> c >> b;
        bool a_num = true;
        bool b_num = true;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] >= 97 && a[i] <= 122) || (a[i] >= 65 && a[i] <= 90))
            {
                a_num = false;
                break;
            }
        }
        for (int i = 0; i < b.length(); i++)
        {
            if ((b[i] >= 97 && b[i] <= 122) || (b[i] >= 65 && b[i] <= 90))
            {
                b_num = false;
                break;
            }
        }
        if (a_num)
            a1 = stoi(a);
        else
            a1 = variables[a];
        if (b_num)
            b1 = stoi(b);
        else
            b1 = variables[b];


        if (strcmp(c.c_str(), "==") == 0)
            if (a1 == b1)
            {
                string au;
                in >> au;
                cout << logic(au) << endl;
            }
        if (strcmp(c.c_str(), ">") == 0)
            if (a1 > b1)
            {
                string au;
                in >> au;
                
            }
        if (strcmp(c.c_str(), ">=") == 0)
            if (a1 >= b1)
            {
                string au;
                in >> au; 
                cout << logic(au) << endl;
            }
        if (strcmp(c.c_str(), "<") == 0)
            if (a1 < b1)
            {
                string au;
                in >> au;
                cout << logic(au) << endl;
            }
        if (strcmp(c.c_str(), "<=") == 0)
            if (a1 <= b1)
            {
                string au;
                in >> au;
                cout << logic(au) << endl;
            }
        if (strcmp(c.c_str(), "!=") == 0)
            if (a1 != b1)
            {
                string au;
                in >> au;
                cout << logic(au) << endl;
            }
    }
    if (strcmp(op.c_str(), "assign") == 0)
    {
        string receiver;
        in >> receiver;
        string aux;
        in >> aux;
        variables[receiver] = logic(aux);
    }
}

int main()
{
    while (in >> op)
    {
        logic(op);
    }
    in.close();
    return 0;
}