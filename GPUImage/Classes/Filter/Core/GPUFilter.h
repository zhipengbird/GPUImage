//
//  GPUFilter.h
//  Pods
//
//  Created by 袁平华 on 2017/6/1.
//
//

#ifndef GPUFilter_h
#define GPUFilter_h

//Core
#import "GPUImage3x3TextureSamplingFilter.h"
#import "GPUImageBuffer.h"
#import "GPUImageFilterGroup.h"
#import "GPUImageFourInputFilter.h"
#import "GPUImageThreeInputFilter.h"
#import "GPUImageTwoInputCrossTextureSamplingFilter.h"
#import "GPUImageTwoInputFilter.h"
#import "GPUImageTwoPassFilter.h"
#import "GPUImageTwoPassTextureSamplingFilter.h"


//Blends
#import "GPUImageAddBlendFilter.h"
#import "GPUImageAlphaBlendFilter.h"
#import "GPUImageChromaKeyBlendFilter.h"
#import "GPUImageColorBlendFilter.h"
#import "GPUImageColorBurnBlendFilter.h"
#import "GPUImageColorDodgeBlendFilter.h"
#import "GPUImageDarkenBlendFilter.h"
#import "GPUImageDifferenceBlendFilter.h"
#import "GPUImageDissolveBlendFilter.h"
#import "GPUImageDivideBlendFilter.h"
#import "GPUImageExclusionBlendFilter.h"
#import "GPUImageHardLightBlendFilter.h"
#import "GPUImageHueBlendFilter.h"
#import "GPUImageLightenBlendFilter.h"
#import "GPUImageLinearBurnBlendFilter.h"
#import "GPUImageLuminosityBlendFilter.h"
#import "GPUImageMaskFilter.h"
#import "GPUImageMultiplyBlendFilter.h"
#import "GPUImageNormalBlendFilter.h"
#import "GPUImageOverlayBlendFilter.h"
#import "GPUImagePoissonBlendFilter.h"
#import "GPUImageSaturationBlendFilter.h"
#import "GPUImageScreenBlendFilter.h"
#import "GPUImageSoftLightBlendFilter.h"
#import "GPUImageSourceOverBlendFilter.h"
#import "GPUImageSubtractBlendFilter.h"


//Colors
#import "GPUImageAdaptiveThresholdFilter.h"
#import "GPUImageAmatorkaFilter.h"
#import "GPUImageAverageColor.h"
#import "GPUImageAverageLuminanceThresholdFilter.h"
#import "GPUImageBrightnessFilter.h"
#import "GPUImageChromaKeyFilter.h"
#import "GPUImageColorInvertFilter.h"
#import "GPUImageColorMatrixFilter.h"
#import "GPUImageContrastFilter.h"
#import "GPUImageExposureFilter.h"
#import "GPUImageFalseColorFilter.h"
#import "GPUImageGammaFilter.h"
#import "GPUImageGrayscaleFilter.h"
#import "GPUImageHazeFilter.h"
#import "GPUImageHighlightShadowFilter.h"
#import "GPUImageHistogramEqualizationFilter.h"
#import "GPUImageHistogramFilter.h"
#import "GPUImageHistogramGenerator.h"
#import "GPUImageHSBFilter.h"
#import "GPUImageHueFilter.h"
#import "GPUImageLevelsFilter.h"
#import "GPUImageLookupFilter.h"
#import "GPUImageLuminanceRangeFilter.h"
#import "GPUImageLuminanceThresholdFilter.h"
#import "GPUImageLuminosity.h"
#import "GPUImageMissEtikateFilter.h"
#import "GPUImageMonochromeFilter.h"
#import "GPUImageOpacityFilter.h"
#import "GPUImageRGBFilter.h"
#import "GPUImageSaturationFilter.h"
#import "GPUImageSepiaFilter.h"
#import "GPUImageSoftEleganceFilter.h"
#import "GPUImageSolidColorGenerator.h"
#import "GPUImageToneCurveFilter.h"
#import "GPUImageWhiteBalanceFilter.h"


//Effects
#import "GPUImageBulgeDistortionFilter.h"
#import "GPUImageCGAColorspaceFilter.h"
#import "GPUImageCrosshatchFilter.h"
#import "GPUImageEmbossFilter.h"
#import "GPUImageGlassSphereFilter.h"
#import "GPUImageHalftoneFilter.h"
#import "GPUImageJFAVoronoiFilter.h"
#import "GPUImageKuwaharaFilter.h"
#import "GPUImageKuwaharaRadius3Filter.h"
#import "GPUImageMosaicFilter.h"
#import "GPUImagePerlinNoiseFilter.h"
#import "GPUImagePinchDistortionFilter.h"
#import "GPUImagePixellateFilter.h"
#import "GPUImagePixellatePositionFilter.h"
#import "GPUImagePolarPixellateFilter.h"
#import "GPUImagePolkaDotFilter.h"
#import "GPUImagePosterizeFilter.h"
#import "GPUImageSketchFilter.h"
#import "GPUImageSmoothToonFilter.h"
#import "GPUImageSphereRefractionFilter.h"
#import "GPUImageStretchDistortionFilter.h"
#import "GPUImageSwirlFilter.h"
#import "GPUImageThresholdSketchFilter.h"
#import "GPUImageToonFilter.h"
#import "GPUImageVignetteFilter.h"
#import "GPUImageVoronoiConsumerFilter.h"




//Images
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



#endif /* GPUFilter_h */
