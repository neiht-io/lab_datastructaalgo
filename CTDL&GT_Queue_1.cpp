//cre: https://laptrinhtudau.com/cai-dat-hang-doi-queue-bang-mang-c-c/

//Hàm khỏi tạo
void Init(QUEUE &q){
    //gan front bang 0
    q.front = 0;
    //gan rear bang -1
    q.rear = -1;
}
//ham kiem tra queue rong 
int IsEmpty(QUEUE q){
    //neu front > rear thi hang doi rong va tra ve 1
    if (q.front > q.rear){
        return 1;
    }
    //nguoc lai khong rong thi tra ve 0
    return 0;
}

//ktra queue đầy
int IsFull (QUEUE q){
    //neu rear == MAX - 1 thi hang doi day va tra ve 1
    if (q.rear==MAX-1){
        return 1;
    }
    //nguoc lai hang doi chua day
    return 0;
}
//add 
void Add (QUEUE &q, int x){
    //Queue chưa đầy
    if (IsFull(q)==0) {
        //tang chi so rear len 1 don vi
        q.rear++;
        //them phan tu x vao cuoi hang doi
        q.A[q.rear] = x;
    }
}
//delête
nt Remove(QUEUE &q){
    int x;
    //neu hang doi khong rong
    if (!IsEmpty(q)) {
        //gan x bang phan tu dau tien cua hang doi
        x = q.A[q.front];
        //tang bien front len 1 don vi
        q.front++;
        //tra ve phan tu lay duoc
        return x;
    }
    else{//nguoc lai hang doi rong
        front = 0; rear = -1;
    }
}

//nhap xuat 
void Input(QUEUE &q, int n){
    //duyet tu 0 den n
    for(int i = 0; i< n; i++){
        //thuc hien nhap gia tri vao bien x
        int x;
        printf("Nhap gia tri phan tu thu %d: ",i);
        scanf("%d",&x);
        //thuc hien add phan tu x vao queue
        Add(q,x);
    }
}

//Hàm xuất ra những phần tử có trong hàng đợi nhưng không xóa đi 
void Output(QUEUE q){
    //duyet tu phan tu dau ve phan tu cuoi queue
    for(int i = q.front; i <= q.rear; i++){
        //hien thi ra ket qua
        printf("%d \t",q.A[i]);
    }
}

