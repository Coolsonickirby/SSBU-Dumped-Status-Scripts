
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005f400(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  char cVar1;
  FighterPickelCraftWeaponKind FVar2;
  int iVar3;
  FighterPickelMaterialKind FVar4;
  L2CValue *pLVar5;
  Fighter *pFVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *pLVar9;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar9 = (L2CValue *)(param_2 + 200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,4);
  pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
  FVar2 = lib::L2CValue::as_integer(param_3);
  cVar1 = app::FighterSpecializer_Pickel::get_craft_weapon_material_kind(pFVar6,FVar2);
  lib::L2CValue::L2CValue(aLStack96,(int)cVar1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
  uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,aLStack96);
    FUN_71000599c0(aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
      FUN_7100059b10(aLStack112,param_2,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
      FUN_7100059b10(aLStack160,param_2,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      FUN_7100059b10(aLStack192,param_2,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
      FUN_7100059b10(aLStack224,param_2,aLStack240);
      lib::L2CValue::~L2CValue(aLStack240);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
      lib::L2CValue::L2CValue(aLStack256,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      FVar4 = lib::L2CValue::as_integer(aLStack288);
      iVar3 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar8,FVar4);
      lib::L2CValue::L2CValue(aLStack272,iVar3);
      uVar7 = lib::L2CValue::operator<=(aLStack272,aLStack256);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar7 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((uVar7 & 1) == 0) goto LAB_710005f6c8;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
        uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar7 & 1) != 0) goto LAB_710005f6b4;
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
        lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        iVar3 = lib::L2CValue::as_integer(aLStack272);
        iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::operator=(aLStack256,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::L2CValue(aLStack304,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
        pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
        pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
        FVar4 = lib::L2CValue::as_integer(aLStack304);
        iVar3 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar8,FVar4);
        lib::L2CValue::L2CValue(aLStack272,iVar3);
        uVar7 = lib::L2CValue::operator<=(aLStack272,aLStack256);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0);
          uVar7 = lib::L2CValue::operator==(aLStack160,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack304);
          if ((uVar7 & 1) == 0) goto LAB_710005f924;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
          uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar7 & 1) != 0) goto LAB_710005f6b4;
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
          lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
          iVar3 = lib::L2CValue::as_integer(aLStack272);
          iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::operator=(aLStack256,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::L2CValue(aLStack320,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
          pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
          pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
          FVar4 = lib::L2CValue::as_integer(aLStack320);
          iVar3 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar8,FVar4);
          lib::L2CValue::L2CValue(aLStack272,iVar3);
          uVar7 = lib::L2CValue::operator<=(aLStack272,aLStack256);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,0);
            uVar7 = lib::L2CValue::operator==(aLStack192,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack320);
            if ((uVar7 & 1) == 0) goto LAB_710005fa6c;
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
            uVar7 = lib::L2CValue::operator==(aLStack96,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar7 & 1) == 0) {
              pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
              lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
              pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
              iVar3 = lib::L2CValue::as_integer(aLStack272);
              iVar3 = app::FighterSpecializer_Pickel::get_material_num(pBVar8,iVar3);
              lib::L2CValue::L2CValue(aLStack80,iVar3);
              lib::L2CValue::operator=(aLStack256,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack272);
              lib::L2CValue::L2CValue(aLStack336,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
              pLVar9 = (L2CValue *)lib::L2CValue::operator[](pLVar9,5);
              pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
              FVar4 = lib::L2CValue::as_integer(aLStack336);
              iVar3 = app::FighterSpecializer_Pickel::get_generate_material_num(pBVar8,FVar4);
              lib::L2CValue::L2CValue(aLStack272,iVar3);
              uVar7 = lib::L2CValue::operator<=(aLStack272,aLStack256);
              if ((uVar7 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack80,0);
                uVar7 = lib::L2CValue::operator==(aLStack224,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack272);
                lib::L2CValue::~L2CValue(aLStack336);
                if ((uVar7 & 1) != 0) goto LAB_710005f6b4;
              }
              else {
                lib::L2CValue::~L2CValue(aLStack272);
                lib::L2CValue::~L2CValue(aLStack336);
              }
              lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
            }
            else {
LAB_710005f6b4:
              lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
            }
          }
          else {
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack320);
LAB_710005fa6c:
            lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
          }
        }
        else {
          lib::L2CValue::~L2CValue(aLStack272);
          lib::L2CValue::~L2CValue(aLStack304);
LAB_710005f924:
          lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
        }
      }
      else {
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack288);
LAB_710005f6c8:
        lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
      }
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_710005f700;
    }
  }
  lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
LAB_710005f700:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

