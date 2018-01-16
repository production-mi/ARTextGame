
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
//
//static float qrcodeCorners[8];
//static volatile BOOL reading = false;

void ReadQRCode(long long mtlTexPtr)
{
//     if (reading) return;
//     reading = YES;
//
//     //    AVCaptureSession *session = [[AVCaptureSession alloc]init];
//     //    session.sessionPreset = AVCaptureSessionPreset1280x720;
//     //
//     //    AVCaptureDeviceInput *inputDevice = nil;
//     //    AVCaptureDeviceDiscoverySession *captureDeviceDiscoverySession = [AVCaptureDeviceDiscoverySession discoverySessionWithDeviceTypes:@[AVCaptureDeviceTypeBuiltInWideAngleCamera]
//     //                              mediaType:AVMediaTypeVideo
//     //                              position:AVCaptureDevicePositionBack];
//     //    //NSArray *captureDevices = [captureDeviceDiscoverySession devices];
//     ////    NSLog(@"captureDevices_IS%@", captureDeviceDiscoverySession);
//     //
//     //
//     //    for(AVCaptureDevice *camera in captureDeviceDiscoverySession.devices)
//     //    {
//     //
//     //        if([camera position] == AVCaptureDevicePositionBack)  // is Back camera
//     //        {
//     //            NSLog(@"Camera_Is_Back");
//     //            NSLog(@"Camera_Type%@", camera);
//     //            NSError *error;
//     //            inputDevice = [AVCaptureDeviceInput deviceInputWithDevice:camera error:&error];
//     //            break;
//     //        }
//     //    }
//     //    NSLog(@"Input_Is%@", inputDevice);
//     //    //[session addInput:inputDevice];
//     //
//     //    //[session startRunning];
//
//
//     MTLTextureRef mtlTex = (__bridge MTLTextureRef) (void*) mtlTexPtr;
//     CIImage *ciImage = [CIImage imageWithMTLTexture:mtlTex options:nil];
//
//     dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
//         CGFloat iw = ciImage.extent.size.width;
//         CGFloat ih = ciImage.extent.size.height;
//         //        NSLog(@"w: %f, h: %f", iw, ih);
//
//         // CIContext *context = [CIContext context];
//         // CIDetector *detector = [CIDetector detectorOfType:CIDetectorTypeFace context:context options:@{CIDetectorAccuracy: CIDetectorAccuracyHigh}];
//         // NSArray *features = [detector featuresInImage:ciImage];
//         // //CIDetector *detector = [CIDetector detectorOfType:CIDetectorTypeQRCode context:nil options:nil];
//         // //NSArray<CIFeature *> *features = [detector featuresInImage:ciImage];
//         // NSLog(@"features: %d", features.count);
//         //CIContext *context = [CIContext context];                    // 1
//         // NSDictionary *opts = @{ CIDetectorAccuracy : CIDetectorAccuracyHigh };      // 2
//         // CIDetector *detector = [CIDetector detectorOfType:CIDetectorTypeFace
//         //                                     context:nil
//         //                                     options:nil];                    // 3
//         // opts = @{ CIDetectorImageOrientation :
//         //         [[ciImage properties] valueForKey:kCGImagePropertyOrientation] }; // 4
//         // NSArray *features = [detector featuresInImage:ciImage options:nil];        // 5
//
//
//         //Text Detection OLD
//         VNDetectTextRectanglesRequest *textLandmarks = [VNDetectTextRectanglesRequest new];
//         textLandmarks.reportCharacterBoxes = YES;
//         VNSequenceRequestHandler *handler = [VNSequenceRequestHandler new];
//         [handler performRequests:@[textLandmarks] onCIImage:ciImage error:nil];
//         //Text De
//
//         //        NSLog(@"textLandmarks: %@", textLandmarks.results);
//         //        for (VNTextObservation *observation in textLandmarks.results) {
//         //                            NSLog(@"%@", observation);
//         //                            NSLog(@"%@", observation.characterBoxes);
//         //            for (VNRectangleObservation *rectangleObservation in observation.characterBoxes) {
//         //                NSLog(@"BottomLeft_is_%f", rectangleObservation.bottomLeft.x);
//         //                //NSLog(@" |-%@", NSStringFromCGRect(rectangleObservation.bottomLeft.x));
//         //            }
//         //
//         //        }
//         //find text rectangle
//
//         // for (VNFaceObservation *observation in faceLandmarks.results){
//         //     NSLog(@"Facefeatures: %d", faceLandmarks.results);
//         // }
//
//
//         if (textLandmarks.results > 0) {
//             for (VNTextObservation *observation in textLandmarks.results) {
//                 //                NSLog(@"%@", observation);
//                 //                NSLog(@"%@", observation.characterBoxes);
//                 for (VNRectangleObservation *rectangleObservation in observation.characterBoxes) {
//                     NSLog(@"BottomLeft_X_is_%f", rectangleObservation.bottomLeft.x);
//                     NSLog(@"BottomLeft_Y_is_%f", rectangleObservation.bottomLeft.y);
//                     qrcodeCorners[0] = rectangleObservation.topLeft.x;
//                     qrcodeCorners[1] = rectangleObservation.topLeft.y;
//                     qrcodeCorners[2] = rectangleObservation.topRight.x;
//                     qrcodeCorners[3] = rectangleObservation.topRight.y;
//                     qrcodeCorners[4] = rectangleObservation.bottomLeft.x;
//                     qrcodeCorners[5] = rectangleObservation.bottomLeft.y;
//                     qrcodeCorners[6] = rectangleObservation.bottomRight.x;
//                     qrcodeCorners[7] = rectangleObservation.bottomRight.y;
//
//                     //NSLog(@" |-%@", NSStringFromCGRect(rectangleObservation.bottomLeft.x));
//                 }
//
//             }
//             //CIFaceFeature *feature = (CIFaceFeature*) [features objectAtIndex:0];
//             // CIQRCodeFeature *feature = (CIQRCodeFeature*) [features objectAtIndex:0];
//
//             // qrcodeCorners[0] = (feature.bounds.origin.x - feature.bounds.size.width / 2) / iw;
//             // qrcodeCorners[1] = (feature.bounds.origin.y - feature.bounds.size.height / 2) / ih;
//             // qrcodeCorners[2] = (feature.bounds.origin.x + feature.bounds.size.width / 2)  / iw;
//             // qrcodeCorners[3] = (feature.bounds.origin.y - feature.bounds.size.height / 2) / ih;
//             // qrcodeCorners[4] = (feature.bounds.origin.x - feature.bounds.size.width / 2) / iw;
//             // qrcodeCorners[5] = (feature.bounds.origin.y + feature.bounds.size.height / 2) / ih;
//             // qrcodeCorners[6] = (feature.bounds.origin.x + feature.bounds.size.width / 2) / iw;
//             // qrcodeCorners[7] = (feature.bounds.origin.y + feature.bounds.size.height / 2) / ih;
//             // qrcodeCorners[0] = feature.topLeft.x / iw;
//             // qrcodeCorners[1] = feature.topLeft.y / ih;
//             // qrcodeCorners[2] = feature.topRight.x / iw;
//             // qrcodeCorners[3] = feature.topRight.y / ih;
//             // qrcodeCorners[4] = feature.bottomLeft.x / iw;
//             // qrcodeCorners[5] = feature.bottomLeft.y / ih;
//             // qrcodeCorners[6] = feature.bottomRight.x / iw;
//             // qrcodeCorners[7] = feature.bottomRight.y / ih;
//
//             //UnitySendMessage("QRCodeReader", "OnReadQRCode", "");
//         }
//
//         reading = NO;
//     });
}

//void GetQRCodeCorners(int32_t **cornersPtr)
//{
//    float *floatArray = malloc(sizeof(float) * 8);
//    memcpy(floatArray, qrcodeCorners, sizeof(qrcodeCorners));
//    *cornersPtr = (int32_t*) floatArray;
//}
