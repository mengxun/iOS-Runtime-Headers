/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CMOdometerProxy;

@interface CMOdometer : NSObject {
    CMOdometerProxy *_odometerProxy;
}

@property(readonly) CMOdometerProxy * odometerProxy;

+ (bool)isOdometerAvailableForActivity:(long long)arg1;

- (void)dealloc;
- (id)init;
- (id)odometerProxy;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id)arg2;
- (void)stopOdometerUpdates;

@end