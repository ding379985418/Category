//
//  NSDate+Category.h
//  catergory
//
//  Created by No on 16/2/23.
//  Copyright © 2016年 com.beauty. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Category)
///年
@property (nonatomic, readonly) NSInteger year;
@property (nonatomic, readonly) NSInteger month;
@property (nonatomic, readonly) NSInteger day; ///< Day component (1~31)
@property (nonatomic, readonly) NSInteger hour; ///< Hour component (0~23)
@property (nonatomic, readonly) NSInteger minute; ///< Minute component (0~59)
@property (nonatomic, readonly) NSInteger second; ///< Second component (0~59)
@property (nonatomic, readonly) NSInteger nanosecond; ///< Nanosecond component
@property (nonatomic, readonly) NSInteger weekday; ///< Weekday component (1~7, first day is based on user setting)
@property (nonatomic, readonly) NSInteger weekdayOrdinal; ///< WeekdayOrdinal component
@property (nonatomic, readonly) NSInteger weekOfMonth; ///< WeekOfMonth component (1~5)
@property (nonatomic, readonly) NSInteger weekOfYear; ///< WeekOfYear component (1~53)
@property (nonatomic, readonly) NSInteger yearForWeekOfYear; ///< YearForWeekOfYear component
@property (nonatomic, readonly) NSInteger quarter; ///< Quarter component
@property (nonatomic, readonly) BOOL isLeapMonth; ///< Weather the month is leap month
@property (nonatomic, readonly) BOOL isLeapYear; ///< Weather the year is leap year
@property (nonatomic, readonly) BOOL isToday; ///< Weather date is today (based on current locale)
@property (nonatomic, readonly) BOOL isYesterday; ///< Weather date is yesterday (based on current locale)

#pragma mark - Date modify
///=============================================================================
/// @name Date modify
///=============================================================================

/**
 * 加上N年后的时间
 */
- (NSDate *)dateByAddingYears:(NSInteger)years;

/**
 * 加上N月后的时间
 */
- (NSDate *)dateByAddingMonths:(NSInteger)months;

/**
 * 加上N周后的时间
 */
- (NSDate *)dateByAddingWeeks:(NSInteger)weeks;

/**
 * 加上N天后的时间
 */
- (NSDate *)dateByAddingDays:(NSInteger)days;

/**
 * 加上N小时后的时间
 */
- (NSDate *)dateByAddingHours:(NSInteger)hours;

/**
 * 加上N分钟后的时间
 */
- (NSDate *)dateByAddingMinutes:(NSInteger)minutes;

/**
 * 加上N秒后的时间
 */
- (NSDate *)dateByAddingSeconds:(NSInteger)seconds;


#pragma mark - Date Format
///=============================================================================
/// @name Date Format
///=============================================================================

/**
 按照指定时间样式,得到时间字符串
 see http://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns
 for format description.
 
 @param format   String representing the desired date format.
 e.g. @"yyyy-MM-dd HH:mm:ss"
 
 @return NSString representing the formatted date string.
 */
- (NSString *)stringWithFormat:(NSString *)format;

/**
  按照指定时间样式/时区/地理位置,得到时间字符串
 see http://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns
 for format description.
 
 @param format    String representing the desired date format.
 e.g. @"yyyy-MM-dd HH:mm:ss"
 
 @param timeZone  Desired time zone.
 
 @param locale    Desired locale.
 
 @return NSString representing the formatted date string.
 */
- (NSString *)stringWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;

/**
  按照iOS时间样式,得到时间字符串
 e.g. "2010-07-09T16:13:30+12:00"
 
 @return NSString representing the formatted date string in ISO8601.
 */
- (NSString *)stringWithISOFormat;

/**
 *按照时间样式得到时间date
 @param dateString The string to parse.
 @param format     The string's date format.
 
 @return A date representation of string interpreted using the format.
 If can not parse the string, returns nil.
 */
+ (NSDate *)dateWithString:(NSString *)dateString format:(NSString *)format;

/**
 Returns a date parsed from given string interpreted using the format.
 
 @param dateString The string to parse.
 @param format     The string's date format.
 @param timeZone   The time zone, can be nil.
 @param locale     The locale, can be nil.
 
 @return A date representation of string interpreted using the format.
 If can not parse the string, returns nil.
 */
+ (NSDate *)dateWithString:(NSString *)dateString format:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;

/**
 Returns a date parsed from given string interpreted using the ISO8601 format.
 
 @param dateString The date string in ISO8601 format. e.g. "2010-07-09T16:13:30+12:00"
 
 @return A date representation of string interpreted using the format.
 If can not parse the string, returns nil.
 */
+ (NSDate *)dateWithISOFormatString:(NSString *)dateString;

@end
