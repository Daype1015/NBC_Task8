// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SpartaCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UWidgetComponent;
struct FInputActionValue;

UCLASS()
class SPARTAPROJECT_API ASpartaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ASpartaCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TObjectPtr<UWidgetComponent> OverHeadWidget;

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void AddHealth(float Amount);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sensitivity")
	float MouseSensitivity;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "health")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "health")
	float Health;

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual float TakeDamage(
		float DamageAmount, // 데미지 총량
		struct FDamageEvent const& DamageEvent, //데미지속성
		AController* EventInstigator, //데미지 가해자
		AActor* DamageCauser) override; // 데미지를 일으킨 오브젝트

	UFUNCTION()
	void Move(const FInputActionValue& value); // 구조체 같은경우는 데이터가 커서 참조 사용
	UFUNCTION()
	void StartJump(const FInputActionValue& value); //boolean 형일 경우 나누기
	UFUNCTION()
	void StopJump(const FInputActionValue& value); //boolean 형일 경우 나누기
	UFUNCTION()
	void Look(const FInputActionValue& value);
	UFUNCTION()
	void StartSprint(const FInputActionValue& value);
	UFUNCTION()
	void StopSprint(const FInputActionValue& value);

	void OnDeath();
	void UpdateOverHeadHP();
	

	//-------------------------추가과제
	UFUNCTION()
	void UseItem(const FInputActionValue& value);
	UFUNCTION()
	void OpenInven(const FInputActionValue& value);

private:
	float NormalSpeed;
	float SprintSpeedMultiplier;
	float SprintSpeed;
	int JumpCount;
};
