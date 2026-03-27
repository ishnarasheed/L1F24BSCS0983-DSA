#include <iostream>
#include <string>
#include "myStack2.h"
using namespace std;

struct Action
{
    char type;  
    char ch;   
};

int main()
{
    string text = "";
    myStack2<Action> undoStack(100);
    myStack2<Action> redoStack(100);

    int choice;
    char ch;

    do
    {
        cout << "\n===== Basic Text Editor =====" << endl;
        cout << "Current Text: " << text << endl;
        cout << "1. Type character" << endl;
        cout << "2. Delete character" << endl;
        cout << "3. Undo" << endl;
        cout << "4. Redo" << endl;
        cout << "5. Show current text" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Enter character to type: ";
            cin >> ch;

            text += ch;

            Action a;
            a.type = 'T';
            a.ch = ch;
            undoStack.push(a);

            while (!redoStack.isEmpty())
            {
                redoStack.pop();
            }

            break;
        }

        case 2:
        {
            if (text.empty())
            {
                cout << "Text is already empty." << endl;
            }
            else
            {
                char deletedChar = text.back();
                text.pop_back();

                Action a;
                a.type = 'D';
                a.ch = deletedChar;
                undoStack.push(a);
                while (!redoStack.isEmpty())
                {
                    redoStack.pop();
                }
            }
            break;
        }

        case 3:
        {
            if (undoStack.isEmpty())
            {
                cout << "Nothing to undo." << endl;
            }
            else
            {
                Action lastAction = undoStack.pop();

                if (lastAction.type == 'T')
                {
    
                    if (!text.empty())
                    {
                        text.pop_back();
                    }
                }
                else if (lastAction.type == 'D')
                {
                    text += lastAction.ch;
                }

                redoStack.push(lastAction);
            }
            break;
        }

        case 4:
        {
            if (redoStack.isEmpty())
            {
                cout << "Nothing to redo." << endl;
            }
            else
            {
                Action lastUndone = redoStack.pop();

                if (lastUndone.type == 'T')
                {
                    text += lastUndone.ch;
                }
                else if (lastUndone.type == 'D')
                {
              
                    if (!text.empty())
                    {
                        text.pop_back();
                    }
                }

                undoStack.push(lastUndone);
            }
            break;
        }

        case 5:
            cout << "Current Text: " << text << endl;
            break;

        case 6:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    return 0;
}