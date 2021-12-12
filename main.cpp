    /* Program Permainan Gunting Batu Kertas

       Nama : Kadek Wira Adhi Kusuma Pratama

       github:kadekwira

       instagram:ddexk3
       */


#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
    char ulang;
    do{
        int pilihan,kom;
        string isi[3]={"Batu","Gunting","Kertas"};

    cout<<"======================================"<<endl;
    cout<<"    Permaianan Batu Gunting Kertas    "<<endl;
    cout<<"======================================"<<endl;
    for(int a=0; a<3; a++)
    {
        cout<<a+1<<" . "<<isi[a]<<endl;
    }
    cout<<"======================================"<<endl;

    cout<<" Pilih [1/2/3] : ";
    cin>>pilihan;

    cout<<" Player : "<<pilihan<<endl;

    kom=(rand()%3)+1;
    cout<<" Computer : "<<kom<<endl;
    cout<<"======================================"<<endl;
    cout<<" Player   : "<<isi[pilihan-1]<<endl;
    cout<<" Computer : "<<isi[kom-1]<<endl;

  if(isi[pilihan-1]=="Batu")
    {
        if(isi[kom-1]=="Batu"){cout<<" SERI "<<endl;}
        else if(isi[kom-1]=="Gunting"){cout<<" Player Menang "<<endl;}
        else if(isi[kom-1]=="Kertas"){cout<<" Player Kalah "<<endl;}
    }
    else if(isi[pilihan-1]=="Gunting")
    {
         if(isi[kom-1]=="Batu"){cout<<" Player Kalah "<<endl;}
        else if(isi[kom-1]=="Gunting"){cout<<" SERI "<<endl;}
        else if(isi[kom-1]=="Kertas"){cout<<" Player Menang "<<endl;}
    }
    else if(isi[pilihan-1]=="Kertas")
    {
         if(isi[kom-1]=="Batu"){cout<<" Player Menang "<<endl;}
        else if(isi[kom-1]=="Gunting"){cout<<" Player Kalah "<<endl;}
        else if(isi[kom-1]=="Kertas"){cout<<" Seri "<<endl;}
    }

cout<<endl;


    cout<<" Apakah Anda Ingin Mengulang ? [y/t] : ";
    cin>>ulang;
    system("cls");
    }
    while(ulang!='t');
    cout<<" Permainan Berakhir ";
    return 0;
}
