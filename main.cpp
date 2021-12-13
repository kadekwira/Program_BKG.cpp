    /* Program Permainan Gunting Batu Kertas

       Nama : Kadek Wira Adhi Kusuma Pratama

       github:kadekwira

       instagram:ddexk3
       */


#include <iostream>
#include <cstdlib>


using namespace std;
string kondisi(string player,string com)
{

  if(player=="Batu")
    {
        if(com=="Batu"){cout<<" SERI "<<endl;}
        else if(com=="Gunting"){cout<<" Player Menang "<<endl;}
        else if(com=="Kertas"){cout<<" Player Kalah "<<endl;}
    }
    else if(player=="Gunting")
    {
         if(com=="Batu"){cout<<" Player Kalah "<<endl;}
        else if(com=="Gunting"){cout<<" SERI "<<endl;}
        else if(com=="Kertas"){cout<<" Player Menang "<<endl;}
    }
    else if(player=="Kertas")
    {
         if(com=="Batu"){cout<<" Player Menang "<<endl;}
        else if(com=="Gunting"){cout<<" Player Kalah "<<endl;}
        else if(com=="Kertas"){cout<<" Seri "<<endl;}
    }

}
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

    kondisi(isi[pilihan-1],isi[kom-1]);

cout<<endl;


    cout<<" Apakah Anda Ingin Mengulang ? [y/t] : ";
    cin>>ulang;
    system("cls");
    }
    while(ulang!='t');
    cout<<" Permainan Berakhir ";
    return 0;
}
