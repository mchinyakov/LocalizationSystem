//
//  LocalizationSystem.h
//
//  Created by Martins Rudens.
//  Copyright (c) 2014 RUDENS. All rights reserved.
//

#define ICLocalizedString(key, comment) [[LocalizationSystem shared] localizedStringForKey:(key) value:@"" table:nil]
#define ICLocalizedStringFromTable(key, tbl, comment) [[LocalizationSystem shared] localizedStringForKey:(key) value:@"" table:(tbl)]
#define ICLocalizedStringWithDefaultValue(key, tbl, val, comment) [[LocalizationSystem shared] localizedStringForKey:(key) value:(val) table:(tbl)]

@interface LocalizationSystem : NSObject
+ (LocalizationSystem *)shared;
- (NSString *)localizedStringForKey:(NSString *)key value:(NSString *)value table:(NSString *)tableName;
- (NSString *)language;
- (void)setLanguage:(NSString *)language;
@end
