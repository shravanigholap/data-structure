#include <iostream>
using namespace std;

struct Node {
    int id;
    string question, subject, topic;
    Node *next;
};

Node *head = NULL;

void add() {
    Node *n = new Node;

    cout << "ID: ";
    cin >> n->id;
    cin.ignore();

    cout << "Question: ";
    getline(cin, n->question);

    cout << "Subject: ";
    getline(cin, n->subject);

    cout << "Topic: ";
    getline(cin, n->topic);

    n->next = head;
    head = n;
}

void display() {
    Node *p = head;

    while (p != NULL) {
        cout << "\nID: " << p->id;
        cout << "\nQuestion: " << p->question;
        cout << "\nSubject: " << p->subject;
        cout << "\nTopic: " << p->topic << "\n";

        p = p->next;
    }
}

int main() {
    int ch;

    do {
        cout << "\n1.Add  2.Display  3.Exit";
        cout << "\nChoice: ";
        cin >> ch;

        if (ch == 1)
            add();
        else if (ch == 2)
            display();

    } while (ch != 3);

    return 0;
}

