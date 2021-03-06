/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPathLazyImageAsset : UIImageAsset {
    BOOL _haveCGCacheImages;
    NSArray *_imagePaths;
    BOOL _imagesHaveBeenLoaded;
}

@property (nonatomic) BOOL haveCGCacheImages;
@property (nonatomic, copy) NSArray *imagePaths;

- (void)_clearResolvedImageResources;
- (void)dealloc;
- (BOOL)haveCGCacheImages;
- (id)imagePaths;
- (id)imageWithTraitCollection:(id)arg1;
- (void)setHaveCGCacheImages:(BOOL)arg1;
- (void)setImagePaths:(id)arg1;

@end
