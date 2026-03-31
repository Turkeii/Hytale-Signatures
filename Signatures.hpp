"App::Constructor", "E8 ? ? ? ? 48 89 5D ? 48 8D 05 ? ? ? ? 48 83 78 ? ? 75", 0x1
"App::HandleScreenshotting", "E8 ? ? ? ? 4C 8B 7D ? 49 8B 8F ? ? ? ? 39 09", 0x1
"App::Exit", "55 53 48 83 EC ? 48 8D 6C 24 ? 48 89 4D ? 83 79 ? ? 75 ? 48 8B 89"
"App::DoDispose", "53 48 83 EC ? 48 8B D9 48 8B 8B ? ? ? ? 39 09 E8 ? ? ? ? 48 8B 4B"
"App::SetStage", "41 56 57 56 55 53 48 83 EC ? 33 C0 48 89 44 24 ? 48 89 44 24 ? 48 8B D9 8B F2 48 8D 05"
"App::ScheduleScreenshot", "E8 ? ? ? ? 48 8B 4E ? 48 8B D3 39 09 E8 ? ? ? ? EB", 0x1
"App::ToggleFullscreen", "E8 ? ? ? ? EB ? 48 8B CE E8 ? ? ? ? 48 8B 4E ? 48 8B D3", 0x1

"AppStartup::StartWithServerConnection", "E8 ? ? ? ? 48 8B CB E8 ? ? ? ? EB ? E8 ? ? ? ? EB ? 48 8B CB", 0x1
"AppStartup::StartWithLocalWorld", "E8 ? ? ? ? EB ? 48 8B 4B ? 39 09 E8 ? ? ? ? 48 8B CB E8 ? ? ? ? EB", 0x1
"AppStartup::StartFromMainMenu", "E8 ? ? ? ? EB ? 48 8B 4B ? 39 09 E8 ? ? ? ? EB ? 48 8B 4B ? 39 09", 0x1

"AppInGame::SendChatMessageOrExecuteCommand", "56 53 48 83 EC ? 48 8B F1 48 8B DA 38 1B 48 8B CB"
"AppInGame::CleanUp", "E8 ? ? ? ? EB ? 48 8B 8B ? ? ? ? 39 09 E8 ? ? ? ? EB ? 48 8B 4B", 0x1
"AppInGame::PrepareToExit", "E8 ? ? ? ? 48 8B 4B ? 48 8B 49 ? 48 8B 49 ? C6 81 ? ? ? ? ? 48 8B CB", 0x1
"AppInGame::Reset", "E8 ? ? ? ? 48 8B CB 33 D2 E8 ? ? ? ? 66 C7 43", 0x1
"AppInGame::DisposeAndClearInstance", "56 53 48 83 EC ? 48 8B D9 48 8B F2 48 83 7B ? ? 74 ? 48 8B CB E8 ? ? ? ? 48 8B 4B ? 48 85 C9"
"AppInGame::ResetInventoryState", "E8 ? ? ? ? 48 8B 4B ? 48 8B 49 ? 48 8B 89 ? ? ? ? 40 0F B6 D6", 0x1

"AppMainMenu::Constructor", "E8 ? ? ? ? 48 8D 4B ? 48 8B D6 E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 4E ? 48 8B D0 E8 ? ? ? ? 48 8D 4E ? 48 8B D3 E8 ? ? ? ? 48 8D 8B", 0x1
"AppMainMenu::OnNewFrame", "E8 ? ? ? ? 4C 89 7D ? E9 ? ? ? ? 41 83 FD", 0x1
"AppMainMenu::Open", "E9 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8B 9B", 0x1
"AppMainMenu::CleanUp", "E8 ? ? ? ? EB ? 48 8B 4B ? 4C 8B 71", 0x1

"Chat::AddMessage", "57 56 53 48 83 EC ? 48 8B D9 48 8B F2 48 8B 4B ? 39 09"
"Chat::Log", "E8 ? ? ? ? E9 ? ? ? ? 48 8B 10 48 89 55", 0x1
"Chat::NotifyPlayerOfSkippedDiagnosticMessages", "57 56 53 48 81 EC ? ? ? ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 48 8B D9 48 8B 4B"
"Chat::SendCommand", "57 56 53 48 83 EC ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 48 8B F1 48 8B DA 41 8B 48"
"Chat::SendMessage", "57 56 53 48 83 EC ? 48 8B D9 48 8B F2 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F8 48 8B 4B ? 48 8B 59 ? 48 8D 4F ? 48 8B D6 E8 ? ? ? ? 48 8B 5B ? 48 8B 4B ? 48 8B D7 39 09 E8 ? ? ? ? 85 C0 74 ? 48 83 C4 ? 5B 5E 5F C3 48 8B CB 48 8B D7 48 83 C4 ? 5B 5E 5F E9 ? ? ? ? 57"

"ChatComponent::OnReceiveMessage", "41 56 57 56 55 53 48 83 EC ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 48 8B D9 48 8B F2 48 8D 0D"

"Disposeable::Dispose", "53 48 83 EC ? 48 8B D9 80 7B ? ? 75 ? 48 8B CB E8 ? ? ? ? 48 8B CB"

"DefaultMovementController::Tick", "41 57 41 56 41 55 41 54 57 56 55 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 44 0F 29 84 24 ? ? ? ? 0F 57 E4 0F 29 64 24"
"DefaultMovementController::PreUpdate", "F3 0F 10 05 ? ? ? ? F3 0F 5C C1 0F 28 D0 F3 0F 59 91 ? ? ? ? 0F 28 D9 F3 0F 59 99 ? ? ? ? F3 0F 58 D3 F3 0F 11 51"
"DefaultMovementController::ApplyKnockback", "56 53 48 83 EC ? 48 8B F1 48 8B DA 0F B6 4B"
"DefaultMovementController::ApplyMovementOffset", "57 56 53 48 83 EC ? 0F 29 74 24 ? 0F 29 7C 24 ? 48 8B D9 48 8B F2 48 8B 4B ? 48 8B 89"
"DefaultMovementController::RequestVelocityChange", "E8 ? ? ? ? C7 46 ? ? ? ? ? 48 8B 43", 0x1
"DefaultMovementController::VelocityChange", "57 56 55 53 48 83 EC ? 0F 29 74 24 ? F3 0F 11 4C 24 ? F3 0F 11 54 24 ? F3 0F 11 5C 24 ? 48 8B D9 48 8B 4B"
"DefaultMovementController::getWishDirection", "F2 0F 10 81 ? ? ? ? 80 B9"

"EntityStoreModule::GatherLights", "41 57 41 56 41 55 41 54 57 56 55 53 48 83 EC ? 33 C0 48 89 44 24 ? 48 8B D9 48 8B F2 41 8B F8 48 8B AC 24"

"Engine::Constructor", "E8 ? ? ? ? 48 8D 4B ? 48 8B D7 E8 ? ? ? ? 48 8B 4B ? 48 8B 49 ? E8", 0x1
"Engine::Temp_ProcessQueuedActions", "57 56 55 53 48 83 EC ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 48 89 44 24 ? 48 89 8C 24"

"File::ReadAllBytes", "E8 ? ? ? ? 48 8B F0 48 8D 05 ? ? ? ? 48 83 78 ? ? 0F 85 ? ? ? ? 48 8B 0D ? ? ? ? 48 8B 49 ? 38 09 48 85 F6 0F 84", 0x1

"GameInstance::Constructor", "41 57 41 56 41 55 41 54 57 56 55 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24"
"GameInstance::TickAllModules", "E8 ? ? ? ? F3 0F 10 83 ? ? ? ? F3 0F 5C C6", 0x1
"GameInstance::Chat", "48 8D 4B ? 48 8B D6 E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8D 4E ? 48 8B D3 E8 ? ? ? ? 48 8D 4B ? 48 8B D6 E8 ? ? ? ? 48 8D 0D", 0x3
"GameInstance::IsPlaying", "E8 ? ? ? ? 85 C0 74 ? 8B 53 ? 83 FA", 0x1
"GameInstance::IsBuilderModeEnabled", "E8 ? ? ? ? 85 C0 75 ? 4C 8B 4B ? 41 80 B9", 0x1
"GameInstance::InitRenderingOptions", "E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B 5B", 0x1
"GameInstance::InitRenderSetup", "E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B 5B", 0x1
"GameInstance::InitPostEffects", "E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B 5B", 0x1
"GameInstance::InitForceField", "E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B 5B", 0x1
"GameInstance::UpdateAtlasSizes", "E8 ? ? ? ? 48 8B 4B ? 48 8B 89 ? ? ? ? 39 09 E8 ? ? ? ? E8", 0x1
"GameInstance::InitShaderTextures", "E8 ? ? ? ? 48 8B CB E8 ? ? ? ? 48 8B B3 ? ? ? ? 48 8B 8B", 0x1
"GameInstance::ExecuteCommand", "48 83 EC ? 48 8B D9 48 8D 05 ? ? ? ? 48 83 78 ? ? 74 ? E8 ? ? ? ? 4C 8B 0D ? ? ? ? 49 8B 49 ? 48 8B 55 ? 48 89 55 ? 4C 8D 4D ? 4C 89 4D ? C7 45 ? ? ? ? ? 4C 8D 4D ? 48 8B D3 4C 8D 05 ? ? ? ? 39 09 E8 ? ? ? ? 48 8B 4D"
"GameInstance::DisconnectWithReason", "41 57 41 56 41 55 57 56 55 53 48 83 EC ? 48 8B D9 48 8B FA 49 8B F0 48 8D 05"
"GameInstance::DoDispose", "55 41 56 57 56 53 48 83 EC ? 48 8D 6C 24 ? 33 C0 48 89 45 ? 48 89 45 ? 48 8B D9 48 8B 4B"
"GameInstance::OnSetupComplete", "41 57 41 56 41 55 57 56 55 53 48 83 EC ? 48 8B D9 48 8D 05 ? ? ? ? 48 83 78 ? ? 0F 85 ? ? ? ? 48 8B 05 ? ? ? ? 48 8B 70 ? 48 8B 46 ? 80 78 ? ? 0F 84 ? ? ? ? 48 8D 05 ? ? ? ? 48 83 78 ? ? 0F 85 ? ? ? ? 48 8B 0D ? ? ? ? 48 8B 79 ? 48 8B 4E ? 48 3B CE 74 ? 48 8B D7 39 09 E8 ? ? ? ? 48 8B E8 EB ? 48 8B 4E ? 8B 47 ? 3B 41 ? 0F 83 ? ? ? ? 48 8B 6C C1 ? 48 85 ED 0F 84 ? ? ? ? 4C 8B 76 ? 48 8B 4E ? 48 8B 41 ? 48 85 C0 75 ? 4C 8B 79 ? EB ? 4C 8B 78 ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 4C 8B E8 48 8B 0D ? ? ? ? 48 8B 49 ? 48 8B 01 FF 50 ? 49 89 45 ? 49 8D 4D ? 48 8B D7 E8 ? ? ? ? 49 8B D6 48 8D 0D ? ? ? ? 48 85 D2 48 0F 44 D1 49 8D 4D ? E8 ? ? ? ? 49 8D 4D ? 49 8B D7 E8 ? ? ? ? 48 8D 0D ? ? ? ? 49 89 4D ? 49 8B CD E8 ? ? ? ? 8B D0 33 C9 49 89 4D ? 49 8B CD E8 ? ? ? ? 33 C9 49 89 4D ? 48 8B CE 49 8B D5 4C 8B C5 E8 ? ? ? ? 48 8B 4B"
"GameInstance::PrepareJoiningWorld", "41 57 41 56 41 55 41 54 57 56 55 53 48 83 EC ? 48 8B D9 48 8B F2 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F8 48 8D 4F ? 48 8B D3 E8 ? ? ? ? 48 8D 4F ? 48 8B D6 E8 ? ? ? ? 48 8D 05"
"GameInstance::StartJoiningWorld", "41 57 41 56 41 55 41 54 57 56 55 53 48 83 EC ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 48 89 44 24 ? 48 8B D9 48 8B F2 48 8D 05"
"GameInstance::SetGameMode", "57 56 53 48 83 EC ? 48 8B D9 45 84 C0 0F 85"
"GameInstance::ManageReticleEvents", "57 56 53 48 83 EC ? 48 8B D9 48 8B 4B ? 48 8B 91"
"GameInstance::OnUserInput", "55 41 56 57 56 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 48 8B D9 48 8B F2"
"GameInstance::PreUpdateModules", "56 53 48 83 EC ? F3 0F 11 4C 24 ? 48 8B D9 48 8B 8B"
"GameInstance::UpdateModules", "56 53 48 83 EC ? 0F 29 74 24 ? 48 8B D9 48 8B 8B ? ? ? ? F3 0F 10 8B"
"GameInstance::BeginFrame", "57 56 53 48 83 EC ? 48 8B D9 48 8B 4B ? F2 0F 5A 51"
"GameInstance::OnNewFrame", "57 56 55 53 48 83 EC ? 0F 29 74 24 ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 48 89 44 24 ? 48 8B D9 0F 28 F1 41 8B F0"
"GameInstance::DisposeShaderTextures", "53 48 83 EC ? 48 8B D9 48 8B 8B ? ? ? ? 39 09 E8 ? ? ? ? 48 8B 8B ? ? ? ? 39 09 E8 ? ? ? ? 48 8B 8B ? ? ? ? 39 09 E8 ? ? ? ? 48 8B 8B ? ? ? ? 39 09 E8 ? ? ? ? 48 8B 8B ? ? ? ? 39 09 48 83 C4"
"GameInstance::InitDraw", "41 57 41 56 57 56 55 53 48 83 EC ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 48 89 44 24 ? 48 8B D9 48 8B 73"
"GameInstance::DisposeDraw", "55 41 57 41 56 41 55 41 54 57 56 53 48 83 EC ? 48 8D AC 24 ? ? ? ? 48 8B D9 48 8B CB E8 ? ? ? ? 48 8B 8B"
"GameInstance::InitTextureUnitsUsage", "53 48 83 EC ? 48 8B 49 ? 48 8B 49 ? 48 8B 59 ? 48 8B 8B ? ? ? ? C7 81"
"GameInstance::InitDebugMapInfos", "41 56 57 56 55 53 48 81 EC ? ? ? ? 0F 57 E4 48 B8 ? ? ? ? ? ? ? ? 0F 29 A4 04 ? ? ? ? 0F 29 A4 04 ? ? ? ? 0F 29 A4 04 ? ? ? ? 48 83 C0 ? 75 ? 48 8B D9 48 8B 4B"
"GameInstance::ReleaseDebugMapInfos", "57 56 55 53 48 81 EC ? ? ? ? 33 C0 48 89 44 24 ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 48 B8 ? ? ? ? ? ? ? ? 0F 29 A4 04 ? ? ? ? 0F 29 A4 04 ? ? ? ? 0F 29 A4 04 ? ? ? ? 48 83 C0 ? 75 ? 48 89 84 24 ? ? ? ? 48 8B D9 48 8B 4B"
"GameInstance::UpdateDebugDrawMap", "57 56 55 53 48 83 EC ? 48 8B D9 48 8B 4B ? 48 8B 49 ? BA"
"GameInstance::InitGraphicsProfiling", "57 56 53 48 83 EC ? 48 8B D9 8B F2 41 8B F8 48 8B 4B ? 48 8B 49"
"GameInstance::Resize", "53 48 83 EC ? 48 8B D9 33 C9 89 8B ? ? ? ? 48 8B 8B ? ? ? ? 8B 91"
"GameInstance::UpdateDynamicLights", "55 41 57 41 56 57 56 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 44 0F 29 84 24 ? ? ? ? 44 0F 29 8C 24 ? ? ? ? 44 0F 29 94 24 ? ? ? ? 44 0F 29 9C 24 ? ? ? ? 44 0F 29 A4 24 ? ? ? ? 44 0F 29 AC 24 ? ? ? ? 44 0F 29 B4 24 ? ? ? ? 48 8D AC 24 ? ? ? ? 0F 57 E4"
"GameInstance::UpdateAtmosphericData", "57 56 55 53 48 81 EC ? ? ? ? 48 8B F1 48 8B 4E"
"GameInstance::UpdateRenderData", "57 56 55 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 44 0F 29 84 24 ? ? ? ? 44 0F 29 4C 24 ? 48 8B D9"
"GameInstance::UpdateSceneData", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 44 0F 29 84 24 ? ? ? ? 48 8D AC 24 ? ? ? ? 0F 57 E4 0F 29 A5 ? ? ? ? 0F 29 A5 ? ? ? ? 48 B8 ? ? ? ? ? ? ? ? 0F 29 A4 05"
"GameInstance::DrawScene", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 44 0F 29 44 24 ? 48 8D AC 24"
"GameInstance::DrawParticles", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 0F 29 74 24 ? 48 8D AC 24 ? ? ? ? 48 8B D9 8B F2 41 8B F8 66 49 0F 6E F1 48 89 5D ? 48 8B 4B ? 48 8B 49 ? 48 8B 41 ? 48 8B 49 ? 4C 8B B1"
"GameInstance::DrawForceFields", "57 56 55 53 48 83 EC ? 0F 29 74 24 ? 48 8B D9 8B F2 41 8B F8 66 49 0F 6E F1 8B AC 24"
"GameInstance::DrawTransparents", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 48 8D AC 24 ? ? ? ? 48 8B D9 8B F2"
"GameInstance::DrawTransparentsFullRes", "48 83 EC ? 66 49 0F 6E C1"
"GameInstance::DrawPostEffect", "57 56 55 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 44 0F 29 84 24 ? ? ? ? 33 C0 48 89 84 24 ? ? ? ? 48 8B D9"
"GameInstance::DrawAfterPostEffect", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 48 8D AC 24 ? ? ? ? 48 8B D9 48 8B CB"
"GameInstance::UpdateInterfaceData", "53 48 83 EC ? 48 8B D9 48 8B 4B ? 48 8B 49 ? 39 09 E8 ? ? ? ? 48 8B 8B"
"GameInstance::GetCommandDescription", "53 48 83 EC ? 48 8D 1D ? ? ? ? 48 8B 89"
"GameInstance::HelpCommand", "57 56 55 53 48 83 EC ? 0F 57 E4 0F 29 64 24 ? 33 C0 48 89 44 24 ? 48 8B D9 48 8B F2 83 7E"
"GameInstance::InitFog", "57 56 55 53 48 83 EC ? 48 8B D9 48 8B 4B ? 48 8B 89 ? ? ? ? 48 8B 71"

"Input::OnUserInput", "41 57 41 56 41 55 57 56 55 53 48 83 EC ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 48 8B D9 48 8B F2"
"Input::ResetMouseButtons", "E8 ? ? ? ? 48 8B 43 ? 48 8B 40 ? 48 8B 40 ? C6 80", 0x1
"Input::ResetKeys", "E8 ? ? ? ? EB ? 41 C6 82", 0x1

"Interface::TriggerEvent", "E8 ? ? ? ? 49 8B CF E8 ? ? ? ? E9 ? ? ? ? 41 BD", 0x1
"Interface::Draw", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 0F 29 B4 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 44 0F 29 84 24 ? ? ? ? 44 0F 29 8C 24 ? ? ? ? 48 8D AC 24 ? ? ? ? 0F 57 E4 0F 29 A5 ? ? ? ? 0F 29 A5 ? ? ? ? 0F 29 A5 ? ? ? ? 0F 29 A5 ? ? ? ? 48 8B D9"
"Interface::FadeIn", "57 56 55 53 48 83 EC ? 48 8B D9 48 8B F2 41 8B F8 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B E8 48 8D 4D ? 48 8B D3 E8 ? ? ? ? 48 8D 4D"
"Interface::PrepareForDraw", "55 57 56 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 48 8B D9 80 7B"

"MethodTable::FormattedMessage", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 0D ? ? ? ? 48 89 48 ? 48 8D 0D ? ? ? ? 48 89 48 ? 48 8B CB 48 8B D0 E8", 0x3
"MethodTable::Byte", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F8 85 F6 7E ? 8B D3", 0x3
"MethodTable::App", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B D8 48 8B CB E8 ? ? ? ? 48 89 5D ? 48 8D 05 ? ? ? ? 48 83 78 ? ? 75", 0x3
"MethodTable::AppInGame", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 66 C7 46 ? ? ? 48 8D 4E ? 48 8B D3 E8 ? ? ? ? 48 8D 8B", 0x3
"MethodTable::AppGameLoading", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 4E ? 48 8B D0 E8 ? ? ? ? 48 8D 4E ? 48 8B D3 E8 ? ? ? ? 48 8D 8B", 0x3
"MethodTable::AppMainMenu", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8B CE 48 8B D3 E8 ? ? ? ? 48 8D 4B ? 48 8B D6 E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8D 4E ? 48 8B D0 E8 ? ? ? ? 48 8D 4E ? 48 8B D3 E8 ? ? ? ? 48 8D 8B", 0x3
"MethodTable::Engine", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F8 48 8B CF 48 8B D6 45 33 C0 E8 ? ? ? ? 48 8D 4B ? 48 8B D7 E8 ? ? ? ? 48 8B 4B ? 48 8B 49 ? E8", 0x3
"MethodTable::Window", "48 8D 0D ? ? ? ? E8 ? ? ? ? 4C 8B F0 49 8B CE 48 8B D6 E8 ? ? ? ? 48 8D 4B", 0x3
"MethodTable::Window::WindowSettings", "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 89 44 24 ? C7 40 ? ? ? ? ? 48 8D 0D ? ? ? ? 48 89 48", 0x3

"MovementController::Vtable", "0E 00 00 00 4F DF DC 6A"

"Object::SetMemberValue", "E8 ? ? ? ? 48 8B 53 ? 83 7A ? ? 0F 84", 0x1

"PacketHandler::ProcessPacket", "57 56 55 53 48 83 EC ? 33 C0 48 89 44 24 ? 48 89 44 24 ? 48 8B D9 48 8B F2 48 8B CE E8"

"Path::Combine", "E8 ? ? ? ? 48 8B C8 BA ? ? ? ? E8 ? ? ? ? 48 89 85 ? ? ? ? 4C 8B BD ? ? ? ? 4D 8B AF ? ? ? ? 48 8D 55 ? 48 89 95 ? ? ? ? B9 ? ? ? ? 89 8D ? ? ? ? 48 8D 4D ? E8 ? ? ? ? 48 8B 95 ? ? ? ? 8B 8D ? ? ? ? 41 FF D5 48 8D 4D ? E8 ? ? ? ? 8B 55 ? 4C 8B 75", 0x1

"PlayerEntity::DrawOccluders", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 33 C0 48 89 45 ? 48 89 45 ? 48 8B D9 48 8B F2 48 8B 4B"
"PlayerEntity::RegisterAnimationTasks", "41 57 41 56 41 55 57 56 55 53 48 83 EC ? 48 8B D9 48 8B 53 ? 48 8B 52"

"PostEffectRenderer::Draw", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 0F 57 E4 0F 29 65 ? 0F 29 65 ? 33 C0 48 89 45 ? 48 8B D9 89 93"

"Profiling::StartMeasure", "55 41 57 41 56 41 55 41 54 57 56 53 48 83 EC ? 48 8D AC 24 ? ? ? ? 33 C0 48 89 45 ? 48 8B D9 48 8B 4B ? 3B 51"
"Profiling::StopMeasure", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 33 C0 48 89 45 ? 48 8B F1 8B DA 48 8B 4E"

"Program::Main", "55 56 53 48 83 EC ? 48 8D 6C 24 ? 33 C0 48 89 45 ? 48 8B D9 48 8D 05 ? ? ? ? 48 83 78 ? ? 0F 85"
"Program::StartGame", "55 53 48 83 EC ? 48 8D 6C 24 ? E8 ? ? ? ? 85 C0"
"Program::StartAssestEditor", "55 41 57 41 56 57 56 53 48 83 EC ? 48 8D 6C 24 ? E8"

"RhpNewFast", "E8 ? ? ? ? 4C 8B 45 ? 41 0F 10 00 0F 11 40 ? 41 0F 10 40", 0x1
"RhpNewFastArray", "E8 ? ? ? ? 48 8B F8 85 F6 7E ? 8B D3", 0x1

"SceneRenderer::DrawOccluders", "53 48 83 EC ? 48 8B D9 80 BB ? ? ? ? ? 74 ? 48 8B CB E8 ? ? ? ? 80 BB"
"SceneRenderer::PrepareLights", "57 56 53 48 83 EC ? 48 8B D9 48 8B F2 41 8B F8 48 8B 8B"

"SDL::PollEvent", "E8 ? ? ? ? 89 85 ? ? ? ? 48 8D 8D ? ? ? ? 48 8D 95", 0x1

"Settings::Clone", "57 56 55 53 48 83 EC ? 48 8B D9 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8B CE E8 ? ? ? ? 8B 8B ? ? ? ? 89 8E ? ? ? ? 0F B6 8B"

"SocialBar::Build", "41 56 57 56 55 53 48 81 EC ? ? ? ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 0F 29 64 24 ? 48 8B D9 48 8B CB"

"Static::OptionsHelper", "48 8B 35 ? ? ? ? 48 8B 56 ? 48 85 D2 75 ? 48 8B 4B", 0x3
"Static::BuildInfo", "48 8B 1D ? ? ? ? 48 8B 73 ? 48 8B 4B", 0x3
"Static::IsOnMainThread", "E8 ? ? ? ? 85 C0 0F 84 ? ? ? ? 48 8D 05 ? ? ? ? 48 83 78 ? ? 0F 85 ? ? ? ? 48 8B 0D ? ? ? ? 48 8B 49 ? 48 8B 57", 0x1

"System::List::Add", "57 56 55 53 48 83 EC ? 48 8B D9 48 8B F2 8B 7B ? 8D 6F ? 8B CD 48 8B 53 ? 83 7A ? ? 75 ? B8 ? ? ? ? EB ? 8B 42 ? 03 C0 8B D0 B8 ? ? ? ? 81 FA ? ? ? ? 0F 47 D0 3B D1 0F 4C D1 48 8B CB E8 ? ? ? ? 89 6B ? 48 8B 4B ? 48 63 D7"

"Texture::CreateTexture2D", "55 41 57 41 56 41 55 41 54 57 56 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 33 C0 48 89 45 ? 48 89 45 ? 4C 89 4D ? 48 8B D9"

"Thread::Sleep", "55 41 57 41 56 41 55 41 54 57 56 53 48 83 EC ? 48 8D AC 24 ? ? ? ? 83 F9"

"UIFragment::Get", "57 56 53 48 83 EC ? 0F 57 E4 0F 29 64 24 ? 0F 29 64 24 ? 33 C0 48 89 44 24 ? 48 89 54 24 ? 48 8B F9"

"VoiceManager::Dispose", "55 57 56 53 48 83 EC ? 48 8D 6C 24 ? 48 8B D9 80 BB"

"Window::Constructor", "E8 ? ? ? ? 48 8D 4B ? 49 8B D6 E8 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B F0 48 8B 53 ? 44 0F B6 C7", 0x1
"Window::SetMouseLock", "E8 ? ? ? ? 0F B6 4B ? 85 C9 74 ? 33 C0", 0x1
"Window::ApplyMouseSettings", "55 48 83 EC ? 48 8D 6C 24 ? 48 8B 51 ? 80 79"
"Window::GetState", "55 48 83 EC ? 48 8D 6C 24 ? 48 8B 49 ? E8 ? ? ? ? A8"
"Window::SetupViewport", "55 53 48 83 EC ? 48 8D 6C 24 ? 33 C0 48 89 45 ? 0F 57 E4 0F 29 65 ? 48 89 45 ? 48 8B D9 48 8B 4B"