


@interface SRApplicationDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate>
{
	NSMenu* statusMenu;
	NSStatusItem* statusItem;
	NSMutableDictionary* refreshState;
	NSMutableSet* displayListState;
	NSLock* displayListStateLock;
	NSUserDefaults *userDefaults;
}

- (void) displayChangeWatcher;
- (void) refreshStatusMenu;

@end

