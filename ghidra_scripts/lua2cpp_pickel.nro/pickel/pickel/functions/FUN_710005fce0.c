
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005fce0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  char cVar1;
  bool bVar2;
  FighterPickelCraftWeaponKind FVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  Fighter *pFVar7;
  ulong uVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor *pBVar11;
  float fVar12;
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
  
  pLVar10 = (L2CValue *)(param_2 + 200);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar10,4);
  pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
  FVar3 = lib::L2CValue::as_integer(param_3);
  cVar1 = app::FighterSpecializer_Pickel::get_craft_weapon_material_kind(pFVar7,FVar3);
  lib::L2CValue::L2CValue(aLStack96,(int)cVar1);
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x15e4513976);
  uVar8 = lib::L2CValue::as_integer(aLStack80);
  uVar9 = lib::L2CValue::as_integer(aLStack128);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar8 = lib::L2CValue::operator==(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,param_3);
    FUN_710005ef10(aLStack80,param_2,aLStack144);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack160,param_3);
      lib::L2CValue::L2CValue(aLStack176,aLStack96);
      FUN_71000598b0(aLStack128,aLStack160,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar10,4);
      pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
      FVar3 = lib::L2CValue::as_integer(param_3);
      fVar12 = (float)app::FighterSpecializer_Pickel::get_craft_weapon_durability(pFVar7,FVar3);
      lib::L2CValue::L2CValue(aLStack192,fVar12);
      lib::L2CValue::operator*(aLStack128,aLStack112);
      lib::L2CValue::L2CValue(aLStack80,0.01);
      lib::L2CValue::operator*(aLStack224,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack224);
      uVar8 = lib::L2CValue::operator<=(aLStack192,aLStack208);
      if ((uVar8 & 1) == 0) {
LAB_710005ffec:
        lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
      }
      else {
        pLVar10 = (L2CValue *)lib::L2CValue::operator[](pLVar10,5);
        pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        iVar4 = app::FighterSpecializer_Pickel::get_material_num(pBVar11,iVar4);
        lib::L2CValue::L2CValue(aLStack224,iVar4);
        lib::L2CValue::L2CValue(aLStack256,aLStack96);
        FUN_7100059b10(aLStack240,param_2,aLStack256);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack288,aLStack96);
        FUN_710005a8b0(aLStack272,param_2,aLStack288);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack272);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0);
          uVar5 = lib::L2CValue::operator==(aLStack240,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          uVar5 = ~uVar5 & 1;
        }
        else {
          uVar5 = 1;
        }
        lib::L2CValue::L2CValue(aLStack80,uVar5);
        uVar8 = lib::L2CValue::operator<=(aLStack80,aLStack224);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::~L2CValue(aLStack240);
          lib::L2CValue::~L2CValue(aLStack224);
          goto LAB_710005ffec;
        }
        lib::L2CValue::L2CValue(param_1,aLStack96);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
      }
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack128);
      goto LAB_710006001c;
    }
  }
  lib::L2CValue::L2CValue(param_1,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
LAB_710006001c:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

