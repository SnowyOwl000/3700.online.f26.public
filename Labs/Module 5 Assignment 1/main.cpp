#include <iostream>

#include <stack.h>
#include <queue.h>

using namespace std;

int main(int argc,char *argv[]) {
    Stack<char>
        s;
    Queue<char>
        q;
    string
        str;

    if (argc == 2)
        str = argv[1];
    else
        str = "This is a test of the emergency array doubling system. This is only a test.";

//    cout << "Enter a line: ";
//    getline(cin,str);

    for (char ch : str) {
        s.push(ch);
        q.enqueue(ch);
    }

    cout << "Stack: ";
    while (!s.isEmpty())
        cout << s.pop();
    cout << endl;
    cout << "Queue: ";
    while (!q.isEmpty())
        cout << q.dequeue();
    cout << endl;

    return 0;
}
