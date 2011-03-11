/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSString, NSTimer, CNFRegLoadingView, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate> {
    UIWebView *_webView;
    CNFRegLoadingView *_loadingView;
    NSString *_leftButtonAction;
    NSString *_rightButtonAction;
    NSMutableDictionary *_urlHandlers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    NSTimer *_timeoutTimer;
    struct { 
        unsigned int isLoading : 1; 
        unsigned int isLoaded : 1; 
        unsigned int wantsWifi : 1; 
        unsigned int modifiedWiFi : 1; 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int checkedLogState : 1; 
        unsigned int shouldLog : 1; 
        unsigned int timedOut; 
    } _webControllerFlags;
}

@property(readonly) BOOL isLoading;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL timedOut;
@property(copy) id alertHandler;
@property(copy) NSString * rightButtonAction;
@property(copy) NSString * leftButtonAction;
@property(retain) UIWebView * webView;


- (void)setHeadersForRequest:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)_startTimeoutWithDuration:(double)arg1;
- (id)schemeForURL:(id)arg1;
- (BOOL)intForServerValue:(id)arg1 value:(int*)arg2 defaultValue:(int)arg3;
- (BOOL)_shouldLog;
- (void)setupUrlHandlers;
- (void)handleRightButtonError:(id)arg1;
- (void)_stopTimeout;
- (id)alertHandler;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (id)leftButtonAction;
- (BOOL)timedOut;
- (void)setWantsWifi:(BOOL)arg1;
- (void)showSpinner;
- (void)hideSpinner;
- (id)overrideURLForURL:(id)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (void)addSelector:(SEL)arg1 forScheme:(id)arg2;
- (SEL)selectorForScheme:(id)arg1;
- (void)clearUrlHandlers;
- (id)queryDictionaryForUrl:(id)arg1;
- (id)numberForServerValue:(id)arg1;
- (BOOL)boolForServerValue:(id)arg1 value:(BOOL*)arg2 defaultValue:(BOOL)arg3;
- (BOOL)uintForServerValue:(id)arg1 value:(unsigned int*)arg2 defaultValue:(unsigned int)arg3;
- (id)functionStringFromCallbackName:(id)arg1;
- (id)functionStringFromCallbackName:(id)arg1 withStringArgument:(id)arg2;
- (struct OpaqueJSContext { }*)javaScriptExecutionContext;
- (id)javaScriptStringForValue:(struct OpaqueJSValue { }*)arg1;
- (id)executeJavaScript:(id)arg1 error:(id*)arg2;
- (id)executeJavaScript:(id)arg1;
- (id)navButtonWithTitle:(id)arg1 action:(SEL)arg2 highlight:(BOOL)arg3;
- (void)_clearLeftButtonTarget;
- (void)leftButtonTapped:(id)arg1;
- (void)handleLeftButtonError:(id)arg1;
- (void)_clearRightButtonTarget;
- (void)rightButtonTapped:(id)arg1;
- (void)parseNavBarURL:(id)arg1;
- (void)parseAlertURL:(id)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)_handleTimeout;
- (void)setAlertHandler:(id)arg1;
- (id)rightButtonAction;
- (void)setRightButtonAction:(id)arg1;
- (void)setLeftButtonAction:(id)arg1;
- (id)logName;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)isLoaded;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(unsigned int)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)isLoading;
- (void)setWebView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)applicationWillSuspend;
- (id)webView;
- (void)dealloc;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end