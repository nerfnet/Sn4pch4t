// 49126048c3d19dd5b676b8d39844cf133833b67a
// Generated by the value-object.rb  DO NOT EDIT!!

#import "SCManagedCaptureDevice.h"

#import <AvailabilityMacros.h>

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

@protocol SCManagedCapturerState <NSObject, NSCoding, NSCopying>

@property (nonatomic, assign, readonly) BOOL isRunning;

@property (nonatomic, assign, readonly) BOOL isNightModeActive;

@property (nonatomic, assign, readonly) BOOL isPortraitModeActive;

@property (nonatomic, assign, readonly) BOOL lowLightCondition;

@property (nonatomic, assign, readonly) BOOL adjustingExposure;

@property (nonatomic, assign, readonly) SCManagedCaptureDevicePosition devicePosition;

@property (nonatomic, assign, readonly) CGFloat zoomFactor;

@property (nonatomic, assign, readonly) BOOL flashSupported;

@property (nonatomic, assign, readonly) BOOL torchSupported;

@property (nonatomic, assign, readonly) BOOL flashActive;

@property (nonatomic, assign, readonly) BOOL torchActive;

@property (nonatomic, assign, readonly) BOOL lensesActive;

@property (nonatomic, assign, readonly) BOOL arSessionActive;

@property (nonatomic, assign, readonly) BOOL liveVideoStreaming;

@property (nonatomic, assign, readonly) BOOL lensProcessorReady;

@end

@interface SCManagedCapturerState : NSObject <SCManagedCapturerState>

@property (nonatomic, assign, readonly) BOOL isRunning;

@property (nonatomic, assign, readonly) BOOL isNightModeActive;

@property (nonatomic, assign, readonly) BOOL isPortraitModeActive;

@property (nonatomic, assign, readonly) BOOL lowLightCondition;

@property (nonatomic, assign, readonly) BOOL adjustingExposure;

@property (nonatomic, assign, readonly) SCManagedCaptureDevicePosition devicePosition;

@property (nonatomic, assign, readonly) CGFloat zoomFactor;

@property (nonatomic, assign, readonly) BOOL flashSupported;

@property (nonatomic, assign, readonly) BOOL torchSupported;

@property (nonatomic, assign, readonly) BOOL flashActive;

@property (nonatomic, assign, readonly) BOOL torchActive;

@property (nonatomic, assign, readonly) BOOL lensesActive;

@property (nonatomic, assign, readonly) BOOL arSessionActive;

@property (nonatomic, assign, readonly) BOOL liveVideoStreaming;

@property (nonatomic, assign, readonly) BOOL lensProcessorReady;

- (instancetype)initWithIsRunning:(BOOL)isRunning
                isNightModeActive:(BOOL)isNightModeActive
             isPortraitModeActive:(BOOL)isPortraitModeActive
                lowLightCondition:(BOOL)lowLightCondition
                adjustingExposure:(BOOL)adjustingExposure
                   devicePosition:(SCManagedCaptureDevicePosition)devicePosition
                       zoomFactor:(CGFloat)zoomFactor
                   flashSupported:(BOOL)flashSupported
                   torchSupported:(BOOL)torchSupported
                      flashActive:(BOOL)flashActive
                      torchActive:(BOOL)torchActive
                     lensesActive:(BOOL)lensesActive
                  arSessionActive:(BOOL)arSessionActive
               liveVideoStreaming:(BOOL)liveVideoStreaming
               lensProcessorReady:(BOOL)lensProcessorReady;

@end
