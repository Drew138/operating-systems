#include <iostream>
#include <windows.h>
#include <stdio.h>


using namespace std;

int main() {
	cout << "Hello World!" << endl;
	keybd_event( VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY | 0, 0 );
    keybd_event( VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
	keybd_event( VK_NUMLOCK, 0, KEYEVENTF_EXTENDEDKEY | 0, 0 );
    keybd_event( VK_NUMLOCK, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
	int c = getchar();
	char str[0];
	str[0] = c;
	cout << str;
}
