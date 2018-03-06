#import "NotificationMonitor.h"
#import "INotificationMonitorObserver.h"
#import <Foundation/NSDistributedNotificationCenter.h>

@implementation NotificationMonitor
-(id) init: (WalletGui::INotificationMonitorObserver*) observer {
  m_observer = observer;
  NSDistributedNotificationCenter * center
    = [NSDistributedNotificationCenter defaultCenter];

  [center addObserver: self
          selector:    @selector(receive:)
          name:        @"com.apple.screenIsLocked"
          object:      nil
  ];
  [center addObserver: self
          selector:    @selector(receive:)
          name:        @"com.apple.screenIsUnlocked"
          object:      nil
  ];
  return self;
}
-(void) receive: (NSNotification*) notification {
  m_observer->notify(QString::fromNSString([notification name]));
}
@end
