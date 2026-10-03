
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005d390(L2CValue *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  iVar1 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM;
  if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
    iVar4 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack144,iVar4);
      FUN_7100059490(aLStack128,param_2,aLStack144);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
      uVar2 = lib::L2CValue::operator==(aLStack128,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,iVar4);
        FUN_7100059490(aLStack160,param_2,aLStack176);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
        uVar2 = lib::L2CValue::operator==(aLStack160,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar2 & 1) != 0) goto LAB_710005d49c;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
LAB_710005d49c:
        lib::L2CValue::L2CValue(aLStack192,iVar4);
        FUN_71000596a0(aLStack128,param_2,aLStack192);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
        uVar2 = lib::L2CValue::operator==(aLStack128,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack192);
        if ((uVar2 & 1) != 0) {
          bVar3 = true;
          goto LAB_710005d510;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  bVar3 = false;
LAB_710005d510:
  lib::L2CValue::L2CValue(param_1,bVar3);
  return;
}

