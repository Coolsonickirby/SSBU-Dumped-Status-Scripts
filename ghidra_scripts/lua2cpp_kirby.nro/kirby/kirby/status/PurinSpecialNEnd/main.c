
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNEnd_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0xf25ec440b);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_GROUND);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x132e75c9df);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xf25ec440b);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_GROUND);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x132e75c9df);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_MOTION_KIND_AIR);
    lVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOTION_RATE);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,PurinSpecialNEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

