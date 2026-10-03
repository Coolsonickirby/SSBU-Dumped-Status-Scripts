
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b4060(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_RIGHT_END);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(param_1,iVar1);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack64,_WEAPON_PICKEL_TROLLEY_INSTANCE_WORK_ID_INT_RAIL_OBJECT_ID_LEFT_END);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(param_1,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

