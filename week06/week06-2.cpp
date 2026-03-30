//week06-2 好玩的程式設計.....
//Ctrl-N開新視窗,貼上剛才的程式碼
void setup(){
  size(800, 500); //視窗大小800 x 500
}
int[][] a=new int [10][16]; // Java的陣列寫法,跟C/C++不同
//void mousePragged(){//mouse按下去時,執行這段
void mouseDragged(){//mouse按下去時,執行這段
int i =mouseY/50, j=mouseX/50;//計算i,j座標\
 a[i][j]=180;//數字變大試試60(1秒)試試120(2秒)
}
void draw (){
   background(255);
   for(int i=0; i<10; i++){ //上週是for y 現在改為 for i左手 i
      for(int j=0; j<16; j++){//上週是for x 現在改為 for j 右手j
        if(a[i][j]>0) {
        fill(#5DFF1F,a[i][j]*4);//若陣列有值, 設綠色
        a[i][j]--;
        }else fill(255);// 沒有值設白色
      rect(j*50,i*50,50,50); //畫四邊形
  }
 }
}
