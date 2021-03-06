/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLineDrawStyle : VKRenderStyle

+ (int)renderStyleID;

- (struct Matrix<float, 4, 1> { float x1[4]; })dropShadowColorAtZoom:(float)arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })dropShadowOffsetAtZoom:(float)arg1;
- (float)dropShadowWidthAtZoom:(float)arg1;
- (unsigned long long)fillDashPatternAtZoom:(float)arg1;
- (BOOL)hasDashAtAnyZ;
- (BOOL)hasDropShadowAtZoom:(float)arg1;
- (BOOL)hasFillDashAtZoom:(int)arg1;
- (BOOL)hasStrokeDashAtZoom:(int)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })innerGlowColorAtZoom:(float)arg1;
- (float)innerGlowRadiusAtZoom:(float)arg1;
- (float)insetShadowAngleAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })insetShadowColorAtZoom:(float)arg1;
- (float)insetShadowHeightAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })outerGlowColorAtZoom:(float)arg1;
- (float)outerGlowRadiusAtZoom:(float)arg1;
- (unsigned long long)strokeDashPatternAtZoom:(float)arg1;

@end
