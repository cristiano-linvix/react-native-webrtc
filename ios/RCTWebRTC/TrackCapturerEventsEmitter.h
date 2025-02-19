#import "CapturerEventsDelegate.h"
#import "CaptureController.h"

NS_ASSUME_NONNULL_BEGIN

@interface TrackCapturerEventsEmitter : NSObject<CapturerEventsDelegate>

- (instancetype)initWith:(NSString *)trackId
            webRTCModule:(WebRTCModule *)module;

- (void)capturerDidEnd:(RTCVideoCapturer *) capturer;
@end

NS_ASSUME_NONNULL_END
