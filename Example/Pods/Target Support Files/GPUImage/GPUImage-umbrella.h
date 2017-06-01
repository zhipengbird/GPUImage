#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "GPUImage3x3ConvolutionFilter.h"
#import "GPUImageBilateralFilter.h"
#import "GPUImageBoxBlurFilter.h"
#import "GPUImageCannyEdgeDetectionFilter.h"
#import "GPUImageClosingFilter.h"
#import "GPUImageColorLocalBinaryPatternFilter.h"
#import "GPUImageColorPackingFilter.h"
#import "GPUImageColourFASTFeatureDetector.h"
#import "GPUImageColourFASTSamplingOperation.h"
#import "GPUImageCropFilter.h"
#import "GPUImageCrosshairGenerator.h"
#import "GPUImageDilationFilter.h"
#import "GPUImageDirectionalNonMaximumSuppressionFilter.h"
#import "GPUImageDirectionalSobelEdgeDetectionFilter.h"
#import "GPUImageErosionFilter.h"
#import "GPUImageFASTCornerDetectionFilter.h"
#import "GPUImageGaussianBlurFilter.h"
#import "GPUImageGaussianBlurPositionFilter.h"
#import "GPUImageGaussianSelectiveBlurFilter.h"
#import "GPUImageHarrisCornerDetectionFilter.h"
#import "GPUImageHighPassFilter.h"
#import "GPUImageHoughTransformLineDetector.h"
#import "GPUImageiOSBlurFilter.h"
#import "GPUImageLanczosResamplingFilter.h"
#import "GPUImageLaplacianFilter.h"
#import "GPUImageLineGenerator.h"
#import "GPUImageLocalBinaryPatternFilter.h"
#import "GPUImageLowPassFilter.h"
#import "GPUImageMedianFilter.h"
#import "GPUImageMotionBlurFilter.h"
#import "GPUImageMotionDetector.h"
#import "GPUImageNobleCornerDetectionFilter.h"
#import "GPUImageNonMaximumSuppressionFilter.h"
#import "GPUImageOpeningFilter.h"
#import "GPUImageParallelCoordinateLineTransformFilter.h"
#import "GPUImagePrewittEdgeDetectionFilter.h"
#import "GPUImageRGBClosingFilter.h"
#import "GPUImageRGBDilationFilter.h"
#import "GPUImageRGBErosionFilter.h"
#import "GPUImageRGBOpeningFilter.h"
#import "GPUImageSharpenFilter.h"
#import "GPUImageShiTomasiFeatureDetectionFilter.h"
#import "GPUImageSingleComponentGaussianBlurFilter.h"
#import "GPUImageSobelEdgeDetectionFilter.h"
#import "GPUImageThresholdEdgeDetectionFilter.h"
#import "GPUImageThresholdedNonMaximumSuppressionFilter.h"
#import "GPUImageTiltShiftFilter.h"
#import "GPUImageTransformFilter.h"
#import "GPUImageUnsharpMaskFilter.h"
#import "GPUImageWeakPixelInclusionFilter.h"
#import "GPUImageXYDerivativeFilter.h"
#import "GPUImageZoomBlurFilter.h"

FOUNDATION_EXPORT double GPUImageVersionNumber;
FOUNDATION_EXPORT const unsigned char GPUImageVersionString[];

