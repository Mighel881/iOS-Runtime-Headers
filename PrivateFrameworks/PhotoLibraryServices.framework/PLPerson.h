/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSSet, NSString;

@interface PLPerson : PLManagedObject {
}

@property(retain) NSString * fullName;
@property(retain) NSSet * personReferences;
@property(retain) NSString * personUUID;

+ (id)allPersonsInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withPersonUUID:(id)arg2 fullName:(id)arg3;
+ (id)personWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;

- (void)willSave;

@end
