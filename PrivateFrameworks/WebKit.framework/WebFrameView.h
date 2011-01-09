/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebFrameViewPrivate;



@interface WebFrameView : WAKView <WebCoreBridgeHolder>
{
    WebFrameViewPrivate *_private;
}

+ (id)_viewTypesAllowImageTypeOmission:(BOOL)arg1;
+ (BOOL)_canShowMIMETypeAsHTML:(id)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)finalize;
- (struct CGPoint { float x1; float x2; })contentsPointForScrollView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRectForScrollView:(id)arg1;
- (BOOL)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)webFrame;
- (void)setAllowsScrolling:(BOOL)arg1;
- (BOOL)allowsScrolling;
- (id)documentView;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setNextKeyView:(id)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_bridge;
- (BOOL)_scrollOverflowInDirection:(NSInteger)arg1 granularity:(NSInteger)arg2;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)_goBack;
- (void)_goForward;
- (BOOL)_scrollVerticallyBy:(float)arg1;
- (BOOL)_scrollHorizontallyBy:(float)arg1;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (BOOL)_pageVertically:(BOOL)arg1;
- (BOOL)_pageHorizontally:(BOOL)arg1;
- (BOOL)_scrollLineVertically:(BOOL)arg1;
- (BOOL)_scrollLineHorizontally:(BOOL)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (BOOL)_firstResponderIsFormControl;
- (void)_forwardMouseEvent:(struct __GSEvent { }*)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)keyDown:(struct __GSEvent { }*)arg1;
- (id)_webcore_effectiveFirstResponder;
- (BOOL)documentViewShouldHandlePrint;
- (void)printDocumentView;
- (float)_area;
- (BOOL)_hasScrollBars;
- (id)_largestChildWithScrollBars;
- (id)_contentView;
- (Class)_customScrollViewClass;
- (void)_setCustomScrollViewClass:(Class)arg1;
- (float)frameScale;
- (void)setFrameScale:(float)arg1;
- (id)_webView;
- (void)_setMarginWidth:(NSInteger)arg1;
- (NSInteger)_marginWidth;
- (void)_setMarginHeight:(NSInteger)arg1;
- (NSInteger)_marginHeight;
- (void)_setDocumentView:(id)arg1;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (id)_scrollView;
- (float)_verticalPageScrollDistance;
- (float)_verticalKeyboardScrollDistance;
- (id)webCoreBridge;

@end