
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRobot::status::SpecialHiItemShootAir_init(L2CFighterRobot *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessItemShoot_setup_status_kind_table_New(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROBOT_STATUS_KIND_SPECIAL_HI_ITEM_SHOOT_AIR);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_AIR);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessItemShoot_initStatus_common_New(this);
  FUN_7100017cb0(aLStack64,this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

