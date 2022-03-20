#include <iostream>
using namespace std;

int c; // numarul cerintei

int main()
{
    cout << "███╗   ███╗███████╗███╗   ██╗██╗██╗   ██╗" << endl;
    cout << "████╗ ████║██╔════╝████╗  ██║██║██║   ██║" << endl;
    cout << "██╔████╔██║█████╗  ██╔██╗ ██║██║██║   ██║" << endl;
    cout << "██║╚██╔╝██║██╔══╝  ██║╚██╗██║██║██║   ██║" << endl;
    cout << "██║ ╚═╝ ██║███████╗██║ ╚████║██║╚██████╔╝" << endl;
    cout << "╚═╝     ╚═╝╚══════╝╚═╝  ╚═══╝╚═╝ ╚═════╝ " << endl;
    cout << "* 1 - cerinta 1" << endl;
    cout << "* 2 - cerinta 2" << endl;
    cout << "* 3 - cerinta 3" << endl;
    cout << "* 4 - cerinta 4" << endl;
    cout << "* 5 - iesire" << endl;
    do
    {
        cout << "Alege cerinta ==> ";
        cin >> c;
        switch (c)
        {
        case 1:
        {

            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {

            break;
        }
        default:
            break;
        }
    } while (c != 5);
    // aici se termina meniul

    return 0;
}
