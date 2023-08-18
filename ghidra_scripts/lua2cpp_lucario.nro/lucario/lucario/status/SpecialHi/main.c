
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialHi_main(L2CFighterLucario *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_CONTINUE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_GRAVITY_ONOFF);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::GroundModule__set_passable_check_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xc99afa0ff);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_MOTION_KIND);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x1021e597f5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_MOTION_KIND_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,0xc63a09d9c);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_MOTION_KIND);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x10dbeaaa96);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_MOTION_KIND_AIR);
    lVar4 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar4,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_710001de60(this);
  lib::L2CValue::L2CValue(aLStack64,SpecialHi_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

