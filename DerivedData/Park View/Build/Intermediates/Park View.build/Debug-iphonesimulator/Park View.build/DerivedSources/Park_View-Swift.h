// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import MapKit;
@import CoreLocation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC9Park_View11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Park_View20AttractionAnnotation")
@interface AttractionAnnotation : NSObject <MKAnnotation>
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString * __nullable title;
@property (nonatomic, copy) NSString * __nullable subtitle;
@end

@class NSCoder;

SWIFT_CLASS("_TtC9Park_View24AttractionAnnotationView")
@interface AttractionAnnotationView : MKAnnotationView
- (nonnull instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAnnotation:(id <MKAnnotation> __nullable)annotation reuseIdentifier:(NSString * __nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;
@class NSBundle;

SWIFT_CLASS("_TtC9Park_View24MapOptionsViewController")
@interface MapOptionsViewController : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)numberOfSectionsInTableView:(UITableView * __nonnull)tableView;
- (NSInteger)tableView:(UITableView * __nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * __nonnull)tableView:(UITableView * __nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (void)tableView:(UITableView * __nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9Park_View14ParkMapOverlay")
@interface ParkMapOverlay : NSObject <MKOverlay, MKAnnotation>
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic) MKMapRect boundingMapRect;
@end

@class UIImage;

SWIFT_CLASS("_TtC9Park_View18ParkMapOverlayView")
@interface ParkMapOverlayView : MKOverlayRenderer
@property (nonatomic, strong) UIImage * __nonnull overlayImage;
- (nonnull instancetype)initWithOverlay:(id <MKOverlay> __nonnull)overlay overlayImage:(UIImage * __nonnull)overlayImage OBJC_DESIGNATED_INITIALIZER;
- (void)drawMapRect:(MKMapRect)mapRect zoomScale:(MKZoomScale)zoomScale inContext:(CGContextRef __nonnull)context;
@end

@class UIStoryboardSegue;
@class MKMapView;
@class UISegmentedControl;

SWIFT_CLASS("_TtC9Park_View21ParkMapViewController")
@interface ParkMapViewController : UIViewController
@property (nonatomic, weak) IBOutlet MKMapView * __null_unspecified mapView;
@property (nonatomic, weak) IBOutlet UISegmentedControl * __null_unspecified mapTypeSegmentedControl;
- (void)viewDidLoad;
- (void)loadSelectedOptions;
- (void)prepareForSegue:(UIStoryboardSegue * __nonnull)segue sender:(id __nullable)sender;
- (IBAction)closeOptions:(UIStoryboardSegue * __nonnull)exitSegue;
- (void)addOverlay;
- (void)addAttractionPins;
- (void)addRoute;
- (IBAction)mapTypeChanged:(id __nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ParkMapViewController (SWIFT_EXTENSION(Park_View)) <MKMapViewDelegate>
- (MKOverlayRenderer * __nonnull)mapView:(MKMapView * __nonnull)mapView rendererForOverlay:(id <MKOverlay> __nonnull)overlay;
- (MKAnnotationView * __nullable)mapView:(MKMapView * __nonnull)mapView viewForAnnotation:(id <MKAnnotation> __nonnull)annotation;
@end

#pragma clang diagnostic pop
