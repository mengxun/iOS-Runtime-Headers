/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIImageBuffer : NSObject 
{
    NSUInteger m_width;
    NSUInteger m_height;
    NSUInteger m_pixelCount;
    NSUInteger m_componentCount;
    struct { float x1; float x2; float x3; float x4; } *m_pixels;
}

@property(readonly) NSUInteger height;
@property(readonly) NSUInteger width;


- (id)initWithWidth:(NSUInteger)arg1 height:(NSUInteger)arg2;
- (void)dealloc;
- (struct { float x1; float x2; float x3; float x4; }*)pixels;
- (void)getPixel:(struct { float x1; float x2; float x3; float x4; }*)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setPixel:(struct { float x1; float x2; float x3; float x4; }*)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)fillWithPixel:(struct { float x1; float x2; float x3; float x4; }*)arg1;
- (struct CGImage { }*)createImage;
- (NSUInteger)height;
- (NSUInteger)width;

@end