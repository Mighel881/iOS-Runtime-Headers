/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSData, NSDate, NSManagedObject, NSNumber, NSSet, NSString, PLAssetDescription, PLManagedAsset;

@interface PLAdditionalAssetAttributes : PLManagedObject {
}

@property(retain) PLManagedAsset * asset;
@property(retain) PLAssetDescription * assetDescription;
@property(retain) NSManagedObject * cloudMaster;
@property(retain) NSSet * cloudResources;
@property(retain) NSString * creatorBundleID;
@property(retain) NSString * customCollectionName;
@property(retain) NSString * customCollectionUUID;
@property(retain) NSString * customMomentName;
@property(retain) NSString * customMomentUUID;
@property(retain) NSString * editorBundleID;
@property(retain) NSString * exifTimestampString;
@property(retain) NSNumber * externalUsageIntent;
@property(retain) NSData * faceRegions;
@property(retain) id importSessionID;
@property(retain) NSSet * keywords;
@property(retain) NSDate * lastUploadAttemptDate;
@property(retain) NSNumber * locationHash;
@property(retain) NSString * longDescription;
@property(retain) id originalAssetsUUID;
@property(retain) NSString * originalFilename;
@property(retain) NSNumber * originalFilesize;
@property(retain) NSData * originalHash;
@property(retain) NSNumber * originalHeight;
@property(retain) NSNumber * originalOrientation;
@property(retain) NSString * originalPath;
@property(retain) NSNumber * originalResourceChoice;
@property(retain) NSNumber * originalWidth;
@property(retain) NSSet * personReferences;
@property(retain) NSString * publicGlobalUUID;
@property(retain) NSData * reverseLocationData;
@property(retain) NSNumber * reverseLocationDataIsValid;
@property(retain) NSString * timeZoneName;
@property(retain) NSNumber * timeZoneOffset;
@property(retain) NSString * title;
@property(retain) NSManagedObject * unmanagedAdjustment;
@property(retain) NSNumber * uploadAttempts;

+ (id)listOfSyncedProperties;

- (BOOL)_needToSetModificationDateOnAsset:(id)arg1;
- (id)longDescription;
- (BOOL)migrateReverseLocationDataFromKeyedArchiverFormat;
- (void)setLongDescription:(id)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (void)willSave;

@end
