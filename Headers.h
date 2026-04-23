#import <YouTubeHeader/YTAlertView.h>
#import <YouTubeHeader/YTIGuideResponse.h>
#import <YouTubeHeader/YTIGuideResponseSupportedRenderers.h>
#import <YouTubeHeader/YTIPivotBarSupportedRenderers.h>
#import <YouTubeHeader/YTIPivotBarRenderer.h>
#import <YouTubeHeader/YTIBrowseRequest.h>
#import <YouTubeHeader/YTISectionListRenderer.h>
#import <YouTubeHeader/YTQTMButton.h>
#import <YouTubeHeader/YTIButtonRenderer.h>
#import <YouTubeHeader/YTVideoQualitySwitchOriginalController.h>
#import <YouTubeHeader/YTWatchController.h>
#import <YouTubeHeader/YTPlayerOverlay.h>
#import <YouTubeHeader/YTPlayerOverlayProvider.h>
#import <YouTubeHeader/YTSettingsViewController.h>
#import <YouTubeHeader/YTSettingsSectionItem.h>
#import <YouTubeHeader/YTSettingsSectionItemManager.h>
#import <YouTubeHeader/YTSettingsPickerViewController.h>
#import <YouTubeHeader/YTUIUtils.h>
#import <YouTubeHeader/YTIMenuConditionalServiceItemRenderer.h>
#import <YouTubeHeader/YTToastResponderEvent.h>
#import <YouTubeHeader/YTPageStyleController.h>
#import <YouTubeHeader/ASCollectionElement.h>
#import <YouTubeHeader/ASCollectionView.h>
#import <YouTubeHeader/ELMNodeController.h>

#define IS_ENABLED(k) [[NSUserDefaults standardUserDefaults] boolForKey:k]
#define YTPremiumLogo @"YouModYTPremiumLogo"
#define HideYTLogo @"YouModHideYTLogo"
#define CenterYTLogo @"YouModCenterYTLogo"
#define HideNoti @"YouModHideNotificationButton"
#define HideSearch @"YouModHideSearchButton"
#define HideVoiceSearch @"YouModHideVoiceSearchButton"
#define HideCastButtonNav @"YouModHideCastButtonNavigationBar"
#define HideHoriShelf @"YouModHideHoriShelf"
#define HideGenMusicShelf @"YouModHideGenMusicShelf"
#define HideShortsShelf @"YouModHideShortsShelf"
#define HideSubbar @"YouModHideSubbar"
#define HideAutoPlayToggle @"YouModHideAutoPlayToggle"
#define HideCaptionsButton @"YouModHideCaptionsButton"
#define HideCastButtonPlayer @"YouModHideCastButtonPlayer"
#define HidePrevButton @"YouModHidePrevButton"
#define HideNextButton @"YouModHideNextButton"
#define RemoveDarkOverlay @"YouModRemoveDarkOverlay"
#define HideEndScreenCards @"YouModHideEndScreenCards"
#define HideWaterMark @"YouModHideWaterMark"
#define DisablesDoubleTap @"YouModDisablesDoubleTap"
#define DisablesLongHold @"YouModDisablesLongHold"
#define AutoExitFullScreen @"YouModAutoExitFullScreen"
#define HideLikeButton @"YouModHideLikeButton"
#define HideDisLikeButton @"YouModHideDisLikeButton"
#define HideShareButton @"YouModHideShareButton"
#define HideDownloadButton @"YouModHideDownloadButton"
#define HideClipButton @"YouModHideClipButton"
#define HideRemixButton @"YouModHideRemixButton"
#define HideSaveButton @"YouModHideSaveButton"



#define HideTabIndi @"YouModHideTabIndicators"
#define HideTabLabels @"YouModHideTabLabels"
#define HideHomeTab @"YouModHideHomeTab"
#define HideShortsTab @"YouModHideShortsTab"
#define HideCreateButton @"YouModHideCreateButton"
#define HideSubscriptTab @"YouModHideSubscriptionsTab"
