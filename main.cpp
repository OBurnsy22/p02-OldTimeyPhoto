//Author: Matthew Burns
#include <iostream>
#include <vector>
#include "bitmap.h"
#include <string>

using namespace std;

int main() {
    
    bool validBmp;
    int Rows;
    int Columns;
    string fileName;

    Bitmap image;
    vector <vector <Pixel> > bmp;  //Initializes matrix
    Pixel rgb;
    
    
   
      cout<<"Hello, please enter the file name of an image (must be in Windowns BMP format):"<<endl;
      cin>>fileName;  //Asks user for a bmp file of their choice
     
      image.open(fileName);
      validBmp = image.isImage();  //Checks to see if file provided is in bmp format

      while(validBmp == false)  //If file provided if not the correct format, asks user again
      {
      cout<<"ERROR: Please enter a valid bmp file name"<<endl;
      cin>>fileName;

      image.open(fileName);
      validBmp = image.isImage();
      }
    
    

      if(validBmp == true)  //Starts the process of converting to grayscale
      {
      bmp = image.toPixelMatrix();  //Sends image to pixel matrix
      Rows = bmp.size();
      Columns = bmp[0].size();
      cout<<fileName<<".bmp has been loaded. It is "<<Columns<<" pixels wide and "<<Rows<<" pixels high"<<endl;

        for(int x=0; x<bmp.size(); x++)  //Goes through all rows in the matrix
         {

           for(int y=0; y<bmp[x].size(); y++)  //Goes through all columns in the matrix
            {
             int temporary;

             rgb = bmp[x][y];
             temporary = (rgb.red + rgb.green + rgb.blue)/ 3;  //Gets average of rgb for a pixel
             rgb.red = temporary;
             rgb.green = temporary;
             rgb.blue = temporary;
             bmp[x][y] = rgb;  //Sets average to pixel in the matrix
          
            }
        }
       
      image.fromPixelMatrix(bmp);
      image.save("oldtimey.bmp");  //Retrieves image from pixel matrix and saves it
      
      cout<<"Congratulations, your image has successfully converted to grayscale."<<endl;

      }

  
return 0;
}

