
//
//  QRCodeReader.m
//  Unity-iPhone
//
//  Created by Yoshikazu Kuramochi on 2017/06/22.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreML/CoreML.h>
#import <Metal/Metal.h>
#import <ARkit/ARkit.h>
#import <Vision/Vision.h>
#import "MobileNet.h"

static float qrcodeCorners[8];
static volatile BOOL reading = false;
NSString* identifier = @"";
//VNCoreMLModel* _faceClassificationModel;


void ReadBuffer(void* cvPixelBufferPtr)
{
    if(reading)return;
    reading = YES;
    
    CIImage* image = [[CIImage imageWithCVPixelBuffer:cvPixelBufferPtr]imageByApplyingCGOrientation:kCGImagePropertyOrientationRight];
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        MLModel *model = [[[MobileNet alloc] init] model];
        VNCoreMLModel *m = [VNCoreMLModel modelForMLModel: model error:nil];
        
        
        //        //Text Detection OLD
        //        VNDetectTextRectanglesRequest *textLandmarks = [VNDetectTextRectanglesRequest new];
        //        textLandmarks.reportCharacterBoxes = YES;
        //        VNSequenceRequestHandler *handler = [VNSequenceRequestHandler new];
        //        [handler performRequests:@[textLandmarks] onCVPixelBuffer:cvPixelBufferPtr error:nil];
        //        NSLog(@"features: %@", textLandmarks.results);
        //        //Text De
        
        //classification
        VNImageRequestHandler* objectClassificationHandler = [[VNImageRequestHandler alloc]initWithCIImage:image options:@{}];
        VNCoreMLRequest* objectClassificationRequest = [[VNCoreMLRequest alloc]initWithModel:m];
        objectClassificationRequest.imageCropAndScaleOption = VNImageCropAndScaleOptionScaleFit;
        [objectClassificationHandler performRequests:@[objectClassificationRequest] error:nil];
        NSArray* classifiedResults = objectClassificationRequest.results;
        
        if (classifiedResults.count >0 ) {
            VNClassificationObservation* objectResult = classifiedResults.firstObject;
            if(objectResult.confidence > 0.1)
            {
                NSLog(@"Possible:<%@,%.1f>",objectResult.identifier, objectResult.confidence);
                identifier  =objectResult.identifier;
            }
            UnitySendMessage("QRCodeReader", "OnGetPossibleName", "");
        }
        
//        //Face Detection
//        VNImageRequestHandler* faceDetectHandler = [[VNImageRequestHandler alloc]initWithCIImage:image options:@{}];
//        VNDetectFaceRectanglesRequest* faceDetectRequest = [VNDetectFaceRectanglesRequest new];
//        [faceDetectHandler performRequests:@[faceDetectRequest] error:nil];
//        NSArray* results = faceDetectRequest.results;
//
//        if(results.count > 0){
//            VNFaceObservation* observation = results.firstObject;
//            //            CGFloat BoxMin_X = CGRectGetMinX(observation.boundingBox);
//            //            CGFloat BoxMin_Y = CGRectGetMinY(observation.boundingBox);
//            //            CGFloat BoxMax_X = CGRectGetMaxX(observation.boundingBox);
//            //            CGFloat BoxMax_Y = CGRectGetMaxY(observation.boundingBox);
//            CGRect rectangle = observation.boundingBox;
//            CGFloat originX = rectangle.origin.x;
//            CGFloat originY = rectangle.origin.y;
//            CGFloat sizeWidth = rectangle.size.width;
//            CGFloat sizeHeight = rectangle.size.height;
//
//            NSLog(@"originX: %f", originX);
//            NSLog(@"originY: %f", originY);
//            NSLog(@"sizeWidth: %f", sizeWidth);
//            NSLog(@"sizeHeight: %f", sizeHeight);
//
//
//            ///topLeft.X
//            qrcodeCorners[0] = originX;
//
//            ///topLeft.Y
//            qrcodeCorners[1] = originY + sizeHeight;
//
//            ///topRight.X
//            qrcodeCorners[2] = originX + sizeWidth;
//
//            ///topRight.Y
//            qrcodeCorners[3] = originY + sizeHeight;
//
//            ///bottomLeft.X
//            qrcodeCorners[4] = originX;
//
//            ///bottomLeft.Y
//            qrcodeCorners[5] = originY;
//
//            ///bottomRight.X
//            qrcodeCorners[6] = originX + sizeWidth;
//
//            ///bottomRight.Y
//            qrcodeCorners[7] = originY;
//            //
//            //            if (faceDetectRequest.results > 0) {
//            //                //            VNFaceObservation* observation = faceDetectRequest.results.firstObject;
//            //                //                for (VNRectangleObservation *rectangleObservation in observation) {
//            //                //                    //NSLog(@"BottomLeft_X_is_%f", rectangleObservation.bottomLeft.x);
//            //                //                    //NSLog(@"BottomLeft_Y_is_%f", rectangleObservation.bottomLeft.y);
//            //                //                    qrcodeCorners[0] = rectangleObservation.topLeft.x;
//            //                //                    qrcodeCorners[1] = rectangleObservation.topLeft.y;
//            //                //                    qrcodeCorners[2] = rectangleObservation.topRight.x;
//            //                //                    qrcodeCorners[3] = rectangleObservation.topRight.y;
//            //                //                    qrcodeCorners[4] = rectangleObservation.bottomLeft.x;
//            //                //                    qrcodeCorners[5] = rectangleObservation.bottomLeft.y;
//            //                //                    qrcodeCorners[6] = rectangleObservation.bottomRight.x;
//            //                //                    qrcodeCorners[7] = rectangleObservation.bottomRight.y;
//            //                //                    //NSLog(@" |-%@", NSStringFromCGRect(rectangleObservation.bottomLeft.x));
//            //                //                }
//            //
//            //            }
//            UnitySendMessage("QRCodeReader", "OnReadQRCode", "");
//        }
//
        reading = NO;
    });
}

char * GetPossibleName(char *possibleName)
{
    // NSLog(@"exec GetPossibleName");
    const char *name = [identifier UTF8String];
    possibleName = (char *) malloc(strlen(name) + 1);
    strcpy(possibleName, name);
    
    return possibleName;
}

void GetQRCodeCorners(int32_t **cornersPtr)
{
    NSLog(@"exec GetQRCodeCorners");
    float *floatArray = malloc(sizeof(float) * 8);
    memcpy(floatArray, qrcodeCorners, sizeof(qrcodeCorners));
    *cornersPtr = (int32_t*) floatArray;
}

