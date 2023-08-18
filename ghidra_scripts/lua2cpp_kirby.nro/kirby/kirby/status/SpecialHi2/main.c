
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialHi2_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  long lVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_FINALCUTTER_METEOR_HIT_NUM);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_71001a6740(this);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_KIRBY_STATUS_WORK_ID_FLAG_FINALCUTTER_MOT_FRAME_INHERIT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xb9a9828b2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_FINALCUTTER_GROUND_MOT);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xf6d0a2d85);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_WORK_ID_INT_FINALCUTTER_AIR_MOT);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710022ad50(this);
  lib::L2CValue::L2CValue(aLStack64,SpecialHi2_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

