
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e930(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_X);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  uVar2 = lib::L2CValue::operator<(aLStack48,aLStack80);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) == 0) {
LAB_710002e9e4:
    lib::L2CValue::L2CValue(aLStack48,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack80,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack48,0.0);
      uVar2 = lib::L2CValue::operator<(aLStack48,aLStack64);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar2 & 1) != 0) goto LAB_710002ea34;
    }
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,0.0);
    uVar2 = lib::L2CValue::operator<(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) == 0) goto LAB_710002e9e4;
LAB_710002ea34:
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

