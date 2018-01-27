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
    getline(cin,input);

    //cout << input << endl;

    for(int i = 0; i < input.size(); i++)
    {
        if(ChartoInt(input[i]) > 0) //checks the character of the input to make sure it is a number greater than 0
        {
            if(ChartoInt(input[i + 1]) >= 0) //Checks the next character to check for double digit input
            {
                values[valuesCounter] = (ChartoInt(input[i]) * 10) + ChartoInt(input[i + 1]); // sets the values index to the double digit number
                i += 2; //adds 2 to account for the double digit index
                valuesCounter++;
            }
            else if(ChartoInt(input[i] > 0))
            {
                values[valuesCounter] = ChartoInt(input[i]);
                valuesCounter++;
            }
        }
    }
    
    large = largestNum(); //finds the largest number
    
    for(int i = 0; i < large; i++)
    {
        for(int j = 0; j < valuesCounter; j++) //Loop through each value
        {
            if(values[j] >= (large - i)) //Checks each value to see if the value[j], is = to or less than the largest minus the row
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

    for(int i = 0; i < valuesCounter; i++) 
    {
        if(values[i] > largest) //Checks value against largest which is 0 at the beginning of the function
        {
            largest = values[i];
        
        }
    }

    return largest;

}

int ChartoInt(char c) //gets c and returns the integer, if its a space its -1 and the defualt is -2
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

