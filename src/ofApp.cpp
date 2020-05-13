#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   
    ofBackground(0);
   //image1
    myImage1.load("work-by-monai-mask9.jpg");
    myPixels1=myImage1.getPixels();
    float size=10;
             /*for(int x=0;x<myImage1.getWidth();x+=size){
                 for(int y=0;y<myImage1.getHeight();y+=size){
                     
                     pos1={x,y};
                    // color1=myPixels1.getColor(x, y);
                    // posV1.push_back(pos1);
                    // colorP.push_back(color1);
                     
                     Particle newParticle1;
                     newParticle1.setup(pos1,myPixels1.getColor(x,y));
                     myParticle1.push_back(newParticle1);
                 }
             }
    */
    //image2
    myImage2.load("8cfb14e89ab746ba99475846f6525e26_th-02.jpg");
    myPixels2=myImage2.getPixels();
                    for(int x=0;x<myImage2.getWidth();x+=size){
                    for(int y=0;y<myImage2.getHeight();y+=size){
                        
                        pos2={x,y};
                        //color2=myPixels2.getColor(x, y);
                       
                        Particle newParticle2;
                        newParticle2.setup(pos2,myPixels2.getColor(x,y));
                                myParticle2.push_back(newParticle2);
                            }
                        }

             //cout << myParticl1e.size() << endl;
         }
     
 
//--------------------------------------------------------------
void ofApp::update(){
   //randomI=ofRandom(0,posV1.size());
    pos1={ofRandom(myImage1.getWidth()),ofRandom(myImage1.getHeight())};
    Particle newParticle1;
    newParticle1.setup(pos1,myPixels1.getColor(pos1.x,pos1.y));
    myParticle1.push_back(newParticle1);
    
   for(int i=0;i<myParticle1.size();i++){
       if(myParticle1.size()>600){
           myParticle1[i].update();
       }
    //cout << myParticle1.size() << endl;
    }

    
    for(int i=0;i<myParticle2.size();i++){
    if(myParticle1.size()>2000){
        myParticle2[i].update();
      }
    }
   cout << myParticle1.size() << endl;
    
    
}
   //removing particles if they cross pixel x -100
   //if(myParticle1[i].posV.x<-100){
       //myParticle1.erase(myParticle1.begin()+i);

   

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofPushMatrix();
    ofTranslate(85, 85);
    
    //ofSetColor(colorP[randomI]);
    //myParticle1[randomI].draw();
    
    for(int i=0;i<myParticle1.size();i++){
        myParticle1[i].draw();
    }
      
    for(int i=0;i<myParticle1.size();i++){
    if(myParticle1[i].posV.x>500){
    myParticle2[i].draw();
     }
    if(myParticle1[i].posV.x<-45){
     myParticle2[i].draw();
    }
}
}


    //ofNoFill();
    //ofDrawRectangle(0, 0, 520, 520);


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
