// Gamejam game, not intended for commercial use.

#include "FirstPersonChar_C.h"

// Sets default values
AFirstPersonChar_C::AFirstPersonChar_C()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstPersonChar_C::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstPersonChar_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonChar_C::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

