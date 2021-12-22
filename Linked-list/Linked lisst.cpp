#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

struct Data_node
{
    char nama[25];
    char nim[15];
};

struct node
{
    Data_node data;
    node* next;
};

node* _head;
node* _tail;
node* _curr;
node* _entry;
node* _del;

void inisialisasi()
{
    _head = NULL;
    _tail = NULL;
}


void input(Data_node dt)
{
    _entry = new node; 
    _entry->data = dt; 
    _entry->next = NULL;
    if(_head==NULL)
    {
        _head = _entry;
        _tail = _head;
      }
      else
      {
        _tail->next = _entry;
        _tail = _entry;
    }
}

void hapus()
{
    node _simpan;
    if(_head==NULL)
	{
        cout<<"\nLinked list kosong, penghapusan tidak bisa dilakukan."<<endl;
      }
      else
      {
        _simpan.data  = _head ->data;
        cout<<"\nData yang dihapus adalah ";
		cout<<_simpan.data.nama<<"   "<<_simpan.data.nim<<endl;
        _del = _head;
        _head = _head->next;
        delete _del;
    }
}

void cetak()
{
      _curr = _head;
      if(_head == NULL)
            cout<<"\ntidak ada data dalam linked list"<<endl;
      else
    {
        cout<<"\nData yang ada dalam linked list : \n"<<endl;
        cout<<"\t";
        while(_curr!=NULL)
            {
                cout<<_curr->data.nama<<"   "<<_curr->data.nim;
                cout<<"      ";
                _curr = _curr->next;
            }
            cout<<"NULL";
            cout<<endl;
    }
}

void menu()
{
      char pilih, ulang;
      node tmp; 

      do
      {
      fflush(stdin);
      system("cls");
      cout<<"SINGLE LINKED LIST NON CIRCULAR"<<endl;
      cout<<"-------------------------------"<<endl;
      cout<<"Menu : "<<endl;
      cout<<"1. Input data mahasiswa"<<endl;
      cout<<"2. Hapus data mahasiswa"<<endl;
      cout<<"3. Cetak Data mahasiswa"<<endl;
      cout<<"4. keluar"<<endl;
      cout<<"Masukkan pilihan Anda : ";
      cin>>pilih;

      switch(pilih)
      {
        case '1' :
            fflush(stdin);
            cout<<"\nMasukkan nama  : ";
            cin>>tmp.data.nama;
            cout<<"Masukkan NIM   : ";
            cin>>tmp.data.nim;
			 input(tmp.data);
            break;
        case '2' :
            hapus();
            break;
        case '3' :
            cetak();
            break;
        case '4' :
            exit(0);
            break;
        default :
            cout<<"\nPilihan salah"<<endl;
      }
      cout<<"\nKembali ke menu?(y/n)";
      cin>>ulang;
    }while(ulang=='y' || ulang=='Y');
}

int main()
{
	inisialisasi();
    menu();
	return 0;
}
