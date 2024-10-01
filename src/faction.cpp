#include "faction.h"

const std::vector<std::pair<std::string, RE::FormID>> factionArmorTags = {
    {"npeBanditFaction", 0x0001BCC0},
    {"npeImperialFaction", 0x0002BF9A}, 
    {"npeBladesFaction", 0x00072834},
    {"npeCompanionsFaction", 0x00048362},
    {"npeDawnstarFaction", 0x0002816E},
    {"npeFalkreathFaction", 0x00028170},  
    {"npeForswornFaction", 0x00043599},  
    {"npeMarkarthFaction", 0x0002816C},
    {"npeMorthalFaction", 0x0002816D},    
    {"npeNightingaleFaction", 0x000DEED6}, 
    {"npeRiftenFaction", 0x0002816B},
    {"npeSolitudeFaction", 0x00029DB0},
    {"npeStormcloaksFaction", 0x00028849},
    {"npeWhiterunFaction", 0x000267EA},   
    {"npeWindhelmFaction", 0x000267E3},      
    {"npeWinterholdFaction", 0x00014217},  
    {"npeThalmorFaction", 0x00039F26},  
    {"npeSilverHandFaction", 0x000AA0A4}};

static std::unordered_map<RE::FormID, std::string> factionFormIDToTagMap = {
    {0x0001BCC0, "npeBanditFaction"},      {0x0002BF9A, "npeImperialFaction"}, {0x00072834, "npeBladesFaction"},
    {0x00048362, "npeCompanionsFaction"},  {0x0002816E, "npeDawnstarFaction"}, {0x00028170, "npeFalkreathFaction"},
    {0x00043599, "npeForswornFaction"},    {0x0002816C, "npeMarkarthFaction"}, {0x0002816D, "npeMorthalFaction"},
    {0x000DEED6, "npeNightingaleFaction"}, {0x0002816B, "npeRiftenFaction"},   {0x00029DB0, "npeSolitudeFaction"},
    {0x00028849, "npeStormcloaksFaction"}, {0x000267EA, "npeWhiterunFaction"}, {0x000267E3, "npeWindhelmFaction"},
    {0x00014217, "npeWinterholdFaction"},  {0x00039F26, "npeThalmorFaction"},  {0x000AA0A4, "npeSilverHandFaction"}};

const std::vector<RE::BGSBipedObjectForm::BipedObjectSlot> allArmorSlots = {
    RE::BGSBipedObjectForm::BipedObjectSlot::kHead,     RE::BGSBipedObjectForm::BipedObjectSlot::kBody,
    RE::BGSBipedObjectForm::BipedObjectSlot::kHands,    RE::BGSBipedObjectForm::BipedObjectSlot::kFeet,
    RE::BGSBipedObjectForm::BipedObjectSlot::kForearms, RE::BGSBipedObjectForm::BipedObjectSlot::kCirclet,
    RE::BGSBipedObjectForm::BipedObjectSlot::kHair};

std::vector<std::pair<std::string, RE::TESFaction *>> GetRelevantFactions() {
    std::vector<std::pair<std::string, RE::TESFaction *>> factions;

    RE::TESFaction *banditFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x0001BCC0);
    if (banditFaction) {
        factions.push_back({"BanditFaction", banditFaction});
    }

    RE::TESFaction *imperialFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x0002BF9A);
    if (imperialFaction) {
        factions.push_back({"ImperialFaction", imperialFaction});
    }

    RE::TESFaction *stormcloakFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00028849);
    if (stormcloakFaction) {
        factions.push_back({"StormcloakFaction", stormcloakFaction});
    }

    RE::TESFaction *bladesFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00072834);
    if (bladesFaction) {
        factions.push_back({"BladesFaction", bladesFaction});
    }

    RE::TESFaction *companionsFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00048362);
    if (companionsFaction) {
        factions.push_back({"CompanionsFaction", companionsFaction});
    }

    RE::TESFaction *dawnstarFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x0002816E);
    if (dawnstarFaction) {
        factions.push_back({"DawnstarFaction", dawnstarFaction});
    }

    RE::TESFaction *falkreathFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00028170);
    if (falkreathFaction) {
        factions.push_back({"FalkreathFaction", falkreathFaction});
    }

    RE::TESFaction *forswornFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00043599);
    if (forswornFaction) {
        factions.push_back({"ForswornFaction", forswornFaction});
    }

    RE::TESFaction *markarthFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x0002816C);
    if (markarthFaction) {
        factions.push_back({"MarkarthFaction", markarthFaction});
    }

    RE::TESFaction *morthalFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x0002816D);
    if (morthalFaction) {
        factions.push_back({"MorthalFaction", morthalFaction});
    }

    RE::TESFaction *nightingaleFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x000DEED6);
    if (nightingaleFaction) {
        factions.push_back({"NightingaleFaction", nightingaleFaction});
    }

    RE::TESFaction *riftenFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x0002816B);
    if (riftenFaction) {
        factions.push_back({"RiftenFaction", riftenFaction});
    }

    RE::TESFaction *solitudeFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00029DB0);
    if (solitudeFaction) {
        factions.push_back({"SolitudeFaction", solitudeFaction});
    }

    RE::TESFaction *whiterunFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x000267EA);
    if (whiterunFaction) {
        factions.push_back({"WhiterunFaction", whiterunFaction});
    }

    RE::TESFaction *windhelmFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x000267E3);
    if (windhelmFaction) {
        factions.push_back({"WindhelmFaction", windhelmFaction});
    }

    RE::TESFaction *winterholdFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00014217);
    if (winterholdFaction) {
        factions.push_back({"WinterholdFaction", winterholdFaction});
    }

    RE::TESFaction *thalmorFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x00039F26);
    if (thalmorFaction) {
        factions.push_back({"ThalmorFaction", thalmorFaction});
    }

    RE::TESFaction *silverHandFaction = RE::TESForm::LookupByID<RE::TESFaction>(0x000AA0A4);
    if (silverHandFaction) {
        factions.push_back({"SilverHandFaction", thalmorFaction});
    }

    return factions;
}

std::string GetTagForFaction(RE::TESFaction *faction) {
    if (faction) {
        auto it = factionFormIDToTagMap.find(faction->GetFormID());
        if (it != factionFormIDToTagMap.end()) {
            return it->second;
        }
    }
    return "";
}

RE::TESFaction *GetFactionByFormID(RE::FormID *formID) { return nullptr; }

std::vector<RE::TESFaction *> GetFactionsByArmorTags(RE::Actor *actor) {
    if (!actor) {
        return {};
    }

    std::set<RE::TESFaction *> factionsSet;
    // Get all Keywords starting with *npe*


    for (auto slot : allArmorSlots) {
        RE::TESObjectARMO *wornArmor = actor->GetWornArmor(slot);
        if (wornArmor) {
            for (const auto &[tag, factionID] : factionArmorTags) {
                if (wornArmor->HasKeywordString(tag)) {
                    RE::TESFaction *faction = RE::TESForm::LookupByID<RE::TESFaction>(factionID);
                    if (faction) {
                        factionsSet.insert(faction);
                    }
                }
            }
        }
    }

    return std::vector<RE::TESFaction *>(factionsSet.begin(), factionsSet.end());
}

RE::TESFaction *GetFactionByArmorTag(RE::Actor *actor) {
    if (!actor) {
        return nullptr;
    }

    for (auto &slot : allArmorSlots) {
        RE::TESObjectARMO *wornArmor = actor->GetWornArmor(slot);
        if (wornArmor) {
            for (const auto &[tag, factionID] : factionArmorTags) {
                if (wornArmor->HasKeywordString(tag)) {
                    return RE::TESForm::LookupByID<RE::TESFaction>(factionID);
                }
            }
        }
    }

    return nullptr;
}


std::vector<RE::TESFaction *> GetFactionsForActor(RE::Actor *actor) {
    std::vector<RE::TESFaction *> factions;

    if (!actor) {
        return factions;
    }

    auto dataHandler = RE::TESDataHandler::GetSingleton();
    if (!dataHandler) {
        return factions;
    }

    const auto &allFactions = dataHandler->GetFormArray<RE::TESFaction>();

    for (RE::TESFaction *faction : allFactions) {
        if (faction && actor->IsInFaction(faction)) {
            factions.push_back(faction);
        }
    }

    return factions;
}

RE::BSFixedString GetFactionEditorID(RE::TESFaction *faction) {
    if (faction) {
        const char *editorID = faction->GetFormEditorID();

        // Check if editorID is valid
        if (editorID && strlen(editorID) > 0) {
            return RE::BSFixedString(editorID);
        } else {
            // Fallback: return the faction's form ID in hexadecimal as a string
            char formIDBuffer[10];  // enough space for "0x" + 8 hex digits + null terminator
            snprintf(formIDBuffer, sizeof(formIDBuffer), "0x%08X", faction->GetFormID());
            auto factionName = factionFormIDToTagMap.find(faction->GetFormID());
            if (factionName != factionFormIDToTagMap.end()) {
                return RE::BSFixedString(factionName->second.c_str());
            }
            return RE::BSFixedString(formIDBuffer);
        }
    }
    return RE::BSFixedString("No FactionID found!");
}

RE::TESFaction *GetFactionByEditorID(RE::BSFixedString factionEditorID) {
    if (factionEditorID.empty()) {
        return nullptr;
    }

    auto dataHandler = RE::TESDataHandler::GetSingleton();
    if (!dataHandler) {
        return nullptr;
    }

    const auto &allFactions = dataHandler->GetFormArray<RE::TESFaction>();

    for (RE::TESFaction *faction : allFactions) {
        if (faction && strcmp(factionEditorID.c_str(), faction->GetFormEditorID()) == 0) {
            return faction;
        }
    }

    return nullptr;
}
