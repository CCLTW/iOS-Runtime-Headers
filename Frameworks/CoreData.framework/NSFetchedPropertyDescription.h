/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSFetchRequest, NSString;



@interface NSFetchedPropertyDescription : NSPropertyDescription 
{
    void *_reserved5;
    void *_reserved6;
    NSFetchRequest *_fetchRequest;
    NSString *_lazyFetchRequestEntityName;
}


- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)fetchRequest;
- (void)setFetchRequest:(id)arg1;
- (BOOL)isTransient;
- (BOOL)isReadOnly;
- (NSUInteger)_propertyType;
- (void)_createCachesAndOptimizeState;

@end