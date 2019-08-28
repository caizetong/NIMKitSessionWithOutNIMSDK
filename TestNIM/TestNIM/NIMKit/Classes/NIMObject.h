//
//  NIMObject.h
//  TestNIM
//
//  Created by Caizetong on 2019/8/27.
//  Copyright © 2019 cc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, NIMAudioType) {
    /**
     *  aac
     */
    NIMAudioTypeAAC,
    /**
     *  amr
     */
    NIMAudioTypeAMR
};

/**
 *  群成员类型
 */
typedef NS_ENUM(NSInteger, NIMTeamMemberType){
    /**
     *  普通群员
     */
    NIMTeamMemberTypeNormal = 0,
    /**
     *  群拥有者
     */
    NIMTeamMemberTypeOwner = 1,
    /**
     *  群管理员
     */
    NIMTeamMemberTypeManager = 2,
    /**
     *  申请加入用户
     */
    NIMTeamMemberTypeApply   = 3,
};

typedef NS_ENUM(NSInteger, NIMTeamJoinMode) {
    /**
     *  允许所有人加入
     */
    NIMTeamJoinModeNoAuth    = 0,
    /**
     *  需要验证
     */
    NIMTeamJoinModeNeedAuth  = 1,
    /**
     *  不允许任何人加入
     */
    NIMTeamJoinModeRejectAll = 2,
};

/**
 *  邀请模式
 */
typedef NS_ENUM(NSInteger, NIMTeamInviteMode) {
    /**
     *  只有管理员/群主可以邀请他人入群
     */
    NIMTeamInviteModeManager    = 0,
    /**
     *   所有人可以邀请其他人入群
     */
    NIMTeamInviteModeAll        = 1,
};

/**
 *  群消息接受状态
 */
typedef NS_ENUM(NSInteger, NIMTeamNotifyState) {
    /**
     *  接受任何群消息通知
     */
    NIMTeamNotifyStateAll         = 0,
    /**
     *  不接受任何群消息通知
     */
    NIMTeamNotifyStateNone        = 1,
    /**
     *  只接受管理员的群消息通知
     */
    NIMTeamNotifyStateOnlyManager = 2,
    
};

/**
 *  群信息修改权限
 */
typedef NS_ENUM(NSInteger, NIMTeamUpdateInfoMode) {
    /**
     *  只有管理员/群主可以修改
     */
    NIMTeamUpdateInfoModeManager    = 0,
    /**
     *  所有人可以修改
     */
    NIMTeamUpdateInfoModeAll  = 1,
};



/**
 *  被邀请模式
 */
typedef NS_ENUM(NSInteger, NIMTeamBeInviteMode) {
    /**
     *  需要被邀请方同意
     */
    NIMTeamBeInviteModeNeedAuth    = 0,
    /**
     *   不需要被邀请方同意
     */
    NIMTeamBeInviteModeNoAuth  = 1,
};


/**
 *  消息内容类型枚举
 */
typedef NS_ENUM(NSInteger, NIMMessageType){
    /**
     *  文本类型消息
     */
    NIMMessageTypeText          = 0,
    /**
     *  图片类型消息
     */
    NIMMessageTypeImage         = 1,
    /**
     *  声音类型消息
     */
    NIMMessageTypeAudio         = 2,
    /**
     *  视频类型消息
     */
    NIMMessageTypeVideo         = 3,
    /**
     *  位置类型消息
     */
    NIMMessageTypeLocation      = 4,
    /**
     *  通知类型消息
     */
    NIMMessageTypeNotification  = 5,
    /**
     *  文件类型消息
     */
    NIMMessageTypeFile          = 6,
    /**
     *  提醒类型消息
     */
    NIMMessageTypeTip           = 10,
    /**
     *  机器人类型消息
     */
    NIMMessageTypeRobot         = 11,
    /**
     *  自定义类型消息
     */
    NIMMessageTypeCustom        = 100
};

NS_ASSUME_NONNULL_BEGIN
@interface NIMObject : NSObject

@end


@interface NIMTeam : NSObject
@end


@interface NIMMessage : NSObject

@end

@interface NIMSession : NSObject

@end

@interface NIMTeamMember : NSObject

@end

@interface NIMMessageReceipt : NSObject

@end

@interface NIMRecentSession : NSObject

@end

@interface NIMConversationManager : NSObject

@end

@interface NIMLocationObject : NSObject

@end


NS_ASSUME_NONNULL_END
