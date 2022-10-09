// BlueprintGeneratedClass Weapon_Skin_Base.Weapon_Skin_Base_C
// Size: 0x50d (Inherited: 0x118)
struct UWeapon_Skin_Base_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct UAnimInstance* Weapon Cosmetic AnimGraph; // 0x120(0x08)
	struct TSoftObjectPtr<USkeletalMesh> Weapon 1P; // 0x128(0x30)
	struct TSoftObjectPtr<USkeletalMesh> Weapon 1P Cosmetic; // 0x158(0x30)
	struct TArray<struct UMaterialInterface*> 1p MaterialOverrides; // 0x188(0x10)
	struct TSoftObjectPtr<UStaticMesh> Magazine 1P; // 0x198(0x30)
	struct TArray<struct UMaterialInterface*> 1pMagazine MaterialOverrides; // 0x1c8(0x10)
	struct TSoftObjectPtr<USkeletalMesh> Weapon 3P; // 0x1d8(0x30)
	struct TArray<struct UMaterialInterface*> 3p Material Overrides; // 0x208(0x10)
	struct UStaticMesh* Magazine 3P; // 0x218(0x08)
	struct TArray<struct UMaterialInterface*> 3pMagazineMaterial Overrides; // 0x220(0x10)
	enum class PersonalizationSkinRarity Rarity; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UMaterial* KillBannerMaterial; // 0x238(0x08)
	enum class EKillBannerAnimation KillBannerWidgetAnimation; // 0x240(0x01)
	bool Bullet Mesh Visibility; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct UStaticMesh* BulletMeshOverride; // 0x248(0x08)
	struct UMaterialInterface* BulletMaterialOverride; // 0x250(0x08)
	int32_t NumBullets; // 0x258(0x04)
	struct FName Bullet Socket; // 0x25c(0x0c)
	struct AEffectContainer* FXC Kill Effect; // 0x268(0x08)
	struct FName On Kill Attach Socket; // 0x270(0x0c)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectContainerOverrides; // 0x280(0x50)
	struct AEffectContainer* FXC Victim Finisher; // 0x2d0(0x08)
	struct AEffectContainer* FXC Victim Planted Finisher; // 0x2d8(0x08)
	struct UActorComponent* OnKillEffect; // 0x2e0(0x08)
	struct UMeshComponent* BulletMeshParent; // 0x2e8(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> Character 1P AnimationOverridesMap; // 0x2f0(0x50)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> Character 1P Animation Altmode Overrides Map; // 0x340(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Gun 1P Animation Overrides Map; // 0x390(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Cosmetic Gun 1P Animation Overrides Map; // 0x3e0(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Cosmetic Gun 1P Animation Altmode Overrides Map; // 0x430(0x50)
	struct USkeletalMesh* BuddyMount; // 0x480(0x08)
	struct UMaterialInterface* BuddyMountMaterial; // 0x488(0x08)
	bool FinisherCancelsMovement; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float FinisherDestroyCorpseTime; // 0x494(0x04)
	struct UKillBannerData* KillBannerData; // 0x498(0x08)
	struct UStaticMesh* Shell Casing 1P; // 0x4a0(0x08)
	struct UStaticMesh* Shell Casing 3P; // 0x4a8(0x08)
	struct UMaterialInterface* Shell Casing Material 1P; // 0x4b0(0x08)
	struct UMaterialInterface* Shell Casing Material 3P; // 0x4b8(0x08)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x4c0(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x4d0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x4e0(0x10)
	bool Attach Bullet To Cosmetic; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x4f8(0x08)
	struct UBaseGunSkinVOComponent_C* Spawned VO Component; // 0x500(0x08)
	int32_t Random Int; // 0x508(0x04)
	bool bFirstPersonAssetsSetup; // 0x50c(0x01)
};
