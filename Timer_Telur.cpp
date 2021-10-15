#include <iostream>
#include <stdlib.h> 
#include <windows.h> 

using namespace std;

void timer(int h, int m, int s)
{
    for(;;)
    {
        if (h == 0 && m == 0 && s == 0)
        {
            break;
        }
        if (s == 0 && m ==0)
        {
            m = 60;
            h--;
        }
        if (s == 0)
        {
            s = 60;
            m--;
        }
     
        system("cls");
        cout<<"Silahkan rebus telur anda selama :\n";
        cout<<m<<" menit "<<s--<<" detik";
        Sleep(1000);
    }
}

int main()
{
    int h, m, s, choices, i;
    cout<<"Hai, selamat datang di Timer Rebus Telor\n";
    cout<<"Seberapa matang anda ingin merebus telur anda?\n";
    cout<<"1. Very Soft and Runny\n"<<"2. Soft boiled\n"<<"3. Medium almost firm\n"<<"4. Hard boiled\n";
    cout<<"Pilihan :"; cin>>choices;

    if (choices==1){
        h=0;
        m=5;
        s=30;
        timer(h,m,s);
    }
        else if (choices==2){
            h=0;
            m=7;
            s=0;
            timer(h,m,s);
        }
            else if (choices==3){
                h=0;
                m=8;
                s=45;
                timer(h,m,s);
            }
                else if (choices==4){
                    h=0;
                    m=12;
                    s=0;
                    timer(h,m,s);
                }
                    else {
                        cout<<"Oops, pilihan salah, ulang program ini ya!";
                    }
    for (int i = 400; i<=900; i = i + 100){
        Beep(i,1000);
        }
    cout<<"Selamat menikmati telur rebus anda!\n Jangan lupa dikupas ya!";
    return 0;
}