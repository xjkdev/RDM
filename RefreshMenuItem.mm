


#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

#import "utils.h"
#import "RefreshMenuItem.h"

@implementation RefreshMenuItem : NSMenuItem


- (id) initWithDisplay: (CGDirectDisplayID) display
{
	if((self = [super initWithTitle: @"" action: @selector(setRefreshEnabled:) keyEquivalent: @""]) && display )
	{
        _display = display;

		NSString* title = @"Refresh When Change";
		[self setTitle: title];

		return self;
	}
	else
	{
		return NULL;
	}
}

- (CGDirectDisplayID) display
{
	return _display;
}

- (Boolean) refreshEnabled
{
	return refreshEnabled;
}

@end
