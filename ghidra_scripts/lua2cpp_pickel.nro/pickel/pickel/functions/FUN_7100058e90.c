
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100058e90(L2CValue *param_1,undefined8 param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_FAILURE);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
  if (0 < _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM) {
    iVar3 = _FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NUM + 1;
    do {
      iVar1 = iVar3 + -2;
      lib::L2CValue::L2CValue(aLStack176,iVar1);
      FUN_7100059490(aLStack160,param_2,aLStack176);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_FAILURE);
      uVar2 = lib::L2CValue::operator==(aLStack160,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = lib::L2CValue::operator<=(aLStack160,aLStack112), (uVar2 & 1) != 0)) {
        lib::L2CValue::L2CValue(aLStack208,iVar1);
        FUN_71000596a0(aLStack192,param_2,aLStack208);
        lib::L2CValue::~L2CValue(aLStack208);
        uVar2 = lib::L2CValue::operator<=(aLStack144,aLStack192);
        if ((uVar2 & 1) != 0) {
          lib::L2CValue::operator=(aLStack112,aLStack160);
          lib::L2CValue::operator=(aLStack144,aLStack192);
          lib::L2CValue::L2CValue(aLStack96,iVar1);
          lib::L2CValue::operator=(aLStack128,aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::~L2CValue(aLStack192);
      }
      lib::L2CValue::~L2CValue(aLStack160);
      iVar3 = iVar3 + -1;
    } while (1 < iVar3);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_NONE);
  uVar2 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_SWORD);
    lib::L2CValue::operator=(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_NONE);
  uVar2 = lib::L2CValue::operator==(aLStack144,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
    lib::L2CValue::operator=(aLStack144,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(param_1,aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(param_1,aLStack128);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

