#include<iostream>
#include<cstdlib>
using namespace std;

int palindromas(){
    int sk; //ivedamas skaicius
    int tikr; //tikrinimas
    int atv = 0; //atvirkstinis skaicius

    cout << "Iveskite skaiciu: ";
    cin >> sk;

    tikr = sk;

    while (tikr > 0)
    {
        atv = atv * 10 + tikr % 10;
        tikr = tikr / 10;
    }

    if (atv == sk)
        cout << "Skaicius yra palindromas." << endl;
    else
        cout << "Skaicius nera palindromas." << endl;
        return 0;
}

int balse(){
    char raide;
    char A[] = {'A', 'a', 'E', 'e', 'I', 'i', 'Y', 'y', 'O', 'o', 'U', 'u'};
    cout<<"Iveskite raide"<<endl;
    cin>>raide;

    bool priebalse = true;

    for(int i=0; i<=11; i++){
         if (raide == A[i]){
        priebalse = false;
         }
    }

    if (priebalse == true) {
        cout << "Raide yra priebalse" << endl;
    } else {
        cout << "Raide yra balse" << endl;
    }
    return 0;
}

int bendrasDaliklis(int skaicius1, int skaicius2){
    skaicius1 = abs(skaicius1); // keiciama i absoliutine reiksme, jog nebutu neigiamu skaiciu
    skaicius2 = abs(skaicius2);
    while (skaicius1 != 0){
        int a = skaicius2; // laikinasis kintamasis
        skaicius2 = skaicius1 % skaicius2;
        skaicius1 = a;
    }
    return skaicius1; //grazinama absoliutine reiksme
}

int main(){
    int pasirinkimas;
    while (true){
        cout << "Pasirinkite funkcija:"<< endl;
        cout << "[1] Palindromas"<< endl;
        cout << "[2] Balse"<< endl;
        cout << "[3] Didziausias bendras daliklis"<< endl;
        cout << "[0] Iseiti is meniu"<< endl;
        cin >> pasirinkimas;

        if (pasirinkimas == 0) {
            cout << "Iseinama is meniu." << endl;
            break;
        } else if (pasirinkimas == 1) {
            palindromas();
        } else if (pasirinkimas == 2) {
            balse();
        } else if (pasirinkimas == 3) {
            int s1, s2;
            cout << "Iveskite du skaicius" << endl;
            cin >> s1 >> s2;
            int rezultatas = bendrasDaliklis(s1, s2);
            cout << "Didziausias bendras daliklis yra " << rezultatas <<endl;
        }
            else
            cout << "Netinkamas pasirinkimas. Bandykite dar karta." << endl;

    }
}
