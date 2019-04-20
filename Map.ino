void setup() {

 // put your setup code here, to run once:}

int a[10][10];//can be changedvoid loop() {
 for (int i=0; i<=9; ++i)  //filling the matrix with 1
   for(int j=0; j<=9; ++j)
       a[i][j]=1;

 for(int i=0; i<=4; ++i)   // overwriting the boxes that the robot is not allowed to go
   for(int j=5; j<=9; ++j)
      a[i][j]=0;

for(int i=4; i<=5; ++i) 
  for(int j = 3; j<=6; ++j)
    a[i][j]=0;

for(int i=0; i<=9; ++i)// printing the values of the matrix on the serial monitor

  for(int j=0; j<=9; ++j)

  System.Console.WriteLine(a[i][j]);
    }

    