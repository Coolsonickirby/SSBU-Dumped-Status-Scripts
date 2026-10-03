
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002f270(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_HIGE);
  uVar2 = lib::L2CValue::operator==(aLStack80,param_2);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_NOPPO);
    uVar2 = lib::L2CValue::operator==(aLStack80,param_2);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_KUROFUKU);
      uVar2 = lib::L2CValue::operator==(aLStack80,param_2);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_SONBURERO);
        uVar2 = lib::L2CValue::operator==(aLStack80,param_2);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_KIND_BOSS);
          uVar2 = lib::L2CValue::operator==(aLStack80,param_2);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar2 & 1) == 0) goto LAB_710002f4d4;
          lib::L2CValue::L2CValue(aLStack80,8.869);
          lib::L2CValue::operator=(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,4.378);
          lib::L2CValue::operator=(aLStack112,aLStack80);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,6.0);
          lib::L2CValue::operator=(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,4.0);
          lib::L2CValue::operator=(aLStack112,aLStack80);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,9.768);
        lib::L2CValue::operator=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,3.0);
        lib::L2CValue::operator=(aLStack112,aLStack80);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,8.65);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,3.5);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,7.763);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,4.0);
    lib::L2CValue::operator=(aLStack112,aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710002f4d4:
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_GUN_OFFSET_Y);
  fVar3 = (float)lib::L2CValue::as_number(aLStack128);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar3,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator+(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLOAT_GUN_OFFSET_Z);
  fVar3 = (float)lib::L2CValue::as_number(aLStack128);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar3,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

