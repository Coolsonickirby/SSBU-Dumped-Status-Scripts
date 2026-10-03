
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100059b10(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  FighterPickelMaterialKind FVar2;
  int iVar3;
  L2CTable *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *pLVar8;
  int iVar9;
  L2CValue aLStack424 [16];
  L2CValue aLStack408 [16];
  L2CValue aLStack392 [16];
  L2CValue aLStack376 [16];
  L2CValue aLStack360 [16];
  L2CValue aLStack344 [16];
  L2CValue aLStack328 [16];
  L2CValue aLStack312 [16];
  L2CValue aLStack296 [16];
  L2CValue aLStack280 [16];
  L2CValue aLStack264 [16];
  L2CValue aLStack248 [16];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [16];
  L2CValue aLStack120 [24];
  
  pLVar4 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar4,7);
  lib::L2CValue::L2CValue(aLStack232,pLVar4);
  lib::L2CValue::L2CValue(aLStack120,0);
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  FUN_710005acb0(aLStack232,aLStack120,aLStack136,aLStack152,aLStack168,aLStack184,aLStack200,
                 aLStack216);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack120);
  pLVar4 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar4,7);
  lib::L2CValue::L2CValue(aLStack248,pLVar4);
  lib::L2CValue::L2CValue(aLStack120,0);
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  FUN_710005acb0(aLStack248,aLStack120,aLStack136,aLStack152,aLStack168,aLStack184,aLStack200,
                 aLStack216);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack120);
  pLVar4 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar4,7);
  lib::L2CValue::L2CValue(aLStack264,pLVar4);
  lib::L2CValue::L2CValue(aLStack120,0);
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  FUN_710005acb0(aLStack264,aLStack120,aLStack136,aLStack152,aLStack168,aLStack184,aLStack200,
                 aLStack216);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack120);
  pLVar4 = (L2CTable *)operator.new(0x48);
  lib::L2CTable::L2CTable(pLVar4,7);
  lib::L2CValue::L2CValue(aLStack280,pLVar4);
  lib::L2CValue::L2CValue(aLStack120,0);
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,0);
  lib::L2CValue::L2CValue(aLStack168,0);
  lib::L2CValue::L2CValue(aLStack184,0);
  lib::L2CValue::L2CValue(aLStack200,0);
  lib::L2CValue::L2CValue(aLStack216,0);
  FUN_710005acb0(aLStack280,aLStack120,aLStack136,aLStack152,aLStack168,aLStack184,aLStack200,
                 aLStack216);
  lib::L2CValue::~L2CValue(aLStack216);
  lib::L2CValue::~L2CValue(aLStack200);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack120);
  lib::L2CValue::L2CValue(aLStack136,0);
  lib::L2CValue::L2CValue(aLStack152,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
  iVar1 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
    iVar9 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack296,iVar9);
      FUN_7100059490(aLStack168,param_2,aLStack296);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
      uVar5 = lib::L2CValue::operator==(aLStack168,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::~L2CValue(aLStack168);
      lib::L2CValue::~L2CValue(aLStack296);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack312,iVar9);
        FUN_71000596a0(aLStack120,param_2,aLStack312);
        lib::L2CValue::operator=(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack312);
        lib::L2CValue::L2CValue(aLStack328,aLStack136);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
        FVar2 = lib::L2CValue::as_integer(aLStack328);
        iVar1 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar7,FVar2);
        lib::L2CValue::L2CValue(aLStack168,iVar1);
        lib::L2CValue::L2CValue(aLStack120,1);
        lib::L2CValue::operator+(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack232,aLStack184);
        lib::L2CValue::operator=(pLVar6,aLStack168);
        lib::L2CValue::~L2CValue(aLStack184);
        lib::L2CValue::~L2CValue(aLStack168);
        lib::L2CValue::~L2CValue(aLStack328);
        lib::L2CValue::operator=(aLStack152,aLStack136);
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
  iVar1 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
    iVar9 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack344,iVar9);
      FUN_7100059490(aLStack184,param_2,aLStack344);
      lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
      uVar5 = lib::L2CValue::operator==(aLStack184,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::~L2CValue(aLStack184);
      lib::L2CValue::~L2CValue(aLStack344);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack360,iVar9);
        FUN_71000596a0(aLStack120,param_2,aLStack360);
        lib::L2CValue::operator=(aLStack136,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack360);
        uVar5 = lib::L2CValue::operator==(aLStack152,aLStack136);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack376,aLStack136);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),5);
          pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
          FVar2 = lib::L2CValue::as_integer(aLStack376);
          iVar3 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar7,FVar2);
          lib::L2CValue::L2CValue(aLStack184,iVar3);
          lib::L2CValue::L2CValue(aLStack120,1);
          lib::L2CValue::operator+(aLStack136,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack248,aLStack200);
          lib::L2CValue::operator=(pLVar6,aLStack184);
          lib::L2CValue::~L2CValue(aLStack200);
          lib::L2CValue::~L2CValue(aLStack184);
          lib::L2CValue::~L2CValue(aLStack376);
          lib::L2CValue::operator=(aLStack168,aLStack136);
        }
      }
      iVar3 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
    if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
      iVar1 = 0;
      do {
        lib::L2CValue::L2CValue(aLStack392,iVar1);
        FUN_7100059490(aLStack184,param_2,aLStack392);
        lib::L2CValue::L2CValue(aLStack120,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_REPAIR);
        uVar5 = lib::L2CValue::operator==(aLStack184,aLStack120);
        lib::L2CValue::~L2CValue(aLStack120);
        lib::L2CValue::~L2CValue(aLStack184);
        lib::L2CValue::~L2CValue(aLStack392);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack408,iVar1);
          FUN_71000596a0(aLStack120,param_2,aLStack408);
          lib::L2CValue::operator=(aLStack136,aLStack120);
          lib::L2CValue::~L2CValue(aLStack120);
          lib::L2CValue::~L2CValue(aLStack408);
          uVar5 = lib::L2CValue::operator==(aLStack152,aLStack136);
          if (((uVar5 & 1) == 0) &&
             (uVar5 = lib::L2CValue::operator==(aLStack168,aLStack136), (uVar5 & 1) == 0)) {
            lib::L2CValue::L2CValue(aLStack424,aLStack136);
            FUN_710005a8b0(aLStack184,param_2,aLStack424);
            lib::L2CValue::L2CValue(aLStack120,1);
            lib::L2CValue::operator+(aLStack136,aLStack120);
            lib::L2CValue::~L2CValue(aLStack120);
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack264,aLStack200);
            lib::L2CValue::operator=(pLVar6,aLStack184);
            lib::L2CValue::~L2CValue(aLStack200);
            lib::L2CValue::~L2CValue(aLStack184);
            lib::L2CValue::~L2CValue(aLStack424);
            lib::L2CValue::operator=(aLStack168,aLStack136);
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
  }
  iVar1 = _FIGHTER_PICKEL_MATERIAL_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_MATERIAL_KIND_NUM) {
    iVar9 = 0;
    do {
      iVar3 = iVar9 + 1;
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack232,iVar3);
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack248,iVar3);
      lib::L2CValue::operator+(pLVar6,pLVar8);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack264,iVar3);
      lib::L2CValue::operator+(aLStack184,pLVar6);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack280,iVar3);
      lib::L2CValue::operator=(pLVar6,aLStack120);
      lib::L2CValue::~L2CValue(aLStack120);
      lib::L2CValue::~L2CValue(aLStack184);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  lib::L2CValue::L2CValue(aLStack120,1);
  lib::L2CValue::operator+(param_3,aLStack120);
  lib::L2CValue::~L2CValue(aLStack120);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack280,aLStack184);
  lib::L2CValue::L2CValue(param_1,pLVar6);
  lib::L2CValue::~L2CValue(aLStack184);
  lib::L2CValue::~L2CValue(aLStack168);
  lib::L2CValue::~L2CValue(aLStack152);
  lib::L2CValue::~L2CValue(aLStack136);
  lib::L2CValue::~L2CValue(aLStack280);
  lib::L2CValue::~L2CValue(aLStack264);
  lib::L2CValue::~L2CValue(aLStack248);
  lib::L2CValue::~L2CValue(aLStack232);
  return;
}

