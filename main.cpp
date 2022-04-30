#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(){
    
    int e1, e2, e3;
    
    cout << "How many Elements would you like to enter? 3: " << endl;
    cout << "Element #1: ";
    cin >> e1;
    
    cout << "Element #2: ";
    cin >> e2;
    
    cout << "Element #3: ";
    cin >> e3;
    
    vector<int> arr = {e1, e2, e3};
    vector<int>::iterator ptr;
    
    cout << "The vector elements are: ";
    
    for (ptr = arr.begin();ptr < arr.end(); ptr++) {
        cout << "[" << *ptr << "]" << " ";
    }
    cout << endl;
    
    
    int mchoice;
    
    do
    {
        cout << endl;
        cout << "MENU" << endl;
        cout << "[1] Insert new element" << endl;
        cout << "[2] Remove an element" << endl;
        cout << "[3] Erase the vector" << endl;
        cout << "[4] Quit" << endl;
        cout << ">> ";
        cin >> mchoice;
        
        switch (mchoice)
        {
            case 1:
            cout << endl;
            cout << "Where would you like to enter the new element?: " << endl;
            cout << "[1] Beginning" << endl;
            cout << "[2] End" << endl;
            
            int nelchoice;
            cout << ">> ";
            cin >> nelchoice;
            
            switch (nelchoice)
            {
                case 1:
                int belem;
                cout << "Enter element: ";
                cin >> belem;
                
                
                
                cout << "The vector elements are: ";
                for (ptr = arr.begin();ptr < arr.end(); ptr++) {
                    cout << "[" << *ptr << "]" << " ";
                }
                cout << endl;
                break;
                
                case 2:
                int enelem;
                cout << "Enter element: ";
                cin >> enelem;
                arr.push_back(enelem);
                
                
                cout << "The vector elements are: ";
                for (ptr = arr.begin();ptr < arr.end(); ptr++) {
                    cout << "[" << *ptr << "]" << " ";
                }
                cout << endl;
                break;
            }
            break;
            
            case 2:
            cout << endl;
            cout << "Which element would you like to remove? " << endl;
            cout << "[1] First" << endl;
            cout << "[2] Last" << endl;
            
            int rmvelemch;
            cout << ">> ";
            cin >> rmvelemch;
            switch (rmvelemch)
            {
                case 1:
                cout << endl;
                cout << "Now removing " << "[" << e1 << "]" << endl;
                cout << "The vector elements are: ";
                
                ptr = arr.begin();
                arr.erase(ptr);
                for (ptr = arr.begin();ptr < arr.end(); ptr++) {
                    cout << "[" << *ptr << "]" << " ";
                }
                cout << endl;
                break;
                
                case 2:
                break;
            }
            break;
            
            case 3:
            arr.clear();
            for (ptr = arr.begin();ptr < arr.end(); ptr++) {
                cout << "[" << *ptr << "]" << " ";
            }
            cout << endl;
            cout << "THE VECTOR IS EMPTY!";
            cout << endl;
            break;
            
            case 4:
            return 0;
        }
    }
    while(mchoice !=4);
    
}
