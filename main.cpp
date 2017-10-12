//Author: Matthew Burns
#include <iostream>
#include <vector>
#include "bitmap.h"
#include <string>

using namespace std;

int main() {

    int Rows;
    int Columns;

    Bitmap image;
    vector <vector <Pixel> > bmp;
    Pixel rgb;
    
    do{
   
      cout<<"Hello, please enter the file name of an image (must be in Windows BMP format), if you are seeing theis message repeatedly, it means the file you are entering is not of the Windows BMP format."<<endl;
      cin>>VARIABLE>>endl;
     
      bool validBmp = image.isImage(VARIABLE);
    
    

      if(validBmp == true)
      {
      image.open("VARIABLE")
      bmp = image.toPixelMatrix();
      Rows = bmp.size();
      Columns = bmp[0].size();
      cout<<VARIABLE<<".bmp has been loaded. It is "<<Columns<<" pixels wide and "<<Rows<<" pixels high"<<endl;

        for(int x=0; x<bmp.size(); x++)
         {

           for(int y=0; y<bmp[x].size(); y++)
            {

             rgb = bmp[x][y]
             rgb = (rgb.red[x][y] + rgb.green[x][y] + rgb.blue[x][y])/ 3;
             bmp[x][y] = rgb;
          
            }
        }
       
      image.fromPixelMatrix(bmp);
      image.save("oldtimey.bmp")

      }

      }while(vaildBmp == false)



return 0;
}

