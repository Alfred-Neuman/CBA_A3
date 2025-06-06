class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };
    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };

    class launch_Titan_base: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete PointerSlot;
        };
    };
    class launch_MRAWS_base_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete PointerSlot;
        };
    };
    class launch_RPG7_F: Launcher_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };

    class EBR_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
    };

    class srifle_EBR_F: EBR_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete UnderBarrelSlot;
        };
    };

    class GM6_base_F: Rifle_Long_Base_F {};

    class srifle_GM6_F: GM6_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };

    class LRR_base_F: Rifle_Long_Base_F {};

    class srifle_LRR_F: LRR_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };

    class DMR_01_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo;
    };

    class srifle_DMR_01_F: DMR_01_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete UnderBarrelSlot;
        };
    };

    class LMG_Mk200_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete PointerSlot;
            delete UnderBarrelSlot;
        };
    };

    class LMG_Zafir_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
        };
    };

    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class arifle_MXC_F: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
        };
    };

    class LMG_03_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
            delete UnderBarrelSlot;
        };
    };

    class DMR_07_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
        };
    };

    class SMG_05_base_F: Rifle_Short_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
            delete UnderBarrelSlot;
        };
    };
/*
    class arifle_AKS_base_F: Rifle_Base_F {
        class WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete UnderBarrelSlot;
        };
    };
*/
    class arifle_AK12_base_F: Rifle_Base_F {
        class WeaponSlotsInfo;
    };

    class arifle_AK12U_base_F: arifle_AK12_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete PointerSlot;
        };
    };

    class arifle_RPK12_base_F: arifle_AK12_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete PointerSlot;
        };
    };

    class arifle_SPAR_01_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
        };
    };

    class arifle_SPAR_02_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
            delete UnderBarrelSlot;
        };
    };

    class arifle_SPAR_03_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
            delete UnderBarrelSlot;
        };
    };

    class arifle_CTAR_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
        };
    };

    class arifle_CTARS_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
        };
    };

    class arifle_ARX_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete CowsSlot;
            delete PointerSlot;
            delete UnderBarrelSlot;
        };
    };

    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo;
    };

    class hgun_ACPC2_F: Pistol_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
            delete PointerSlot;
        };
   };

    class hgun_P07_F: Pistol_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
        };
    };

    class hgun_Pistol_heavy_01_F: Pistol_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
            delete PointerSlot;
        };
    };

    class hgun_Pistol_heavy_02_F: Pistol_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete MuzzleSlot;
            delete PointerSlot;
        };
    };

    class hgun_Rook40_F: Pistol_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete MuzzleSlot;
        };
    };

    class SMG_03_TR_BASE: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class SMG_03C_BASE: SMG_03_TR_BASE {};
    class SMG_03C_TR_black: SMG_03C_BASE {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            delete CowsSlot;
            delete PointerSlot;
        };
    };
};
