#include <iostream>

using namespace std;

int main()
 {
    cout << "Hello world!" << endl;
    return 0;
    cout<<"Menu Asuransi Kendaraan"<< endl;
    cout<<"1. Insert First"<<endl;
    cout<<"2. Insert After"<<endl;
    cout<<"3. Insert Last"<<endl;
    cout<<"4. Delet First"<<endl;
    cout<<"5. Delete After"<<endl;
    cout<<"6. Delete Last"<<endl;
    cout<<"pilihan : "
    int plh;
    cin>>plh;
    switch (pil){
        case 1 : insertfirst(l,p); break;
        case 2 : insertafter(q,p); break;
        case 3 : insertlast(l,p); break;
        case 4 : deletefirst(l,p); break;
        case 5 : deleteafter(q,p); break;
        case 6 : deletelast(l,p); break;
        default : cout<<"pilihan tidak ada..."; break;
    }
    getch();
  infotype x;
    list l;
    address p;

    CreateList(l);

    input_data(x);
    p=alokasi(x);
    insertFirst(l,p);

    input_data(x);
    p=alokasi(x);
    insertLast(l,p);

    printInfo(l);

    strcpy(x.id);
    p=findElm(l,x);
    cout << info(p).nama <<endl;

    deleteFirst(l,p);
    cout << info(p).id <<endl;

    printInfo(l);

    strcpy(x.id);
    p=findElm(l,x);
    cout << p <<endl;
 }
