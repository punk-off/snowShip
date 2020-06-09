// Copyright (c) 2006-2018 Audiokinetic Inc. / All Rights Reserved
#pragma once

#include "Engine/EngineTypes.h"

namespace AkUnrealHelper
{
	AKAUDIO_API void TrimPath(FString& Path);

	AKAUDIO_API FString GetProjectDirectory();
	AKAUDIO_API FString GetWwisePluginDirectory();
	AKAUDIO_API FString GetThirdPartyDirectory();
	AKAUDIO_API FString GetContentDirectory();
	AKAUDIO_API FString GetSoundBankDirectory();
	AKAUDIO_API FString GetExternalSourceDirectory();

	AKAUDIO_API FString GetBaseAssetPackagePath();
	AKAUDIO_API FString GetLocalizedAssetPackagePath();
	AKAUDIO_API FString GetExternalSourceAssetPackagePath();

	AKAUDIO_API FString GetWwiseProjectPath();

	AKAUDIO_API FString GetGeneratedSoundBanksFolder();

	AKAUDIO_API bool IsUsingEventBased();

	extern AKAUDIO_API const TCHAR* MediaFolderName;

#if WITH_EDITOR
	AKAUDIO_API void SanitizePath(FString& Path, const FString& PreviousPath, const FText& DialogMessage);
	AKAUDIO_API void SanitizeProjectPath(FString& Path, const FString& PreviousPath, const FText& DialogMessage, bool &bRequestRefresh);
#endif
}
