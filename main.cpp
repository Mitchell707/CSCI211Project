#include<iostream>
#include<string>

using namespace std;

const int MAX = 100;
int values [ MAX ];

int valuesCounter = 0;
int large = 0;

string input;

int ChartoInt(char);
int largestNum();

int main()
{
    
    //Make the code accept any integer;
        //Make it chceck one int ahead and see if its an int or not
        //Make it multiply the first int by 10 and add the second one


    getline(cin,input);

    for(int i = 0; i < input.size(); i++)
    {
        if(ChartoInt(input[i]) > 0)
        {
            if(ChartoInt(input[i + 1]) > 0)
            {
                values[valuesCounter] = (ChartoInt(input[i]) * 10) + ChartoInt(input[i + 1]);
                i++;
                valuesCounter++;
            }
            else
            {
                values[valuesCounter] = ChartoInt(input[i]);
                valuesCounter++;
            }
        }
    }
    
    large = largestNum();
    
    cout << large << endl;

    for(int i = 0; i < large; i++)
    {
        for(int j = 0; j < valuesCounter; j++)
        {
            if(values[j] >= (large - i))
            {
                cout << "*";

            }
            else
            {
                cout << " ";
            }

        }
        
        cout << endl;

    }

    return 0;

}

int largestNum()
{
    int largest = 0;

    for(int i = 0; i < MAX; i++)
    {
        if(values[i] > largest)
        {
            largest = values[i];
        
        }
    }

    return largest;

}

int ChartoInt(char c)
{
    if(c == '0')
    {
        return 0;
    }
    
    if(c == '1')
    {
        return 1;
    }

    if(c == '2')
    {
        return 2;
    }

    if(c == '3')
    {
        return 3;
    }
    
    if(c == '4')
    {
        return 4;
    }
    
    if(c == '5')
    {
        return 5;
    }

    if(c == '6')
    {
        return 6;
    }
    
    if(c == '7')
    {
        return 7;
    }
    
    if(c == '8')
    {
        return 8;
    }

    if(c == '9')
    {
        return 9;
    }
    
    if(c == ' ')
    {
        return -1;

    }

    return -2;
}

