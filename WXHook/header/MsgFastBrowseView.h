//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, SimpleImgInfo, UILabel, WCTimeLineFooterView;

@protocol MsgFastBrowseViewDelegate <NSObject>

@end

@interface MsgFastBrowseView : MMUIView
{
    SimpleImgInfo *m_curImgInfo;
    NSMutableArray *m_arrImgInfo;
    double m_scrollOffset;
    NSMutableDictionary *m_dicSectionTitle;
    NSMutableDictionary *m_dicMsgsByTitle;
    NSMutableDictionary *m_dicSectionSelected;
    MMTableView *m_tableView;
    UILabel *m_noImageTip;
    id <MsgFastBrowseViewDelegate> fastBrowseViewDelegate;
    unsigned long long m_colNum;
    double m_margin;
    NSMutableArray *m_needLoadArray;
    WCTimeLineFooterView *m_nextLoadingView;
    WCTimeLineFooterView *m_preLoadingView;
    _Bool m_showCheckMark;
    _Bool m_hideSelectAllSection;
    _Bool m_bLargeImg;
    _Bool _m_bNotMainTable;
    int m_style;
    id <MsgFastBrowseViewDelegate> m_fastBrowseViewDelegate;
    NSString *_m_nsChatName;
}

- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)_genImgCell:(id)arg1 indexPath:(id)arg2;
- (long long)calcImgItemIndex:(long long)arg1 num:(long long)arg2;
- (void)dealloc;
- (void)endHighLightedCurMsg;
- (void)genImgCell:(id)arg1 indexPath:(id)arg2;
- (id)getIndexPathOfCurMsg;
- (id)getSelectedMessages;
- (void)initData;
- (void)initTableView;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 style:(int)arg3;
- (id)initWithImgInfo:(id)arg1 withDelegate:(id)arg2 style:(int)arg3 largeImg:(_Bool)arg4;
- (id)initWithMsgWrap:(id)arg1 withDelegate:(id)arg2 style:(int)arg3;
@property(nonatomic) _Bool m_bLargeImg; // @synthesize m_bLargeImg;
@property(nonatomic) _Bool m_bNotMainTable; // @synthesize m_bNotMainTable=_m_bNotMainTable;
@property(retain, nonatomic) SimpleImgInfo *m_curImgInfo; // @synthesize m_curImgInfo;
@property(nonatomic) __weak id <MsgFastBrowseViewDelegate> m_fastBrowseViewDelegate; // @synthesize m_fastBrowseViewDelegate;
@property(nonatomic) _Bool m_hideSelectAllSection; // @synthesize m_hideSelectAllSection;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName=_m_nsChatName;
@property(nonatomic) double m_scrollOffset; // @synthesize m_scrollOffset;
@property(nonatomic) _Bool m_showCheckMark; // @synthesize m_showCheckMark;
@property(nonatomic) int m_style; // @synthesize m_style;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickMsgSquareThumb:(id)arg1;
- (_Bool)onSelectMessage:(id)arg1;
- (void)onSelectSection:(id)arg1;
- (void)rebuildMsgData;
- (void)relaodCellWhenScrollViewStop;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)selectAllMessages;
- (void)setCurMsgHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startHighLightedCurMsg;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)unSelectAllMessages;
- (void)updateLoading:(_Bool)arg1 NextMore:(_Bool)arg2;
- (void)updatePreMore:(_Bool)arg1 NextMore:(_Bool)arg2;
- (void)updateSectionHeaderCheckMark:(id)arg1 to:(_Bool)arg2;
- (void)updateSectionHeaderCheckMarkBtn:(id)arg1 isSelected:(_Bool)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

