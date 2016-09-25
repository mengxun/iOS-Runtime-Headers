/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration> {
    NSDictionary * _diffDeviceDiffs;
}

@property (nonatomic, readonly) NSDictionary *diffDeviceDiffs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allPairingIDs;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (id)diffCollectionDiffForPairingID:(id)arg1;
- (id)diffDeviceDiffs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end