
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002be90(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1);
  lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_LUCARIO_LUCARIOM_INSTANCE_WORK_ID_FLOAT_FINAL_TARGET_LR);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    uVar2 = lib::L2CValue::operator==(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x14187a5643);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xf9b673ae9);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,_WEAPON_LUCARIO_LUCARIOM_INSTANCE_WORK_ID_FLOAT_FINAL_TARGET_LR);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    fVar3 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar3);
    uVar2 = lib::L2CValue::operator==(aLStack64,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x101c093c50);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xb9e61061f);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

