
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001a230(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_SP);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLOAT_MAX_SP);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  uVar2 = lib::L2CValue::operator<=(param_3,aLStack80);
  if ((uVar2 & 1) == 0) {
    iVar1 = lib::L2CValue::as_integer(param_4);
    app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1)
    ;
    lib::L2CValue::L2CValue(param_1,false);
  }
  else {
    iVar1 = lib::L2CValue::as_integer(param_4);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

