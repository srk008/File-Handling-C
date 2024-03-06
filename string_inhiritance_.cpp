#include<iostream>
#include<string.h>

using namespace std;

class StringOperation {
protected:
    char s[30], temp;

public:
    void setData(char name[]) {
        strcpy(s, name);
    }
};

class Sortstring : public StringOperation {
public:
    void sort() {
        int length = strlen(s);
        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                if (s[i] > s[j]) {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
    }

    void show() {
        cout << s << endl;
    }
};

class Reverse : public StringOperation {
private:
    char re[30];

public:
    void rev() {
        int length = strlen(s);
        cout << "Length of original string is " << length << endl;
        cout << s << endl;
        cout << "String after Reversing " << endl;
        for (int i = length - 1, j = 0; i >= 0; i--, j++) {
            re[j] = s[i];
        }
        re[length] = '\0';
    }

    void disp() {
        cout << re << endl;
    }
};

int main() {
    char name[30];
    cout << "Enter your name:" << endl;
    cin >> name;

    Sortstring w;
    w.setData(name);
    w.sort();
    w.show();

    Reverse t;
    t.setData(name);
    t.rev();
    t.disp();

    return 0;
}

