//Author: Matthew Burns
#include <iostream>
#include <vector>
#include "bitmap.h"
#include <string>

using namespace std;

int main() {
    
    int Rows;
    int Columns;


//ask user for picture, must be a bmp.
//if user submits a non bmp file, alert them so they can submit the correct file
//check to see if they submitted the correct file                       is image()
//save a new version before any changes are made     save("newversion.bmp"}
//send the photo to the pixel matrix so it can be edited             topixelmatrix()     
//to make a pixel greyspace, take the values of the R, G, B colorscales and add them all togethor and divide by three.  That is the value that must be shared between each rgb of a pixel to make it greyspace
//have a loop convert each pixel in the photo to greyspace going row by row in the matricies.
//Check to make sure all pixels have been converted
//Take photo from pixel matrix                   frompixelmatrix()
//make sure the old file was not/does not get overwritten.
    Bitmap image;
    vector <vector <Pixel> > bmp;
    Pixel rgb;

    image.open("machupicchu.bmp");
    bmp = image.toPixelMatrix();
    Rows = bmp.size();
    Columns = bmp[0].size();
    cout<<"machupicchu.bmp has been loaded. It is "<<Columns<<" pixels wide and "<<Rows<<" pixels high"<<endl;

    



return 0;
}

