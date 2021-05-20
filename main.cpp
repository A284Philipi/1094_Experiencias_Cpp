#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int casos, cont = 0, cobaias, total = 0;
    double coelhos = 0, sapos = 0, ratos = 0, pcoelho, prato, psapo;
    string tipo;
    cin >> casos;
    while (cont < casos){
        cin >> cobaias;
        cin >> tipo;
        total = total + cobaias;
        if (tipo[0] == 'C'){
            coelhos = coelhos + cobaias;
        }else{
            if (tipo[0] == 'S'){
                sapos = sapos + cobaias;
            }else{
                ratos = ratos + cobaias;
            }
        }
        cont++;
    }
    pcoelho = (coelhos * 100) / total;
    prato = (ratos * 100) / total;
    psapo = (sapos  * 100) / total;
    cout << "Total: " << total << " cobaias" <<endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos <<endl;
    cout << "Total de sapos: " << sapos <<endl;
    cout.precision(2);
    cout << fixed << "Percentual de coelhos: " << pcoelho << " %" <<endl;
    cout << fixed << "Percentual de ratos: " << prato << " %" <<endl;
    cout << fixed << "Percentual de sapos: " << psapo << " %" <<endl;
    return 0;
}
