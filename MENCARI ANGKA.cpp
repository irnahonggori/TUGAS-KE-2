#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int A[10];
    int index [10];
    int i,j,k,n;

    cout<<"========================================="<<endl;
    cout<<"=============PENCARIAN ANGKA============="<<endl;
    cout<<"===============OLEH: IRNA================"<<endl;
    cout<<"=============SELAMAT MENCOBA============="<<endl<<endl;
    cout<<"masukkan jumlah pengulangan data : ";
    cin>>n;
    cout<<endl;

    for(i=1;i<=n;i++)
      {
            cout << "\tangka ke -" << i << " : ";
            cin >> A[i];
      }
      cout<<endl;
      cout << "\tMasukkan angka yang akan anda cari : ";
      cin >> k;

      j=0;
      for (i=0;i<10;i++)
      {
            if(A[i]==k)
            {
                  index[j]=i;
                  j++;
            }
      }
      if (j>0)
      {
            cout << "\n";
            cout << "\t angka " << k << " yang dicari ada " << j << " buah\n";
            cout << "\t angka tersebut terdapat dalam index ke ";

            for(i=0;i<j;i++)
            {
                  cout << index[i] << " ";
            }
            cout << "\n";
      }
      else
      {
            cout << "\n";
            cout << "\t angka tidak ditemukan dalam array\n";
      }

   cout<<"===============TERIMA KASIH================"<<endl;

      return 0;
}


