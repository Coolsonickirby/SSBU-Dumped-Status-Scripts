
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::LucinaSpecialNEnd_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  long lVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar3 = lib::L2CValue::operator_(aLStack80,pLVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1b);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator_(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0xd20cd6527);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_MOTION);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x11c0a0c60e);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_AIR_MOTION);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0x105fd50101);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_MOTION);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x14de608e41);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_AIR_MOTION);
      lVar4 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x10c1b6f966);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1440037626);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MARTH_STATUS_SPECIAL_N_WORK_INT_END_AIR_MOTION);
    lVar4 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,LucinaSpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

