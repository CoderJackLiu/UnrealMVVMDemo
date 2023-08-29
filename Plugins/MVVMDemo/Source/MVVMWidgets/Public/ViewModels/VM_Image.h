// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "UObject/Object.h"
#include "VM_Image.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class MVVMWIDGETS_API UVM_Image : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	//scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite, FieldNotify, Getter=GetScale, Setter=SetScale, Category = "Image")
	float IMG_Scale = 1.0f;

	//setter
	void SetScale(float InScale) { UE_MVVM_SET_PROPERTY_VALUE(IMG_Scale, InScale); };
	//getter
	float GetScale() const { return IMG_Scale; };

	//posX
	UPROPERTY(EditAnywhere, BlueprintReadWrite, FieldNotify, Getter=GetPosX, Setter=SetPosX, Category = "Image")
	float IMG_PosX = 0.0f;

	//setter
	void SetPosX(float InPosX) { UE_MVVM_SET_PROPERTY_VALUE(IMG_PosX, InPosX); };
	//getter
	float GetPosX() const { return IMG_PosX; };

	//posY
	UPROPERTY(EditAnywhere, BlueprintReadWrite, FieldNotify, Getter=GetPosY, Setter=SetPosY, Category = "Image")
	float IMG_PosY = 0.0f;
	//setter
	void SetPosY(float InPosY) { UE_MVVM_SET_PROPERTY_VALUE(IMG_PosY, InPosY); };

	//getter
	float GetPosY() const { return IMG_PosY; };
	//Opacity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, FieldNotify, Getter=GetOpacity, Setter=SetOpacity, Category = "Image")
	float IMG_Opacity = 1.0f;
	//setter
	void SetOpacity(float InOpacity) { UE_MVVM_SET_PROPERTY_VALUE(IMG_Opacity, InOpacity); };
	//getter
	float GetOpacity() const { return IMG_Opacity; };

	//test input string
	UPROPERTY(EditAnywhere, BlueprintReadWrite, FieldNotify, Getter=GetInputString, Setter=SetInputString, Category = "Image")
	FString IMG_InputString = "Input String";
	//setter
	void SetInputString(FString InInputString) { UE_MVVM_SET_PROPERTY_VALUE(IMG_InputString, InInputString); };
	//getter
	FString GetInputString() const { return IMG_InputString; };
};
