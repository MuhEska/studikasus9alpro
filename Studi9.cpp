#include <iostream>
#include <string.h>
using namespace std;

class Rak{
   public :
      void input();
      void proses();
      void output();

   private : 
        int bkkd[100], k, n, tmp, rak[10][10];
};

void Rak::input(){
  cout<<"Masukkan Banyaknya Buku : "; cin >> n;
  for(int i=1; i<=n; i++){
		cout<<"Data buku ke-"<<i<<" = ";
		cin>>bkkd[i];
	}
  cout<<"======\n\nSusunan Buku sebelum dirapihkan======\n";
		for(int j=1; j<=n; j++){
			cout<<"  "<<bkkd[j];
		}  
  cout<<"\n=============================================\n";
};

void Rak::proses(){
  //Sorting
  for(int i=1; i<=24; i++){
	        for(int j=i; j<=24; j++){
	            if(bkkd[i] > bkkd[j]){
	                    tmp = bkkd[j];
	                    bkkd[j] = bkkd[i];
	                    bkkd[i] = tmp;
	        	}
	        }
	}
  //Mengubah array 1D ke 2D
  k=1;
  for (int i=1; i<=4; i++){
		for (int j=1; j<=6; j++){
		rak[i][j]=bkkd[k];
		k++;
		}
	}
}

void Rak::output(){
  cout<<"\nSusunan Buku sesudah dirapihkan\n";
  for(int i=1; i<=4; i++){
		for(int j=1; j<=6; j++){
			cout<<"Buku "<<rak[i][j]<<" | ";
		}
    cout<<endl;
	}
};

int main(){
  Rak x;
  x.input();
  cout << endl;
  x.proses();
  cout << endl;
  x.output();
  cout << endl;
  return 0;
  
}
