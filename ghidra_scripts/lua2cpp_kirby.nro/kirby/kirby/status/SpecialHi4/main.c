
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialHi4_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_71001a6740();
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_FINALCUTTER_MOT_FRAME_INHERIT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xb73fb8d87);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_FINALCUTTER_GROUND_MOT);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xb73fb8d87);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_FINALCUTTER_AIR_MOT);
  lVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710022ad50(this);
  lib::L2CValue::L2CValue(aLStack80,SpecialHi4_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

