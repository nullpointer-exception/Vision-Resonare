UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EDifficulty : uint8
{
	VE_Dance 	UMETA(DisplayName = "Dance"),
	VE_Rain 	UMETA(DisplayName = "Rain"),
	VE_Song	UMETA(DisplayName = "Song")
};

UCLASS()
class YourClass : public YourSuperClass
{
	GENERATED_UCLASS_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EVictoryEnum VictoryEnum;

	//Rest of Class Code
};