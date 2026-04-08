//#include <iostream>
//using namespace std;
//
//class Stack 
// {
//    char arr[100];
//    int top;
//
//public:
//    Stack() {
//        top = -1;
//    }
//
//    void push(char x) {
//        arr[++top] = x;
//    }
//
//    void pop() {
//        if (top >= 0) top--;
//    }
//
//    char popReturn() {
//        return arr[top--];
//    }
//
//    char peek() {
//        if (top >= 0) return arr[top];
//        return '\0';
//    }
//
//    bool empty() {
//        return top == -1;
//    }
//};
//
//                            1. Reverse String 
//void reverseString() {
//    string str;
//    cout << "Enter string: ";
//    cin >> str;
//
//    Stack st;
//
//    for (int i = 0; i < str.length(); i++) {
//        st.push(str[i]);
//    }
//
//    string rev = "";
//    while (!st.empty()) {
//        rev += st.popReturn();
//    }
//
//    cout << "Reversed: " << rev << endl;
//}
//
////            2. Check Balanced Parentheses
//void checkBalanced() {
//    string exp;
//    cout << "Enter expression: ";
//    cin >> exp;
//
//    Stack st;
//    bool balanced = true;
//
//    for (int i = 0; i < exp.length(); i++) {
//        if (exp[i] == '(') {
//            st.push('(');
//        }
//        else if (exp[i] == ')') {
//            if (st.empty()) {
//                balanced = false;
//                break;
//            }
//            st.pop();
//        }
//    }
//
//    if (!st.empty()) balanced = false;
//
//    if (balanced)
//        cout << "Balanced" << endl;
//    else
//        cout << "Not Balanced" << endl;
//}
//
////               Precedence 
//int precedence(char op) {
//    if (op == '^') return 3;
//    if (op == '*' || op == '/') return 2;
//    if (op == '+' || op == '-') return 1;
//    return 0;
//}
//
//// -------- 3. Infix to Postfix --------
//void infixToPostfix()
//{
//    string infix;
//    cout << "Enter infix expression: ";
//    cin >> infix;
//
//    Stack st;
//    string postfix = "";
//
//    for (int i = 0; i < infix.length(); i++)
//    {
//        char ch = infix[i];
//
//        if ((ch >= 'a' && ch <= 'z') ||
//            (ch >= 'A' && ch <= 'Z')) 
//        {
//            postfix += ch;
//        }
//        else if (ch == '(') 
//        {
//            st.push(ch);
//        }
//        else if (ch == ')') {
//            while (!st.empty() && st.peek() != '(')
//            {
//                postfix += st.peek();
//                st.pop();
//            }
//            st.pop();
//        }
//        else {
//            while (!st.empty() &&
//                precedence(st.peek()) >= precedence(ch))
//            {
//                postfix += st.peek();
//                st.pop();
//            }
//            st.push(ch);
//        }
//    }
//
//    while (!st.empty()) 
//    {
//        postfix += st.peek();
//        st.pop();
//    }
//
//    cout << "Postfix: " << postfix << endl;
//}
//

//int main() 
//{
//    int choice;
//
//    do {
//        cout << "\n--- Stack Applications ---\n";
//        cout << "1. Reverse String\n";
//        cout << "2. Check Balanced Parentheses\n";
//        cout << "3. Infix to Postfix\n";
//        cout << "4. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            reverseString();
//            break;
//        case 2:
//            checkBalanced();
//            break;
//        case 3:
//            infixToPostfix();
//            break;
//        case 4:
//            cout << "Exiting...\n";
//            break;
//        default:
//            cout << "Invalid choice!\n";
//        }
//
//    } while (choice != 4);
//
//    return 0;
//}